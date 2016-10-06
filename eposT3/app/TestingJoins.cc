
#include <utility/ostream.h>
#include <thread.h>
#include <mutex.h>
#include <semaphore.h>
#include <alarm.h>
#include <display.h>

using namespace EPOS;

OStream cout;


int infinite(){
	int i =0;
	cout<<"Starting tretas"<<endl;
	while(i < 100){
		cout<<1000 + i<<"Tretas"<<endl;
		i++;
	}
	return 0;
}

int main(){
	Thread* thread = new Thread(&infinite);
	cout<<"waited size" << thread->waited().size()<<endl;
	thread->join();
	cout<<"waited size" << thread->waited().size()<<endl;
	cout<<"the treta has been planted"<<endl;
	return 0;
}

