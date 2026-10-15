#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
namespace System { class Object; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::Net { class ICredentials; }
namespace System::Net { class IWebProxy; }
namespace System::Net { class WebRequest; }
namespace System::Net::Cache { class RequestCachePolicy; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Xml { class XmlDownloadManager; }

#define SYSTEM_XML_XMLDOWNLOADMANAGER__GETNONFILESTREAMASYNC_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3C59120)
#define SYSTEM_XML_XMLDOWNLOADMANAGER__GETNONFILESTREAMASYNC_D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B80)

namespace System::Xml
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	struct alignas(8) XmlDownloadManager__GetNonFileStreamAsync_d__5
	{
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x10
		::System::Byte _padding0[0x10];
		::System::Net::WebRequest* _req_5__1; // 0x28
		::System::Xml::XmlDownloadManager* __4__this; // 0x30
		::System::Net::IWebProxy* proxy; // 0x38
		::System::Net::Cache::RequestCachePolicy* cachePolicy; // 0x40
		::System::Net::ICredentials* credentials; // 0x48
		::System::Object* __u__1; // 0x50
		::System::Byte _padding1[0x8];
		::System::Uri* uri; // 0x60
		::System::Int32 __1__state; // 0x68
		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER__GETNONFILESTREAMASYNC_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOWNLOADMANAGER__GETNONFILESTREAMASYNC_D__5_SETSTATEMACHINE_OFFSET))(this, a1);
		}

	};
}
