#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGGLOEAKFEI;

#define PPJJIHECOHH_CTOR_OFFSET UNITYSDK_OFFSET(0xC38C620)
#define PPJJIHECOHH_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xC38C5E0)
#define PPJJIHECOHH_GET_EXAMID_OFFSET UNITYSDK_OFFSET(0xC38C610)
#define PPJJIHECOHH_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC38C5F0)
#define PPJJIHECOHH_GET_MININCOME_OFFSET UNITYSDK_OFFSET(0xC38C600)

	class PPJJIHECOHH : public ::System::Object
	{
	public:
		::System::Int32 _CacheKey_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14
		::System::UInt32 _MinIncome_k__BackingField; // 0x18
		::System::UInt32 _ExamID_k__BackingField; // 0x1C
		::System::Void _ctor(::CGGLOEAKFEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGGLOEAKFEI*))((::PBYTE)hIl2Cpp + PPJJIHECOHH_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CacheKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJJIHECOHH_GET_CACHEKEY_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJJIHECOHH_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MinIncome()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJJIHECOHH_GET_MININCOME_OFFSET))(this);
		}

		::System::UInt32 get_ExamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJJIHECOHH_GET_EXAMID_OFFSET))(this);
		}

	};
