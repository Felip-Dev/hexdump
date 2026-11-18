#include <stdarg.h>

typedef enum {TAG_ERROR, TAG_FATAL, TAG_WARNING} tags;


#define LOG_ERROR(...) log(TAG_ERROR,__FILE__,__LINE__, __VA_ARGS__)
#define LOG_FATAL(...) log(TAG_FATAL,__FILE__,__LINE__, __VA_ARGS__)
#define LOG_WARNING(...) log(TAG_WARNING, __FILE__, __LINE__, __VA_ARGS__)

void log_message(int tag, const char* file, int line, const char* fmt, ...);
