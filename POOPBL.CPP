#include<iostream.h>
main()
{
int time,patientid,doctor,days,time2;
char slot;
int option,session;
cout<<"enter patient id\n";
cin>>patientid;
cout<<"select doctor\n1.doctor1\n2.doctor2\n3.doctor3\n";
cin>>doctor;
if(doctor==1)
{
cout<<"select days\n1.monday\n2.tuesday\n3.wednesday\n4.thursday\n5.friday\n6.saturday\n";
cin>>days;
}
if(doctor==2)
{
cout<<"select days\n1.monday\n2.tuesday\n3.wednesday\n4.thursday\n5.friday\n6.saturday\n";
cin>>days;
}
if(doctor==3)
{
cout<<"select days\n1.monday\n2.tuesday\n3.wednesday\n4.thursday\n5.friday\n6.saturday\n";
cin>>days;
}
if(days==1)
{
cout<<"select session\n1.morning\n2.evening\n";
cin>>session;
}
if(days==2)
{
cout<<"select session\n1.morning\n2.evening\n";
cin>>session;
}
if(days==3)
{
cout<<"select session\n1.morning\n2.evening\n";
cin>>session;
}
if(days==4)
{
cout<<"select session\n1.morning\n2.evening\n";
cin>>session;
}
if(days==5)
{
cout<<"select session\n1.morning\n2.evening\n";
cin>>session;
}
if(days==6)
{
cout<<"select session\n1.morning\n2.evening\n";
cin>>session;
}
if(session==1)
{
cout<<"select time\n1.9to10am\n2.10to11am\n3.11to12pm\n4.12to1pm\n";
cin>>time;
}
if(time==1)
{
cout<<"select slot\n1.9to9.15am\n2.9.15to9.30am\n3.9.30to9.45am\n4.9.45to10am\n";
cin>>time;
}
if(time==2)
{
cout<<"select slot\n1.10to10.15am\n2.10.15to10.30am\n3.10.30to10.45am\n4.10.45to11am\n";
cin>>time;
}
if(time==3)
{
cout<<"select slot\n1.11to11.15am\n2.11.15to11.30am\n3.11.30to11.45am\n4.11.45to12pm\n";
cin>>time;
}
if(time==4)
{
cout<<"select slot\n1.12to12.15pm\n2.12.15to12.30pm\n3.12.30to12.45pm\n4.12.45to1pm\n";
cin>>time;
}
if(session==2)
{
cout<<"select time\n1.5to6am\n2.6to7am\n3.7to8pm\n4.8to9pm\n";
cin>>time2;
}
if(time2==1)
{
cout<<"select slot\n1.5to5.15pm\n2.5.15to5.30pm\n3.5.30to5.45pm\n4.5.45to6pm\n";
cin>>time2;
}
if(time2==2)
{
cout<<"select slot\n1.6to6.15pm\n2.6.15to6.30pm\n3.6.30to6.45pm\n4.6.45to7pm\n";
cin>>time2;
}
if(time2==3)
{
cout<<"select slot\n1.7to7.15pm\n2.7.15to7.30pm\n3.7.30to7.45pm\n4.7.45to8pm\n";
cin>>time2;
}
if(time2==4)
{
cout<<"select slot\n1.8to8.15pm\n2.8.15to8.30pm\n3.8.30to8.45pm\n4.8.45to9pm\n";
cin>>time2;
}
cout<<"select option\n1.confirm\n2.cancel\n";
cin>>option;
if(option==1)
{
cout<<"appointment is allotted\nconfirmation message is sent\n";
}
if(option==2)
{
cout<<"oppointment is cancelled\n";
}
return 0;
}