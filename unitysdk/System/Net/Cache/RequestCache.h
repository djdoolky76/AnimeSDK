#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_CACHE_REQUESTCACHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F020410)

namespace System::Net::Cache
{
	class RequestCache : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_LineSplits()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Net.Cache", "RequestCache")->GetStaticField(0x3DB90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHE_CCTOR_OFFSET))();
		}

	};
}
