#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_CACHE_REQUESTCACHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1AEB90)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCache_TypeDefinitionIndex = 2980;

	class RequestCache : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_LineSplits()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("System.Net.Cache", "RequestCache")->GetStaticField(0x386D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHE_CCTOR_OFFSET))();
		}

	};
}
