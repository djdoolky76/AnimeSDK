#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_CACHE_REQUESTCACHE_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1D10AB30)
#define SYSTEM_NET_CACHE_REQUESTCACHE_GET_ISPRIVATECACHE_OFFSET UNITYSDK_OFFSET(0x1D10AB20)
#define SYSTEM_NET_CACHE_REQUESTCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D10AB40)
#define SYSTEM_NET_CACHE_REQUESTCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D10AB10)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCache_TypeDefinitionIndex = 3859;

	class RequestCache : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_LineSplits()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(RequestCache_TypeDefinitionIndex)->GetStaticField(0x3340);
		}
		::System::Boolean _IsPrivateCache; // 0x10
		::System::Boolean _CanWrite; // 0x11

		::System::Void _ctor(::System::Boolean isPrivateCache, ::System::Boolean canWrite)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHE__CTOR_OFFSET))(this, isPrivateCache, canWrite);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsPrivateCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHE_GET_ISPRIVATECACHE_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHE_GET_CANWRITE_OFFSET))(this);
		}
	};
}
