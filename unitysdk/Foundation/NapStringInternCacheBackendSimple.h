#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDSIMPLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EA2BE20)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDSIMPLE_GETINTERNEDSTRING_OFFSET UNITYSDK_OFFSET(0x1EA2C010)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDSIMPLE_GET_CACHEDSTRINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1EA2BD30)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2C2C0)

namespace Foundation
{
	inline static constexpr unsigned int NapStringInternCacheBackendSimple_TypeDefinitionIndex = 8118;

	class NapStringInternCacheBackendSimple : public ::System::Object
	{
	public:
		// static const ::System::Int32 k_DefaultCapacity = 0x12FD; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>* m_InternedStringMap; // 0x10
		::System::Object* m_Lock; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDSIMPLE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_CachedStringCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDSIMPLE_GET_CACHEDSTRINGCOUNT_OFFSET))(this);
		}

		::System::Void Clear(::System::Boolean freeMemory)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDSIMPLE_CLEAR_OFFSET))(this, freeMemory);
		}

		::System::String* GetInternedString(::System::UInt64 hash, ::PVOID chars, ::System::Int32 charCount)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt64, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDSIMPLE_GETINTERNEDSTRING_OFFSET))(this, hash, chars, charCount);
		}
	};
}
