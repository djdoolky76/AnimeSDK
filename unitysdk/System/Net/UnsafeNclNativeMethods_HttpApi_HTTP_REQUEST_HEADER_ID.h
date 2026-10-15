#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_HTTP_REQUEST_HEADER_ID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F08D970)
#define SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_HTTP_REQUEST_HEADER_ID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F08D8E0)

namespace System::Net
{
	class UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_m_Strings()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("System.Net", "HTTP_REQUEST_HEADER_ID")->GetStaticField(0x2D340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_HTTP_REQUEST_HEADER_ID_CCTOR_OFFSET))();
		}

		static ::System::String* ToString(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_HTTP_REQUEST_HEADER_ID_TOSTRING_OFFSET))(a1);
		}

	};
}
