#include<iostream>
using namespace std;
class array1
{
	int size;
	int arr[100];
	public:
		array1()
		{
			cout<<"Enter size of array\n";
			cin>>size;
			cout<<"Enter values:\n";
			for(int i=0;i<size;i++)
			{
				cin>>arr[i];
			}
		}
		void insert()
		{
	        cout<<"Enter position where you want to insert\n";
	        int pos,i;
	        cin>>pos;
	        for( i=size-1;i>=pos;i--)
	        {
		        arr[i+1]=arr[i];
	        }
	        cout<<"Enter element you want to insert\n";
	        int ele;
	        cin>>ele;
	        arr[i+1]=ele;
	        size=size+1;
		}

		void delete1()
		{
			int pos1,i;
			cout<<"Enter position which you want to delete an element\n";
			cin>>pos1;
			for(i=pos1;i<size;i++)
			{
				arr[i]=arr[i+1];
			}
			size=size-1;
		}

		void location()
		{
			int ele1,i;
			cout<<"Enter the element you want to search\n";
			cin>>ele1;
			int f=0;
			for(i=0;i<size;i++)
			{
				if(arr[i]==ele1)
				{
					f=1;
					cout<<"Element is found at position "<<i<<endl;
				}
			}
			if(f==0)
			cout<<"Element not found\n";
		}
		void show()
		{
		    int i;
		    for(i=0;i<size;i++)
		    {
			    cout<<arr[i]<<endl;
		    }	
		}
		
};


int main()
{
	array1 obj1;
	int ch;
	while(1)
	{
	    cout<<"Enter 1 to insert a new element at specified position in array\n";
	    cout<<"Enter 2 to delete  given element\n ";
	    cout<<"Enter 3 to search an element in array\n";
	    cout<<"Enter 4 to show array elements\n";
	    cout<<"Enter your choice\n";

    	cin>>ch;
	    switch(ch)
	    {
    		case 1:
			    obj1.insert();
			    break;
    
		    case 2:
			    obj1.delete1();
			    break;
			
    		case 3:
	    		obj1.location();
		    	break;
			
		    case 4:
			    obj1.show();
			    break;
			
	        default:
		        cout<<"you have Entered a wrong choice\n";
		        break;			
	    }
    }
	cout<<"Exiting Program.../";
}
