#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F08D620)

namespace System::Net
{
	class UnsafeNclNativeMethods_HttpApi : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_m_Strings()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("System.Net", "HttpApi")->GetStaticField(0x2D330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_CCTOR_OFFSET))();
		}

	};
}
