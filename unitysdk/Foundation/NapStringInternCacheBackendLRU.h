#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_ADDASMOSTRECENT_OFFSET UNITYSDK_OFFSET(0x1F4DCD10)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_ALLOCATESLOT_OFFSET UNITYSDK_OFFSET(0x1F4DCB90)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F4DC6A0)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_GETINTERNEDSTRING_OFFSET UNITYSDK_OFFSET(0x1F4DC790)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_GET_CACHEDSTRINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1F4DC5C0)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_MOVETOMOSTRECENT_OFFSET UNITYSDK_OFFSET(0x1F4DCB20)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_REMOVEFROMLIST_OFFSET UNITYSDK_OFFSET(0x1F4DCC00)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_RESETSTATE_OFFSET UNITYSDK_OFFSET(0x1F4DC460)
#define FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU__CTOR_OFFSET UNITYSDK_OFFSET(0x1F4DC3B0)

namespace Foundation
{
	inline static constexpr unsigned int NapStringInternCacheBackendLRU_TypeDefinitionIndex = 8098;

	class NapStringInternCacheBackendLRU : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* m_Slots; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* m_HashToSlot; // 0x18
		::Il2CppArray<::System::Int32>* m_FreeSlots; // 0x20
		::System::Object* m_Lock; // 0x28
		::System::Int32 m_MostRecentSlot; // 0x30
		::System::Int32 m_LeastRecentSlot; // 0x34
		::System::Int32 m_FreeCount; // 0x38
		::System::Int32 m_Count; // 0x3C
		::System::Int32 m_Capacity; // 0x40

		::System::Void _ctor(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU__CTOR_OFFSET))(this, capacity);
		}

		::System::Int32 get_CachedStringCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_GET_CACHEDSTRINGCOUNT_OFFSET))(this);
		}

		::System::Void Clear(::System::Boolean freeMemory)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_CLEAR_OFFSET))(this, freeMemory);
		}

		::System::String* GetInternedString(::System::UInt64 hash, ::PVOID chars, ::System::Int32 charCount)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt64, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_GETINTERNEDSTRING_OFFSET))(this, hash, chars, charCount);
		}

		::System::Void ResetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_RESETSTATE_OFFSET))(this);
		}

		::System::Int32 AllocateSlot()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_ALLOCATESLOT_OFFSET))(this);
		}

		::System::Void MoveToMostRecent(::System::Int32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_MOVETOMOSTRECENT_OFFSET))(this, slot);
		}

		::System::Void RemoveFromList(::System::Int32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_REMOVEFROMLIST_OFFSET))(this, slot);
		}

		::System::Void AddAsMostRecent(::System::Int32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRINGINTERNCACHEBACKENDLRU_ADDASMOSTRECENT_OFFSET))(this, slot);
		}
	};
}
