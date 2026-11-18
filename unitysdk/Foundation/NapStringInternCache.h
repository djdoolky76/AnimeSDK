#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NapStringInternStrategy.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class INapStringInternCacheBackend; }
namespace System { class String; }

#define FOUNDATION_NAPSTRINGINTERNCACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EA7CA50)
#define FOUNDATION_NAPSTRINGINTERNCACHE_GETINTERNEDUTF16LITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x1EA7CFD0)
#define FOUNDATION_NAPSTRINGINTERNCACHE_GETINTERNEDUTF8_OFFSET UNITYSDK_OFFSET(0x1EA7CB70)
#define FOUNDATION_NAPSTRINGINTERNCACHE_GET_CACHEDSTRINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1EA7C950)
#define FOUNDATION_NAPSTRINGINTERNCACHE_GET_LRUCAPACITY_OFFSET UNITYSDK_OFFSET(0x1EA7C8D0)
#define FOUNDATION_NAPSTRINGINTERNCACHE_GET_STRATEGY_OFFSET UNITYSDK_OFFSET(0x1EA7C860)
#define FOUNDATION_NAPSTRINGINTERNCACHE_REBUILDBACKEND_OFFSET UNITYSDK_OFFSET(0x1EA7C770)
#define FOUNDATION_NAPSTRINGINTERNCACHE_SET_LRUCAPACITY_OFFSET UNITYSDK_OFFSET(0x1EA7C8E0)
#define FOUNDATION_NAPSTRINGINTERNCACHE_SET_STRATEGY_OFFSET UNITYSDK_OFFSET(0x1EA7C870)
#define FOUNDATION_NAPSTRINGINTERNCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7C750)

namespace Foundation
{
	inline static constexpr unsigned int NapStringInternCache_TypeDefinitionIndex = 8640;

	class NapStringInternCache : public ::System::Object
	{
	public:
		::Foundation::INapStringInternCacheBackend* m_Backend; // 0x10
		::System::Int32 m_LRUCapacity; // 0x18
		::Foundation::NapStringInternStrategy m_Strategy; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHE__CTOR_OFFSET))(this);
		}

		::Foundation::NapStringInternStrategy get_Strategy()
		{
			return ((::Foundation::NapStringInternStrategy(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHE_GET_STRATEGY_OFFSET))(this);
		}

		::System::Void set_Strategy(::Foundation::NapStringInternStrategy value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::NapStringInternStrategy))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHE_SET_STRATEGY_OFFSET))(this, value);
		}

		::System::Int32 get_LRUCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHE_GET_LRUCAPACITY_OFFSET))(this);
		}

		::System::Void set_LRUCapacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHE_SET_LRUCAPACITY_OFFSET))(this, value);
		}

		::System::Int32 get_CachedStringCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHE_GET_CACHEDSTRINGCOUNT_OFFSET))(this);
		}

		::System::Void Clear(::System::Boolean freeMemory)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHE_CLEAR_OFFSET))(this, freeMemory);
		}

		::System::String* GetInternedUTF8(::PVOID bytes, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHE_GETINTERNEDUTF8_OFFSET))(this, bytes, count);
		}

		::System::String* GetInternedUTF16LittleEndian(::PVOID bytes, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHE_GETINTERNEDUTF16LITTLEENDIAN_OFFSET))(this, bytes, count);
		}

		::System::Void RebuildBackend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHE_REBUILDBACKEND_OFFSET))(this);
		}
	};
}
