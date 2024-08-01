
struct customer{
    char name[50];
    float cash;
    char type[7];
    int id;
};
void Add_new_customer(void);
void print_customer_data(int id);
void edit_customer_data(int id);
void cash_transfer(int source_id,int destination_id,float money);
void delete_customer(int id);
