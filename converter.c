#include<stdio.h>
void convertor(int opt);
void convertor(int opt){
    int input_num;
    switch(opt){
	case 1:{
	       float input_num;
	       int sub_opt;
	       printf("1.Kelvin\n2.Fahrenheit\nenter the conversion perference type:");
	       scanf("%d",&sub_opt);
               printf("Enter the celsius temperatutre value:");
               scanf("%f",&input_num);
	       switch(sub_opt){
		   case 1:printf("The equivalent kelvin temperature is %g\n",input_num+273.15);
			  break;
		   case 2:printf("The equivalent fahrenheit temperature is %g\n",(input_num*(9/(float)5))+32);
			  break;
		   default:printf("Invalid selection\n");
			   break;
	              }
	       }
	       break;
	 case 2: {
            float input_num;
            int sub_opt;
            printf("1.Kilograms to Grams\n2.Kilograms to Pounds\nEnter the conversion preference type: ");
            scanf("%d", &sub_opt);
            printf("Enter the weight in kilograms: ");
            scanf("%f", &input_num);
            switch(sub_opt) {
                case 1:printf("The equivalent grams is %g",input_num * 1000);
		       break;
                case 2:printf("The equivalent pounds is %g",input_num * 2.20462);
		       break;
                default:printf("Invalid selection");
		       break;
            }
        }
		 break;
        case 3: {
	    float input_num;
            int sub_opt;
            printf("1.INR to USD\nEnter the conversion preference type: ");
            scanf("%d", &sub_opt);
            printf("Enter the amount: ");
            scanf("%f", &input_num);
            switch(sub_opt) {
                case 1:printf("The equivalent USD is %g",input_num * 74.39);
		       break;
                default:printf("Invalid selection");
                       break; 
            }
        }
		break;
        case 4: {
	    float input_num;
            int sub_opt;
            printf("1.Meters to Centimeters\n2.Meters to Inches\nEnter the conversion preference type: ");
            scanf("%d", &sub_opt);
            printf("Enter the length in meters: ");
            scanf("%f", &input_num);
            switch(sub_opt) {
                case 1:printf("the equivalent centimeters is %g",input_num * 100);
		    break;
                case 2:printf("the equivalent inches is %g",input_num * 39.3701);
		       break;
		default:printf("invalid selection");
                       break;
	    }
		}
    }
}

int main(){
int opt;
printf("Welcome to Converter application!\n1.Temperature\n2.Weight\n3.Currency\n4.Length\nchoose an option to continue:");
scanf("%d",&opt);
convertor(opt);



	return 0;
    }


