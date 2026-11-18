#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"

namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Specialized { class NameValueCollection; }
namespace System::ComponentModel { class AsyncCompletedEventArgs; }
namespace System::ComponentModel { class AsyncCompletedEventHandler; }
namespace System::ComponentModel { class AsyncOperation; }
namespace System::IO { class FileStream; }
namespace System::IO { class Stream; }
namespace System::Net { class CompletionDelegate; }
namespace System::Net { class DownloadDataCompletedEventArgs; }
namespace System::Net { class DownloadDataCompletedEventHandler; }
namespace System::Net { class DownloadProgressChangedEventArgs; }
namespace System::Net { class DownloadProgressChangedEventHandler; }
namespace System::Net { class DownloadStringCompletedEventArgs; }
namespace System::Net { class DownloadStringCompletedEventHandler; }
namespace System::Net { class ICredentials; }
namespace System::Net { class IWebProxy; }
namespace System::Net { class OpenReadCompletedEventArgs; }
namespace System::Net { class OpenReadCompletedEventHandler; }
namespace System::Net { class OpenWriteCompletedEventArgs; }
namespace System::Net { class OpenWriteCompletedEventHandler; }
namespace System::Net { class UploadDataCompletedEventArgs; }
namespace System::Net { class UploadDataCompletedEventHandler; }
namespace System::Net { class UploadFileCompletedEventArgs; }
namespace System::Net { class UploadFileCompletedEventHandler; }
namespace System::Net { class UploadProgressChangedEventArgs; }
namespace System::Net { class UploadProgressChangedEventHandler; }
namespace System::Net { class UploadStringCompletedEventArgs; }
namespace System::Net { class UploadStringCompletedEventHandler; }
namespace System::Net { class UploadValuesCompletedEventArgs; }
namespace System::Net { class UploadValuesCompletedEventHandler; }
namespace System::Net { class WebClient_DownloadBitsState; }
namespace System::Net { class WebClient_ProgressData; }
namespace System::Net { class WebClient_UploadBitsState; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Net { class WebRequest; }
namespace System::Net { class WebResponse; }
namespace System::Net { class WriteStreamClosedEventArgs; }
namespace System::Net { class WriteStreamClosedEventHandler; }
namespace System::Net::Cache { class RequestCachePolicy; }
namespace System::Text { class Encoding; }
namespace System::Threading { class SendOrPostCallback; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_WEBCLIENT_ABORTREQUEST_OFFSET UNITYSDK_OFFSET(0x1CFCA9F0)
#define SYSTEM_NET_WEBCLIENT_ADD_DOWNLOADDATACOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD1CF0)
#define SYSTEM_NET_WEBCLIENT_ADD_DOWNLOADFILECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD23E0)
#define SYSTEM_NET_WEBCLIENT_ADD_DOWNLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1CFD6DC0)
#define SYSTEM_NET_WEBCLIENT_ADD_DOWNLOADSTRINGCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD1510)
#define SYSTEM_NET_WEBCLIENT_ADD_OPENREADCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD01D0)
#define SYSTEM_NET_WEBCLIENT_ADD_OPENWRITECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD0BB0)
#define SYSTEM_NET_WEBCLIENT_ADD_UPLOADDATACOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD37C0)
#define SYSTEM_NET_WEBCLIENT_ADD_UPLOADFILECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD4180)
#define SYSTEM_NET_WEBCLIENT_ADD_UPLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1CFD6EC0)
#define SYSTEM_NET_WEBCLIENT_ADD_UPLOADSTRINGCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD2B80)
#define SYSTEM_NET_WEBCLIENT_ADD_UPLOADVALUESCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD4C60)
#define SYSTEM_NET_WEBCLIENT_ADD_WRITESTREAMCLOSED_OFFSET UNITYSDK_OFFSET(0x1CFC8FF0)
#define SYSTEM_NET_WEBCLIENT_ANOTHERCALLINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1CFC8F90)
#define SYSTEM_NET_WEBCLIENT_BYTEARRAYHASPREFIX_OFFSET UNITYSDK_OFFSET(0x1CFCFBE0)
#define SYSTEM_NET_WEBCLIENT_CANCELASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD5620)
#define SYSTEM_NET_WEBCLIENT_CLEARWEBCLIENTSTATE_OFFSET UNITYSDK_OFFSET(0x1CFC8EB0)
#define SYSTEM_NET_WEBCLIENT_COMPLETEWEBCLIENTSTATE_OFFSET UNITYSDK_OFFSET(0x1CFC8FA0)
#define SYSTEM_NET_WEBCLIENT_COPYHEADERSTO_OFFSET UNITYSDK_OFFSET(0x1CFC9750)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADBITSREADCALLBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1CFCF1D0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADBITSREADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFCF0C0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADBITSRESPONSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFCED80)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADBITS_OFFSET UNITYSDK_OFFSET(0x1CFCA8A0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADDATAASYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFD1E90)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADDATAASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD1FE0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADDATAASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD1FD0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CFCA2D0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADDATAOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD1E10)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADDATATASKASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD6100)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADDATATASKASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD60E0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADDATA_1_OFFSET UNITYSDK_OFFSET(0x1CFCA0D0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFC9DB0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADFILEASYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFD2580)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADFILEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD26C0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD26B0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADFILEOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD2500)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADFILETASKASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD6360)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADFILETASKASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD6330)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADFILE_1_OFFSET UNITYSDK_OFFSET(0x1CFCAB60)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADFILE_OFFSET UNITYSDK_OFFSET(0x1CFCAAD0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADSTRINGASYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFD16B0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADSTRINGASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD18F0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADSTRINGASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD18E0)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADSTRINGOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD1630)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADSTRINGTASKASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD5720)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADSTRINGTASKASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD5700)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADSTRING_1_OFFSET UNITYSDK_OFFSET(0x1CFCEB70)
#define SYSTEM_NET_WEBCLIENT_DOWNLOADSTRING_OFFSET UNITYSDK_OFFSET(0x1CFCEAF0)
#define SYSTEM_NET_WEBCLIENT_GETSTRINGUSINGENCODING_OFFSET UNITYSDK_OFFSET(0x1CFCE080)
#define SYSTEM_NET_WEBCLIENT_GETURI_1_OFFSET UNITYSDK_OFFSET(0x1CFCA480)
#define SYSTEM_NET_WEBCLIENT_GETURI_OFFSET UNITYSDK_OFFSET(0x1CFC9E30)
#define SYSTEM_NET_WEBCLIENT_GETWEBREQUEST_OFFSET UNITYSDK_OFFSET(0x1CFC9600)
#define SYSTEM_NET_WEBCLIENT_GETWEBRESPONSE_1_OFFSET UNITYSDK_OFFSET(0x1CFC9D70)
#define SYSTEM_NET_WEBCLIENT_GETWEBRESPONSE_OFFSET UNITYSDK_OFFSET(0x1CFC9D40)
#define SYSTEM_NET_WEBCLIENT_GET_ALLOWREADSTREAMBUFFERING_OFFSET UNITYSDK_OFFSET(0x1CFC8FB0)
#define SYSTEM_NET_WEBCLIENT_GET_ALLOWWRITESTREAMBUFFERING_OFFSET UNITYSDK_OFFSET(0x1CFC8FD0)
#define SYSTEM_NET_WEBCLIENT_GET_BASEADDRESS_OFFSET UNITYSDK_OFFSET(0x1CFC90A0)
#define SYSTEM_NET_WEBCLIENT_GET_CACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x1CFC95D0)
#define SYSTEM_NET_WEBCLIENT_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1CFC9270)
#define SYSTEM_NET_WEBCLIENT_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1CFC9020)
#define SYSTEM_NET_WEBCLIENT_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1CFC9370)
#define SYSTEM_NET_WEBCLIENT_GET_ISBUSY_OFFSET UNITYSDK_OFFSET(0x1CFC95F0)
#define SYSTEM_NET_WEBCLIENT_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1CFC9550)
#define SYSTEM_NET_WEBCLIENT_GET_QUERYSTRING_OFFSET UNITYSDK_OFFSET(0x1CFC9470)
#define SYSTEM_NET_WEBCLIENT_GET_RESPONSEHEADERS_OFFSET UNITYSDK_OFFSET(0x1CFC9530)
#define SYSTEM_NET_WEBCLIENT_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1CFC9290)
#define SYSTEM_NET_WEBCLIENT_INITWEBCLIENTASYNC_OFFSET UNITYSDK_OFFSET(0x1CFC8C90)
#define SYSTEM_NET_WEBCLIENT_INTTOHEX_OFFSET UNITYSDK_OFFSET(0x1CFD0170)
#define SYSTEM_NET_WEBCLIENT_INVOKEOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD0180)
#define SYSTEM_NET_WEBCLIENT_ISSAFE_OFFSET UNITYSDK_OFFSET(0x1CFD0130)
#define SYSTEM_NET_WEBCLIENT_MAPTODEFAULTMETHOD_OFFSET UNITYSDK_OFFSET(0x1CFCB890)
#define SYSTEM_NET_WEBCLIENT_ONDOWNLOADDATACOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD1DF0)
#define SYSTEM_NET_WEBCLIENT_ONDOWNLOADFILECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD24E0)
#define SYSTEM_NET_WEBCLIENT_ONDOWNLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1CFD6FC0)
#define SYSTEM_NET_WEBCLIENT_ONDOWNLOADSTRINGCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD1610)
#define SYSTEM_NET_WEBCLIENT_ONOPENREADCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD02D0)
#define SYSTEM_NET_WEBCLIENT_ONOPENWRITECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD0CB0)
#define SYSTEM_NET_WEBCLIENT_ONUPLOADDATACOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD38C0)
#define SYSTEM_NET_WEBCLIENT_ONUPLOADFILECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD4280)
#define SYSTEM_NET_WEBCLIENT_ONUPLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1CFD6FE0)
#define SYSTEM_NET_WEBCLIENT_ONUPLOADSTRINGCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD2C80)
#define SYSTEM_NET_WEBCLIENT_ONUPLOADVALUESCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD4D60)
#define SYSTEM_NET_WEBCLIENT_ONWRITESTREAMCLOSED_OFFSET UNITYSDK_OFFSET(0x1CFC9010)
#define SYSTEM_NET_WEBCLIENT_OPENFILEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CFCC300)
#define SYSTEM_NET_WEBCLIENT_OPENREADASYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFD0370)
#define SYSTEM_NET_WEBCLIENT_OPENREADASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD0760)
#define SYSTEM_NET_WEBCLIENT_OPENREADASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD0750)
#define SYSTEM_NET_WEBCLIENT_OPENREADOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD02F0)
#define SYSTEM_NET_WEBCLIENT_OPENREADTASKASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD5960)
#define SYSTEM_NET_WEBCLIENT_OPENREADTASKASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD5940)
#define SYSTEM_NET_WEBCLIENT_OPENREAD_1_OFFSET UNITYSDK_OFFSET(0x1CFCB010)
#define SYSTEM_NET_WEBCLIENT_OPENREAD_OFFSET UNITYSDK_OFFSET(0x1CFCAF90)
#define SYSTEM_NET_WEBCLIENT_OPENWRITEASYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFD0D50)
#define SYSTEM_NET_WEBCLIENT_OPENWRITEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD1500)
#define SYSTEM_NET_WEBCLIENT_OPENWRITEASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CFD10A0)
#define SYSTEM_NET_WEBCLIENT_OPENWRITEASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD1090)
#define SYSTEM_NET_WEBCLIENT_OPENWRITEOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD0CD0)
#define SYSTEM_NET_WEBCLIENT_OPENWRITETASKASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD5DF0)
#define SYSTEM_NET_WEBCLIENT_OPENWRITETASKASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CFD5E00)
#define SYSTEM_NET_WEBCLIENT_OPENWRITETASKASYNC_3_OFFSET UNITYSDK_OFFSET(0x1CFD5BB0)
#define SYSTEM_NET_WEBCLIENT_OPENWRITETASKASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD5B90)
#define SYSTEM_NET_WEBCLIENT_OPENWRITE_1_OFFSET UNITYSDK_OFFSET(0x1CFCB7F0)
#define SYSTEM_NET_WEBCLIENT_OPENWRITE_2_OFFSET UNITYSDK_OFFSET(0x1CFCB800)
#define SYSTEM_NET_WEBCLIENT_OPENWRITE_3_OFFSET UNITYSDK_OFFSET(0x1CFCB400)
#define SYSTEM_NET_WEBCLIENT_OPENWRITE_OFFSET UNITYSDK_OFFSET(0x1CFCB380)
#define SYSTEM_NET_WEBCLIENT_POSTPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1CFD7100)
#define SYSTEM_NET_WEBCLIENT_REMOVE_DOWNLOADDATACOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD1D70)
#define SYSTEM_NET_WEBCLIENT_REMOVE_DOWNLOADFILECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD2460)
#define SYSTEM_NET_WEBCLIENT_REMOVE_DOWNLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1CFD6E40)
#define SYSTEM_NET_WEBCLIENT_REMOVE_DOWNLOADSTRINGCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD1590)
#define SYSTEM_NET_WEBCLIENT_REMOVE_OPENREADCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD0250)
#define SYSTEM_NET_WEBCLIENT_REMOVE_OPENWRITECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD0C30)
#define SYSTEM_NET_WEBCLIENT_REMOVE_UPLOADDATACOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD3840)
#define SYSTEM_NET_WEBCLIENT_REMOVE_UPLOADFILECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD4200)
#define SYSTEM_NET_WEBCLIENT_REMOVE_UPLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1CFD6F40)
#define SYSTEM_NET_WEBCLIENT_REMOVE_UPLOADSTRINGCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD2C00)
#define SYSTEM_NET_WEBCLIENT_REMOVE_UPLOADVALUESCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD4CE0)
#define SYSTEM_NET_WEBCLIENT_REMOVE_WRITESTREAMCLOSED_OFFSET UNITYSDK_OFFSET(0x1CFC9000)
#define SYSTEM_NET_WEBCLIENT_REPORTDOWNLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1CFD7000)
#define SYSTEM_NET_WEBCLIENT_REPORTUPLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1CFD7080)
#define SYSTEM_NET_WEBCLIENT_SET_ALLOWREADSTREAMBUFFERING_OFFSET UNITYSDK_OFFSET(0x1CFC8FC0)
#define SYSTEM_NET_WEBCLIENT_SET_ALLOWWRITESTREAMBUFFERING_OFFSET UNITYSDK_OFFSET(0x1CFC8FE0)
#define SYSTEM_NET_WEBCLIENT_SET_BASEADDRESS_OFFSET UNITYSDK_OFFSET(0x1CFC9130)
#define SYSTEM_NET_WEBCLIENT_SET_CACHEPOLICY_OFFSET UNITYSDK_OFFSET(0x1CFC95E0)
#define SYSTEM_NET_WEBCLIENT_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1CFC9280)
#define SYSTEM_NET_WEBCLIENT_SET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1CFC9030)
#define SYSTEM_NET_WEBCLIENT_SET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1CFC9460)
#define SYSTEM_NET_WEBCLIENT_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x1CFC95C0)
#define SYSTEM_NET_WEBCLIENT_SET_QUERYSTRING_OFFSET UNITYSDK_OFFSET(0x1CFC9520)
#define SYSTEM_NET_WEBCLIENT_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1CFC9300)
#define SYSTEM_NET_WEBCLIENT_STARTDOWNLOADASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD2D20)
#define SYSTEM_NET_WEBCLIENT_UPLOADBITSREQUESTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFCF530)
#define SYSTEM_NET_WEBCLIENT_UPLOADBITSWRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFCF840)
#define SYSTEM_NET_WEBCLIENT_UPLOADBITS_OFFSET UNITYSDK_OFFSET(0x1CFCBFF0)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATAASYNCREADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFD3B00)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATAASYNCWRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFD3960)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATAASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD4160)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATAASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CFD3C60)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATAASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD3C40)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CFCBDB0)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATAOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD38E0)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATATASKASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD6810)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATATASKASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CFD6820)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATATASKASYNC_3_OFFSET UNITYSDK_OFFSET(0x1CFD65D0)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATATASKASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD65A0)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATA_1_OFFSET UNITYSDK_OFFSET(0x1CFCBD10)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATA_2_OFFSET UNITYSDK_OFFSET(0x1CFCBD20)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATA_3_OFFSET UNITYSDK_OFFSET(0x1CFCBAB0)
#define SYSTEM_NET_WEBCLIENT_UPLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFCBA20)
#define SYSTEM_NET_WEBCLIENT_UPLOADFILEASYNCREADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFD44C0)
#define SYSTEM_NET_WEBCLIENT_UPLOADFILEASYNCWRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFD4320)
#define SYSTEM_NET_WEBCLIENT_UPLOADFILEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD4C40)
#define SYSTEM_NET_WEBCLIENT_UPLOADFILEASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CFD4620)
#define SYSTEM_NET_WEBCLIENT_UPLOADFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD4600)
#define SYSTEM_NET_WEBCLIENT_UPLOADFILEOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD42A0)
#define SYSTEM_NET_WEBCLIENT_UPLOADFILETASKASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD6AC0)
#define SYSTEM_NET_WEBCLIENT_UPLOADFILETASKASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CFD6AD0)
#define SYSTEM_NET_WEBCLIENT_UPLOADFILETASKASYNC_3_OFFSET UNITYSDK_OFFSET(0x1CFD6880)
#define SYSTEM_NET_WEBCLIENT_UPLOADFILETASKASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD6850)
#define SYSTEM_NET_WEBCLIENT_UPLOADFILE_1_OFFSET UNITYSDK_OFFSET(0x1CFCCB70)
#define SYSTEM_NET_WEBCLIENT_UPLOADFILE_2_OFFSET UNITYSDK_OFFSET(0x1CFCD120)
#define SYSTEM_NET_WEBCLIENT_UPLOADFILE_3_OFFSET UNITYSDK_OFFSET(0x1CFCCB80)
#define SYSTEM_NET_WEBCLIENT_UPLOADFILE_OFFSET UNITYSDK_OFFSET(0x1CFCCAE0)
#define SYSTEM_NET_WEBCLIENT_UPLOADSTRINGASYNCREADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFD3050)
#define SYSTEM_NET_WEBCLIENT_UPLOADSTRINGASYNCWRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFD2EC0)
#define SYSTEM_NET_WEBCLIENT_UPLOADSTRINGASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD37A0)
#define SYSTEM_NET_WEBCLIENT_UPLOADSTRINGASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CFD32A0)
#define SYSTEM_NET_WEBCLIENT_UPLOADSTRINGASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD3280)
#define SYSTEM_NET_WEBCLIENT_UPLOADSTRINGOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD2CA0)
#define SYSTEM_NET_WEBCLIENT_UPLOADSTRINGTASKASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD5E90)
#define SYSTEM_NET_WEBCLIENT_UPLOADSTRINGTASKASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CFD5E60)
#define SYSTEM_NET_WEBCLIENT_UPLOADSTRINGTASKASYNC_3_OFFSET UNITYSDK_OFFSET(0x1CFD5EA0)
#define SYSTEM_NET_WEBCLIENT_UPLOADSTRINGTASKASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD5E30)
#define SYSTEM_NET_WEBCLIENT_UPLOADSTRING_1_OFFSET UNITYSDK_OFFSET(0x1CFCDFE0)
#define SYSTEM_NET_WEBCLIENT_UPLOADSTRING_2_OFFSET UNITYSDK_OFFSET(0x1CFCDFF0)
#define SYSTEM_NET_WEBCLIENT_UPLOADSTRING_3_OFFSET UNITYSDK_OFFSET(0x1CFCDD50)
#define SYSTEM_NET_WEBCLIENT_UPLOADSTRING_OFFSET UNITYSDK_OFFSET(0x1CFCDCC0)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUESASYNCREADCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFD4FA0)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUESASYNCWRITECALLBACK_OFFSET UNITYSDK_OFFSET(0x1CFD4E00)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUESASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD5600)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUESASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CFD5100)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUESASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD50E0)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CFCD150)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUESOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CFD4D80)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUESTASKASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CFD6D80)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUESTASKASYNC_2_OFFSET UNITYSDK_OFFSET(0x1CFD6DB0)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUESTASKASYNC_3_OFFSET UNITYSDK_OFFSET(0x1CFD6B40)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUESTASKASYNC_OFFSET UNITYSDK_OFFSET(0x1CFD6B10)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUES_1_OFFSET UNITYSDK_OFFSET(0x1CFCDC20)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUES_2_OFFSET UNITYSDK_OFFSET(0x1CFCDC30)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUES_3_OFFSET UNITYSDK_OFFSET(0x1CFCD800)
#define SYSTEM_NET_WEBCLIENT_UPLOADVALUES_OFFSET UNITYSDK_OFFSET(0x1CFCD770)
#define SYSTEM_NET_WEBCLIENT_URLENCODEBYTESTOBYTESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1CFCFE20)
#define SYSTEM_NET_WEBCLIENT_URLENCODETOBYTES_OFFSET UNITYSDK_OFFSET(0x1CFCFDD0)
#define SYSTEM_NET_WEBCLIENT_URLENCODE_1_OFFSET UNITYSDK_OFFSET(0x1CFCFC80)
#define SYSTEM_NET_WEBCLIENT_URLENCODE_OFFSET UNITYSDK_OFFSET(0x1CFCD550)
#define SYSTEM_NET_WEBCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC8AD0)

namespace System::Net
{
	inline static constexpr unsigned int WebClient_TypeDefinitionIndex = 3440;

	class WebClient : public ::System::ComponentModel::Component
	{
	public:
		// static const ::System::Int32 DefaultCopyBufferLength = 0x2000; // 0x0
		// static const ::System::Int32 DefaultDownloadBufferLength = 0x10000; // 0x0
		// static const ::System::String* DefaultUploadFileContentType; // 0x0
		// static const ::System::String* UploadFileContentType; // 0x0
		// static const ::System::String* UploadValuesContentType; // 0x0
		::System::Net::UploadFileCompletedEventHandler* UploadFileCompleted; // 0x28
		::System::Threading::SendOrPostCallback* openWriteOperationCompleted; // 0x30
		::System::Threading::SendOrPostCallback* reportDownloadProgressChanged; // 0x38
		::System::Threading::SendOrPostCallback* uploadStringOperationCompleted; // 0x40
		::System::Net::UploadStringCompletedEventHandler* UploadStringCompleted; // 0x48
		::System::Net::OpenWriteCompletedEventHandler* OpenWriteCompleted; // 0x50
		::System::Net::DownloadDataCompletedEventHandler* DownloadDataCompleted; // 0x58
		::System::Net::WebHeaderCollection* m_headers; // 0x60
		::System::Net::UploadDataCompletedEventHandler* UploadDataCompleted; // 0x68
		::System::Threading::SendOrPostCallback* downloadStringOperationCompleted; // 0x70
		::System::String* m_Method; // 0x78
		::System::Net::UploadProgressChangedEventHandler* UploadProgressChanged; // 0x80
		::System::Text::Encoding* m_Encoding; // 0x88
		::System::ComponentModel::AsyncCompletedEventHandler* DownloadFileCompleted; // 0x90
		::System::Net::UploadValuesCompletedEventHandler* UploadValuesCompleted; // 0x98
		::System::Net::Cache::RequestCachePolicy* m_CachePolicy; // 0xA0
		::System::Threading::SendOrPostCallback* downloadDataOperationCompleted; // 0xA8
		::System::Threading::SendOrPostCallback* uploadFileOperationCompleted; // 0xB0
		::System::Net::DownloadProgressChangedEventHandler* DownloadProgressChanged; // 0xB8
		::System::Uri* m_baseAddress; // 0xC0
		::System::ComponentModel::AsyncOperation* m_AsyncOp; // 0xC8
		::System::Threading::SendOrPostCallback* uploadDataOperationCompleted; // 0xD0
		::System::Threading::SendOrPostCallback* uploadValuesOperationCompleted; // 0xD8
		::System::Net::WebResponse* m_WebResponse; // 0xE0
		::System::Net::WebClient_ProgressData* m_Progress; // 0xE8
		::System::Collections::Specialized::NameValueCollection* m_requestParameters; // 0xF0
		::System::Threading::SendOrPostCallback* downloadFileOperationCompleted; // 0xF8
		::System::Net::DownloadStringCompletedEventHandler* DownloadStringCompleted; // 0x100
		::System::Net::WebRequest* m_WebRequest; // 0x108
		::System::Net::IWebProxy* m_Proxy; // 0x110
		::System::Threading::SendOrPostCallback* reportUploadProgressChanged; // 0x118
		::System::Net::OpenReadCompletedEventHandler* OpenReadCompleted; // 0x120
		::System::Threading::SendOrPostCallback* openReadOperationCompleted; // 0x128
		::System::Net::ICredentials* m_credentials; // 0x130
		::System::Boolean m_Cancelled; // 0x138
		::System::Boolean m_InitWebClientAsync; // 0x139
		::System::Boolean m_ProxySet; // 0x13A
		::System::Boolean _AllowReadStreamBuffering_k__BackingField; // 0x13B
		::System::Byte _padding0[0x4];
		::System::Int64 m_ContentLength; // 0x140
		::System::Boolean _AllowWriteStreamBuffering_k__BackingField; // 0x148
		::System::Byte _padding1[0x3];
		::System::Int32 m_CallNesting; // 0x14C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT__CTOR_OFFSET))(this);
		}

		::System::Void InitWebClientAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_INITWEBCLIENTASYNC_OFFSET))(this);
		}

		::System::Void ClearWebClientState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_CLEARWEBCLIENTSTATE_OFFSET))(this);
		}

		::System::Void CompleteWebClientState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_COMPLETEWEBCLIENTSTATE_OFFSET))(this);
		}

		::System::Boolean get_AllowReadStreamBuffering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GET_ALLOWREADSTREAMBUFFERING_OFFSET))(this);
		}

		::System::Void set_AllowReadStreamBuffering(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_SET_ALLOWREADSTREAMBUFFERING_OFFSET))(this, value);
		}

		::System::Boolean get_AllowWriteStreamBuffering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GET_ALLOWWRITESTREAMBUFFERING_OFFSET))(this);
		}

		::System::Void set_AllowWriteStreamBuffering(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_SET_ALLOWWRITESTREAMBUFFERING_OFFSET))(this, value);
		}

		::System::Void add_WriteStreamClosed(::System::Net::WriteStreamClosedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WriteStreamClosedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ADD_WRITESTREAMCLOSED_OFFSET))(this, value);
		}

		::System::Void remove_WriteStreamClosed(::System::Net::WriteStreamClosedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WriteStreamClosedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_REMOVE_WRITESTREAMCLOSED_OFFSET))(this, value);
		}

		::System::Void OnWriteStreamClosed(::System::Net::WriteStreamClosedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WriteStreamClosedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ONWRITESTREAMCLOSED_OFFSET))(this, e);
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GET_ENCODING_OFFSET))(this);
		}

		::System::Void set_Encoding(::System::Text::Encoding* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_SET_ENCODING_OFFSET))(this, value);
		}

		::System::String* get_BaseAddress()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GET_BASEADDRESS_OFFSET))(this);
		}

		::System::Void set_BaseAddress(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_SET_BASEADDRESS_OFFSET))(this, value);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_SET_CREDENTIALS_OFFSET))(this, value);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GET_USEDEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, value);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GET_HEADERS_OFFSET))(this);
		}

		::System::Void set_Headers(::System::Net::WebHeaderCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_SET_HEADERS_OFFSET))(this, value);
		}

		::System::Collections::Specialized::NameValueCollection* get_QueryString()
		{
			return ((::System::Collections::Specialized::NameValueCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GET_QUERYSTRING_OFFSET))(this);
		}

		::System::Void set_QueryString(::System::Collections::Specialized::NameValueCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_SET_QUERYSTRING_OFFSET))(this, value);
		}

		::System::Net::WebHeaderCollection* get_ResponseHeaders()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GET_RESPONSEHEADERS_OFFSET))(this);
		}

		::System::Net::IWebProxy* get_Proxy()
		{
			return ((::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::System::Net::IWebProxy* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_SET_PROXY_OFFSET))(this, value);
		}

		::System::Net::Cache::RequestCachePolicy* get_CachePolicy()
		{
			return ((::System::Net::Cache::RequestCachePolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GET_CACHEPOLICY_OFFSET))(this);
		}

		::System::Void set_CachePolicy(::System::Net::Cache::RequestCachePolicy* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Cache::RequestCachePolicy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_SET_CACHEPOLICY_OFFSET))(this, value);
		}

		::System::Boolean get_IsBusy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GET_ISBUSY_OFFSET))(this);
		}

		::System::Net::WebRequest* GetWebRequest(::System::Uri* address)
		{
			return ((::System::Net::WebRequest*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GETWEBREQUEST_OFFSET))(this, address);
		}

		::System::Net::WebResponse* GetWebResponse(::System::Net::WebRequest* request)
		{
			return ((::System::Net::WebResponse*(*)(::PVOID, ::System::Net::WebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GETWEBRESPONSE_OFFSET))(this, request);
		}

		::System::Net::WebResponse* GetWebResponse_1(::System::Net::WebRequest* request, ::System::IAsyncResult* result)
		{
			return ((::System::Net::WebResponse*(*)(::PVOID, ::System::Net::WebRequest*, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GETWEBRESPONSE_1_OFFSET))(this, request, result);
		}

		::Il2CppArray<::System::Byte>* DownloadData(::System::String* address)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADDATA_OFFSET))(this, address);
		}

		::Il2CppArray<::System::Byte>* DownloadData_1(::System::Uri* address)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADDATA_1_OFFSET))(this, address);
		}

		::Il2CppArray<::System::Byte>* DownloadDataInternal(::System::Uri* address, ::System::Net::WebRequest*& request)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Uri*, ::System::Net::WebRequest*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADDATAINTERNAL_OFFSET))(this, address, request);
		}

		::System::Void DownloadFile(::System::String* address, ::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADFILE_OFFSET))(this, address, fileName);
		}

		::System::Void DownloadFile_1(::System::Uri* address, ::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADFILE_1_OFFSET))(this, address, fileName);
		}

		::System::IO::Stream* OpenRead(::System::String* address)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENREAD_OFFSET))(this, address);
		}

		::System::IO::Stream* OpenRead_1(::System::Uri* address)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENREAD_1_OFFSET))(this, address);
		}

		::System::IO::Stream* OpenWrite(::System::String* address)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENWRITE_OFFSET))(this, address);
		}

		::System::IO::Stream* OpenWrite_1(::System::Uri* address)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENWRITE_1_OFFSET))(this, address);
		}

		::System::IO::Stream* OpenWrite_2(::System::String* address, ::System::String* method)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENWRITE_2_OFFSET))(this, address, method);
		}

		::System::IO::Stream* OpenWrite_3(::System::Uri* address, ::System::String* method)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENWRITE_3_OFFSET))(this, address, method);
		}

		::Il2CppArray<::System::Byte>* UploadData(::System::String* address, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATA_OFFSET))(this, address, data);
		}

		::Il2CppArray<::System::Byte>* UploadData_1(::System::Uri* address, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Uri*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATA_1_OFFSET))(this, address, data);
		}

		::Il2CppArray<::System::Byte>* UploadData_2(::System::String* address, ::System::String* method, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATA_2_OFFSET))(this, address, method, data);
		}

		::Il2CppArray<::System::Byte>* UploadData_3(::System::Uri* address, ::System::String* method, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Uri*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATA_3_OFFSET))(this, address, method, data);
		}

		::Il2CppArray<::System::Byte>* UploadDataInternal(::System::Uri* address, ::System::String* method, ::Il2CppArray<::System::Byte>* data, ::System::Net::WebRequest*& request)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Uri*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Net::WebRequest*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATAINTERNAL_OFFSET))(this, address, method, data, request);
		}

		::System::Void OpenFileInternal(::System::Boolean needsHeaderAndBoundary, ::System::String* fileName, ::System::IO::FileStream*& fs, ::Il2CppArray<::System::Byte>*& buffer, ::Il2CppArray<::System::Byte>*& formHeaderBytes, ::Il2CppArray<::System::Byte>*& boundaryBytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::IO::FileStream*&, ::Il2CppArray<::System::Byte>*&, ::Il2CppArray<::System::Byte>*&, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENFILEINTERNAL_OFFSET))(this, needsHeaderAndBoundary, fileName, fs, buffer, formHeaderBytes, boundaryBytes);
		}

		::Il2CppArray<::System::Byte>* UploadFile(::System::String* address, ::System::String* fileName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADFILE_OFFSET))(this, address, fileName);
		}

		::Il2CppArray<::System::Byte>* UploadFile_1(::System::Uri* address, ::System::String* fileName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADFILE_1_OFFSET))(this, address, fileName);
		}

		::Il2CppArray<::System::Byte>* UploadFile_2(::System::String* address, ::System::String* method, ::System::String* fileName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADFILE_2_OFFSET))(this, address, method, fileName);
		}

		::Il2CppArray<::System::Byte>* UploadFile_3(::System::Uri* address, ::System::String* method, ::System::String* fileName)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADFILE_3_OFFSET))(this, address, method, fileName);
		}

		::Il2CppArray<::System::Byte>* UploadValuesInternal(::System::Collections::Specialized::NameValueCollection* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUESINTERNAL_OFFSET))(this, data);
		}

		::Il2CppArray<::System::Byte>* UploadValues(::System::String* address, ::System::Collections::Specialized::NameValueCollection* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUES_OFFSET))(this, address, data);
		}

		::Il2CppArray<::System::Byte>* UploadValues_1(::System::Uri* address, ::System::Collections::Specialized::NameValueCollection* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Uri*, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUES_1_OFFSET))(this, address, data);
		}

		::Il2CppArray<::System::Byte>* UploadValues_2(::System::String* address, ::System::String* method, ::System::Collections::Specialized::NameValueCollection* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUES_2_OFFSET))(this, address, method, data);
		}

		::Il2CppArray<::System::Byte>* UploadValues_3(::System::Uri* address, ::System::String* method, ::System::Collections::Specialized::NameValueCollection* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUES_3_OFFSET))(this, address, method, data);
		}

		::System::String* UploadString(::System::String* address, ::System::String* data)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADSTRING_OFFSET))(this, address, data);
		}

		::System::String* UploadString_1(::System::Uri* address, ::System::String* data)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADSTRING_1_OFFSET))(this, address, data);
		}

		::System::String* UploadString_2(::System::String* address, ::System::String* method, ::System::String* data)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADSTRING_2_OFFSET))(this, address, method, data);
		}

		::System::String* UploadString_3(::System::Uri* address, ::System::String* method, ::System::String* data)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADSTRING_3_OFFSET))(this, address, method, data);
		}

		::System::String* DownloadString(::System::String* address)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADSTRING_OFFSET))(this, address);
		}

		::System::String* DownloadString_1(::System::Uri* address)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADSTRING_1_OFFSET))(this, address);
		}

		static ::System::Void AbortRequest(::System::Net::WebRequest* request)
		{
			return ((::System::Void(*)(::System::Net::WebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ABORTREQUEST_OFFSET))(request);
		}

		::System::Void CopyHeadersTo(::System::Net::WebRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_COPYHEADERSTO_OFFSET))(this, request);
		}

		::System::Uri* GetUri(::System::String* path)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GETURI_OFFSET))(this, path);
		}

		::System::Uri* GetUri_1(::System::Uri* address)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GETURI_1_OFFSET))(this, address);
		}

		static ::System::Void DownloadBitsResponseCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADBITSRESPONSECALLBACK_OFFSET))(result);
		}

		static ::System::Void DownloadBitsReadCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADBITSREADCALLBACK_OFFSET))(result);
		}

		static ::System::Void DownloadBitsReadCallbackState(::System::Net::WebClient_DownloadBitsState* state, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::System::Net::WebClient_DownloadBitsState*, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADBITSREADCALLBACKSTATE_OFFSET))(state, result);
		}

		::Il2CppArray<::System::Byte>* DownloadBits(::System::Net::WebRequest* request, ::System::IO::Stream* writeStream, ::System::Net::CompletionDelegate* completionDelegate, ::System::ComponentModel::AsyncOperation* asyncOp)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Net::WebRequest*, ::System::IO::Stream*, ::System::Net::CompletionDelegate*, ::System::ComponentModel::AsyncOperation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADBITS_OFFSET))(this, request, writeStream, completionDelegate, asyncOp);
		}

		static ::System::Void UploadBitsRequestCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADBITSREQUESTCALLBACK_OFFSET))(result);
		}

		static ::System::Void UploadBitsWriteCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADBITSWRITECALLBACK_OFFSET))(result);
		}

		::System::Void UploadBits(::System::Net::WebRequest* request, ::System::IO::Stream* readStream, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 chunkSize, ::Il2CppArray<::System::Byte>* header, ::Il2CppArray<::System::Byte>* footer, ::System::Net::CompletionDelegate* uploadCompletionDelegate, ::System::Net::CompletionDelegate* downloadCompletionDelegate, ::System::ComponentModel::AsyncOperation* asyncOp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebRequest*, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Net::CompletionDelegate*, ::System::Net::CompletionDelegate*, ::System::ComponentModel::AsyncOperation*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADBITS_OFFSET))(this, request, readStream, buffer, chunkSize, header, footer, uploadCompletionDelegate, downloadCompletionDelegate, asyncOp);
		}

		::System::Boolean ByteArrayHasPrefix(::Il2CppArray<::System::Byte>* prefix, ::Il2CppArray<::System::Byte>* byteArray)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_BYTEARRAYHASPREFIX_OFFSET))(this, prefix, byteArray);
		}

		::System::String* GetStringUsingEncoding(::System::Net::WebRequest* request, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::WebRequest*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_GETSTRINGUSINGENCODING_OFFSET))(this, request, data);
		}

		::System::String* MapToDefaultMethod(::System::Uri* address)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_MAPTODEFAULTMETHOD_OFFSET))(this, address);
		}

		static ::System::String* UrlEncode(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_URLENCODE_OFFSET))(str);
		}

		static ::System::String* UrlEncode_1(::System::String* str, ::System::Text::Encoding* e)
		{
			return ((::System::String*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_URLENCODE_1_OFFSET))(str, e);
		}

		static ::Il2CppArray<::System::Byte>* UrlEncodeToBytes(::System::String* str, ::System::Text::Encoding* e)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_URLENCODETOBYTES_OFFSET))(str, e);
		}

		static ::Il2CppArray<::System::Byte>* UrlEncodeBytesToBytesInternal(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::System::Int32 count, ::System::Boolean alwaysCreateReturnValue)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_URLENCODEBYTESTOBYTESINTERNAL_OFFSET))(bytes, offset, count, alwaysCreateReturnValue);
		}

		static ::System::Char IntToHex(::System::Int32 n)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_INTTOHEX_OFFSET))(n);
		}

		static ::System::Boolean IsSafe(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ISSAFE_OFFSET))(ch);
		}

		::System::Void InvokeOperationCompleted(::System::ComponentModel::AsyncOperation* asyncOp, ::System::Threading::SendOrPostCallback* callback, ::System::ComponentModel::AsyncCompletedEventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::AsyncOperation*, ::System::Threading::SendOrPostCallback*, ::System::ComponentModel::AsyncCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_INVOKEOPERATIONCOMPLETED_OFFSET))(this, asyncOp, callback, eventArgs);
		}

		::System::Boolean AnotherCallInProgress(::System::Int32 callNesting)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ANOTHERCALLINPROGRESS_OFFSET))(this, callNesting);
		}

		::System::Void add_OpenReadCompleted(::System::Net::OpenReadCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::OpenReadCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ADD_OPENREADCOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_OpenReadCompleted(::System::Net::OpenReadCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::OpenReadCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_REMOVE_OPENREADCOMPLETED_OFFSET))(this, value);
		}

		::System::Void OnOpenReadCompleted(::System::Net::OpenReadCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::OpenReadCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ONOPENREADCOMPLETED_OFFSET))(this, e);
		}

		::System::Void OpenReadOperationCompleted(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENREADOPERATIONCOMPLETED_OFFSET))(this, arg);
		}

		::System::Void OpenReadAsyncCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENREADASYNCCALLBACK_OFFSET))(this, result);
		}

		::System::Void OpenReadAsync(::System::Uri* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENREADASYNC_OFFSET))(this, address);
		}

		::System::Void OpenReadAsync_1(::System::Uri* address, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENREADASYNC_1_OFFSET))(this, address, userToken);
		}

		::System::Void add_OpenWriteCompleted(::System::Net::OpenWriteCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::OpenWriteCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ADD_OPENWRITECOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_OpenWriteCompleted(::System::Net::OpenWriteCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::OpenWriteCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_REMOVE_OPENWRITECOMPLETED_OFFSET))(this, value);
		}

		::System::Void OnOpenWriteCompleted(::System::Net::OpenWriteCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::OpenWriteCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ONOPENWRITECOMPLETED_OFFSET))(this, e);
		}

		::System::Void OpenWriteOperationCompleted(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENWRITEOPERATIONCOMPLETED_OFFSET))(this, arg);
		}

		::System::Void OpenWriteAsyncCallback(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENWRITEASYNCCALLBACK_OFFSET))(this, result);
		}

		::System::Void OpenWriteAsync(::System::Uri* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENWRITEASYNC_OFFSET))(this, address);
		}

		::System::Void OpenWriteAsync_1(::System::Uri* address, ::System::String* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENWRITEASYNC_1_OFFSET))(this, address, method);
		}

		::System::Void OpenWriteAsync_2(::System::Uri* address, ::System::String* method, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENWRITEASYNC_2_OFFSET))(this, address, method, userToken);
		}

		::System::Void add_DownloadStringCompleted(::System::Net::DownloadStringCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::DownloadStringCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ADD_DOWNLOADSTRINGCOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_DownloadStringCompleted(::System::Net::DownloadStringCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::DownloadStringCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_REMOVE_DOWNLOADSTRINGCOMPLETED_OFFSET))(this, value);
		}

		::System::Void OnDownloadStringCompleted(::System::Net::DownloadStringCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::DownloadStringCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ONDOWNLOADSTRINGCOMPLETED_OFFSET))(this, e);
		}

		::System::Void DownloadStringOperationCompleted(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADSTRINGOPERATIONCOMPLETED_OFFSET))(this, arg);
		}

		::System::Void DownloadStringAsyncCallback(::Il2CppArray<::System::Byte>* returnBytes, ::System::Exception* exception, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADSTRINGASYNCCALLBACK_OFFSET))(this, returnBytes, exception, state);
		}

		::System::Void DownloadStringAsync(::System::Uri* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADSTRINGASYNC_OFFSET))(this, address);
		}

		::System::Void DownloadStringAsync_1(::System::Uri* address, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADSTRINGASYNC_1_OFFSET))(this, address, userToken);
		}

		::System::Void add_DownloadDataCompleted(::System::Net::DownloadDataCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::DownloadDataCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ADD_DOWNLOADDATACOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_DownloadDataCompleted(::System::Net::DownloadDataCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::DownloadDataCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_REMOVE_DOWNLOADDATACOMPLETED_OFFSET))(this, value);
		}

		::System::Void OnDownloadDataCompleted(::System::Net::DownloadDataCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::DownloadDataCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ONDOWNLOADDATACOMPLETED_OFFSET))(this, e);
		}

		::System::Void DownloadDataOperationCompleted(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADDATAOPERATIONCOMPLETED_OFFSET))(this, arg);
		}

		::System::Void DownloadDataAsyncCallback(::Il2CppArray<::System::Byte>* returnBytes, ::System::Exception* exception, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADDATAASYNCCALLBACK_OFFSET))(this, returnBytes, exception, state);
		}

		::System::Void DownloadDataAsync(::System::Uri* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADDATAASYNC_OFFSET))(this, address);
		}

		::System::Void DownloadDataAsync_1(::System::Uri* address, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADDATAASYNC_1_OFFSET))(this, address, userToken);
		}

		::System::Void add_DownloadFileCompleted(::System::ComponentModel::AsyncCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::AsyncCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ADD_DOWNLOADFILECOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_DownloadFileCompleted(::System::ComponentModel::AsyncCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::AsyncCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_REMOVE_DOWNLOADFILECOMPLETED_OFFSET))(this, value);
		}

		::System::Void OnDownloadFileCompleted(::System::ComponentModel::AsyncCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::AsyncCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ONDOWNLOADFILECOMPLETED_OFFSET))(this, e);
		}

		::System::Void DownloadFileOperationCompleted(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADFILEOPERATIONCOMPLETED_OFFSET))(this, arg);
		}

		::System::Void DownloadFileAsyncCallback(::Il2CppArray<::System::Byte>* returnBytes, ::System::Exception* exception, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADFILEASYNCCALLBACK_OFFSET))(this, returnBytes, exception, state);
		}

		::System::Void DownloadFileAsync(::System::Uri* address, ::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADFILEASYNC_OFFSET))(this, address, fileName);
		}

		::System::Void DownloadFileAsync_1(::System::Uri* address, ::System::String* fileName, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADFILEASYNC_1_OFFSET))(this, address, fileName, userToken);
		}

		::System::Void add_UploadStringCompleted(::System::Net::UploadStringCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadStringCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ADD_UPLOADSTRINGCOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_UploadStringCompleted(::System::Net::UploadStringCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadStringCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_REMOVE_UPLOADSTRINGCOMPLETED_OFFSET))(this, value);
		}

		::System::Void OnUploadStringCompleted(::System::Net::UploadStringCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadStringCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ONUPLOADSTRINGCOMPLETED_OFFSET))(this, e);
		}

		::System::Void UploadStringOperationCompleted(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADSTRINGOPERATIONCOMPLETED_OFFSET))(this, arg);
		}

		::System::Void StartDownloadAsync(::System::Net::WebClient_UploadBitsState* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebClient_UploadBitsState*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_STARTDOWNLOADASYNC_OFFSET))(this, state);
		}

		::System::Void UploadStringAsyncWriteCallback(::Il2CppArray<::System::Byte>* returnBytes, ::System::Exception* exception, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADSTRINGASYNCWRITECALLBACK_OFFSET))(this, returnBytes, exception, state);
		}

		::System::Void UploadStringAsyncReadCallback(::Il2CppArray<::System::Byte>* returnBytes, ::System::Exception* exception, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADSTRINGASYNCREADCALLBACK_OFFSET))(this, returnBytes, exception, state);
		}

		::System::Void UploadStringAsync(::System::Uri* address, ::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADSTRINGASYNC_OFFSET))(this, address, data);
		}

		::System::Void UploadStringAsync_1(::System::Uri* address, ::System::String* method, ::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADSTRINGASYNC_1_OFFSET))(this, address, method, data);
		}

		::System::Void UploadStringAsync_2(::System::Uri* address, ::System::String* method, ::System::String* data, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADSTRINGASYNC_2_OFFSET))(this, address, method, data, userToken);
		}

		::System::Void add_UploadDataCompleted(::System::Net::UploadDataCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadDataCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ADD_UPLOADDATACOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_UploadDataCompleted(::System::Net::UploadDataCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadDataCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_REMOVE_UPLOADDATACOMPLETED_OFFSET))(this, value);
		}

		::System::Void OnUploadDataCompleted(::System::Net::UploadDataCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadDataCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ONUPLOADDATACOMPLETED_OFFSET))(this, e);
		}

		::System::Void UploadDataOperationCompleted(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATAOPERATIONCOMPLETED_OFFSET))(this, arg);
		}

		::System::Void UploadDataAsyncWriteCallback(::Il2CppArray<::System::Byte>* returnBytes, ::System::Exception* exception, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATAASYNCWRITECALLBACK_OFFSET))(this, returnBytes, exception, state);
		}

		::System::Void UploadDataAsyncReadCallback(::Il2CppArray<::System::Byte>* returnBytes, ::System::Exception* exception, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATAASYNCREADCALLBACK_OFFSET))(this, returnBytes, exception, state);
		}

		::System::Void UploadDataAsync(::System::Uri* address, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATAASYNC_OFFSET))(this, address, data);
		}

		::System::Void UploadDataAsync_1(::System::Uri* address, ::System::String* method, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATAASYNC_1_OFFSET))(this, address, method, data);
		}

		::System::Void UploadDataAsync_2(::System::Uri* address, ::System::String* method, ::Il2CppArray<::System::Byte>* data, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATAASYNC_2_OFFSET))(this, address, method, data, userToken);
		}

		::System::Void add_UploadFileCompleted(::System::Net::UploadFileCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadFileCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ADD_UPLOADFILECOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_UploadFileCompleted(::System::Net::UploadFileCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadFileCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_REMOVE_UPLOADFILECOMPLETED_OFFSET))(this, value);
		}

		::System::Void OnUploadFileCompleted(::System::Net::UploadFileCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadFileCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ONUPLOADFILECOMPLETED_OFFSET))(this, e);
		}

		::System::Void UploadFileOperationCompleted(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADFILEOPERATIONCOMPLETED_OFFSET))(this, arg);
		}

		::System::Void UploadFileAsyncWriteCallback(::Il2CppArray<::System::Byte>* returnBytes, ::System::Exception* exception, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADFILEASYNCWRITECALLBACK_OFFSET))(this, returnBytes, exception, state);
		}

		::System::Void UploadFileAsyncReadCallback(::Il2CppArray<::System::Byte>* returnBytes, ::System::Exception* exception, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADFILEASYNCREADCALLBACK_OFFSET))(this, returnBytes, exception, state);
		}

		::System::Void UploadFileAsync(::System::Uri* address, ::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADFILEASYNC_OFFSET))(this, address, fileName);
		}

		::System::Void UploadFileAsync_1(::System::Uri* address, ::System::String* method, ::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADFILEASYNC_1_OFFSET))(this, address, method, fileName);
		}

		::System::Void UploadFileAsync_2(::System::Uri* address, ::System::String* method, ::System::String* fileName, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADFILEASYNC_2_OFFSET))(this, address, method, fileName, userToken);
		}

		::System::Void add_UploadValuesCompleted(::System::Net::UploadValuesCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadValuesCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ADD_UPLOADVALUESCOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_UploadValuesCompleted(::System::Net::UploadValuesCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadValuesCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_REMOVE_UPLOADVALUESCOMPLETED_OFFSET))(this, value);
		}

		::System::Void OnUploadValuesCompleted(::System::Net::UploadValuesCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadValuesCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ONUPLOADVALUESCOMPLETED_OFFSET))(this, e);
		}

		::System::Void UploadValuesOperationCompleted(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUESOPERATIONCOMPLETED_OFFSET))(this, arg);
		}

		::System::Void UploadValuesAsyncWriteCallback(::Il2CppArray<::System::Byte>* returnBytes, ::System::Exception* exception, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUESASYNCWRITECALLBACK_OFFSET))(this, returnBytes, exception, state);
		}

		::System::Void UploadValuesAsyncReadCallback(::Il2CppArray<::System::Byte>* returnBytes, ::System::Exception* exception, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Exception*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUESASYNCREADCALLBACK_OFFSET))(this, returnBytes, exception, state);
		}

		::System::Void UploadValuesAsync(::System::Uri* address, ::System::Collections::Specialized::NameValueCollection* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUESASYNC_OFFSET))(this, address, data);
		}

		::System::Void UploadValuesAsync_1(::System::Uri* address, ::System::String* method, ::System::Collections::Specialized::NameValueCollection* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUESASYNC_1_OFFSET))(this, address, method, data);
		}

		::System::Void UploadValuesAsync_2(::System::Uri* address, ::System::String* method, ::System::Collections::Specialized::NameValueCollection* data, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Collections::Specialized::NameValueCollection*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUESASYNC_2_OFFSET))(this, address, method, data, userToken);
		}

		::System::Void CancelAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_CANCELASYNC_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_1<::System::String*>* DownloadStringTaskAsync(::System::String* address)
		{
			return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADSTRINGTASKASYNC_OFFSET))(this, address);
		}

		::System::Threading::Tasks::Task_1<::System::String*>* DownloadStringTaskAsync_1(::System::Uri* address)
		{
			return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADSTRINGTASKASYNC_1_OFFSET))(this, address);
		}

		::System::Threading::Tasks::Task_1<::System::IO::Stream*>* OpenReadTaskAsync(::System::String* address)
		{
			return ((::System::Threading::Tasks::Task_1<::System::IO::Stream*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENREADTASKASYNC_OFFSET))(this, address);
		}

		::System::Threading::Tasks::Task_1<::System::IO::Stream*>* OpenReadTaskAsync_1(::System::Uri* address)
		{
			return ((::System::Threading::Tasks::Task_1<::System::IO::Stream*>*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENREADTASKASYNC_1_OFFSET))(this, address);
		}

		::System::Threading::Tasks::Task_1<::System::IO::Stream*>* OpenWriteTaskAsync(::System::String* address)
		{
			return ((::System::Threading::Tasks::Task_1<::System::IO::Stream*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENWRITETASKASYNC_OFFSET))(this, address);
		}

		::System::Threading::Tasks::Task_1<::System::IO::Stream*>* OpenWriteTaskAsync_1(::System::Uri* address)
		{
			return ((::System::Threading::Tasks::Task_1<::System::IO::Stream*>*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENWRITETASKASYNC_1_OFFSET))(this, address);
		}

		::System::Threading::Tasks::Task_1<::System::IO::Stream*>* OpenWriteTaskAsync_2(::System::String* address, ::System::String* method)
		{
			return ((::System::Threading::Tasks::Task_1<::System::IO::Stream*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENWRITETASKASYNC_2_OFFSET))(this, address, method);
		}

		::System::Threading::Tasks::Task_1<::System::IO::Stream*>* OpenWriteTaskAsync_3(::System::Uri* address, ::System::String* method)
		{
			return ((::System::Threading::Tasks::Task_1<::System::IO::Stream*>*(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_OPENWRITETASKASYNC_3_OFFSET))(this, address, method);
		}

		::System::Threading::Tasks::Task_1<::System::String*>* UploadStringTaskAsync(::System::String* address, ::System::String* data)
		{
			return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADSTRINGTASKASYNC_OFFSET))(this, address, data);
		}

		::System::Threading::Tasks::Task_1<::System::String*>* UploadStringTaskAsync_1(::System::Uri* address, ::System::String* data)
		{
			return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADSTRINGTASKASYNC_1_OFFSET))(this, address, data);
		}

		::System::Threading::Tasks::Task_1<::System::String*>* UploadStringTaskAsync_2(::System::String* address, ::System::String* method, ::System::String* data)
		{
			return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADSTRINGTASKASYNC_2_OFFSET))(this, address, method, data);
		}

		::System::Threading::Tasks::Task_1<::System::String*>* UploadStringTaskAsync_3(::System::Uri* address, ::System::String* method, ::System::String* data)
		{
			return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADSTRINGTASKASYNC_3_OFFSET))(this, address, method, data);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* DownloadDataTaskAsync(::System::String* address)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADDATATASKASYNC_OFFSET))(this, address);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* DownloadDataTaskAsync_1(::System::Uri* address)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADDATATASKASYNC_1_OFFSET))(this, address);
		}

		::System::Threading::Tasks::Task* DownloadFileTaskAsync(::System::String* address, ::System::String* fileName)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADFILETASKASYNC_OFFSET))(this, address, fileName);
		}

		::System::Threading::Tasks::Task* DownloadFileTaskAsync_1(::System::Uri* address, ::System::String* fileName)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_DOWNLOADFILETASKASYNC_1_OFFSET))(this, address, fileName);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* UploadDataTaskAsync(::System::String* address, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATATASKASYNC_OFFSET))(this, address, data);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* UploadDataTaskAsync_1(::System::Uri* address, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID, ::System::Uri*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATATASKASYNC_1_OFFSET))(this, address, data);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* UploadDataTaskAsync_2(::System::String* address, ::System::String* method, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATATASKASYNC_2_OFFSET))(this, address, method, data);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* UploadDataTaskAsync_3(::System::Uri* address, ::System::String* method, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID, ::System::Uri*, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADDATATASKASYNC_3_OFFSET))(this, address, method, data);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* UploadFileTaskAsync(::System::String* address, ::System::String* fileName)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADFILETASKASYNC_OFFSET))(this, address, fileName);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* UploadFileTaskAsync_1(::System::Uri* address, ::System::String* fileName)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADFILETASKASYNC_1_OFFSET))(this, address, fileName);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* UploadFileTaskAsync_2(::System::String* address, ::System::String* method, ::System::String* fileName)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADFILETASKASYNC_2_OFFSET))(this, address, method, fileName);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* UploadFileTaskAsync_3(::System::Uri* address, ::System::String* method, ::System::String* fileName)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADFILETASKASYNC_3_OFFSET))(this, address, method, fileName);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* UploadValuesTaskAsync(::System::String* address, ::System::Collections::Specialized::NameValueCollection* data)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID, ::System::String*, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUESTASKASYNC_OFFSET))(this, address, data);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* UploadValuesTaskAsync_1(::System::String* address, ::System::String* method, ::System::Collections::Specialized::NameValueCollection* data)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUESTASKASYNC_1_OFFSET))(this, address, method, data);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* UploadValuesTaskAsync_2(::System::Uri* address, ::System::Collections::Specialized::NameValueCollection* data)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID, ::System::Uri*, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUESTASKASYNC_2_OFFSET))(this, address, data);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* UploadValuesTaskAsync_3(::System::Uri* address, ::System::String* method, ::System::Collections::Specialized::NameValueCollection* data)
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_UPLOADVALUESTASKASYNC_3_OFFSET))(this, address, method, data);
		}

		::System::Void add_DownloadProgressChanged(::System::Net::DownloadProgressChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::DownloadProgressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ADD_DOWNLOADPROGRESSCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_DownloadProgressChanged(::System::Net::DownloadProgressChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::DownloadProgressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_REMOVE_DOWNLOADPROGRESSCHANGED_OFFSET))(this, value);
		}

		::System::Void add_UploadProgressChanged(::System::Net::UploadProgressChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadProgressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ADD_UPLOADPROGRESSCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_UploadProgressChanged(::System::Net::UploadProgressChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadProgressChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_REMOVE_UPLOADPROGRESSCHANGED_OFFSET))(this, value);
		}

		::System::Void OnDownloadProgressChanged(::System::Net::DownloadProgressChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::DownloadProgressChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ONDOWNLOADPROGRESSCHANGED_OFFSET))(this, e);
		}

		::System::Void OnUploadProgressChanged(::System::Net::UploadProgressChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::UploadProgressChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_ONUPLOADPROGRESSCHANGED_OFFSET))(this, e);
		}

		::System::Void ReportDownloadProgressChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_REPORTDOWNLOADPROGRESSCHANGED_OFFSET))(this, arg);
		}

		::System::Void ReportUploadProgressChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_REPORTUPLOADPROGRESSCHANGED_OFFSET))(this, arg);
		}

		::System::Void PostProgressChanged(::System::ComponentModel::AsyncOperation* asyncOp, ::System::Net::WebClient_ProgressData* progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::AsyncOperation*, ::System::Net::WebClient_ProgressData*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_POSTPROGRESSCHANGED_OFFSET))(this, asyncOp, progress);
		}
	};
}
