CURL* rest_open();
void rest_post(CURL* easy_handler,char* url,char* dev_name,char* var_name,char* token,float value);
void rest_close(CURL* easy_handler);
size_t write_data(char *buffer, size_t size, size_t nmemb, void *userp);
void rest_get(CURL* easy_handler,char* url,char* dev_name,char* var_name,char* token,int* data);
