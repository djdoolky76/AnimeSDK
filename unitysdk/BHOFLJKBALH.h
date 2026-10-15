#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BHOFLJKBALH_CTOR_OFFSET UNITYSDK_OFFSET(0xB4925C0)
#define BHOFLJKBALH_GET_FIGHTID_OFFSET UNITYSDK_OFFSET(0xB492500)
#define BHOFLJKBALH_GET_ISBEST_OFFSET UNITYSDK_OFFSET(0xB4925A0)
#define BHOFLJKBALH_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB492520)
#define BHOFLJKBALH_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB492560)
#define BHOFLJKBALH_GET_PASSEDLEVELBEFORE_OFFSET UNITYSDK_OFFSET(0xB492540)
#define BHOFLJKBALH_GET_ROUND_OFFSET UNITYSDK_OFFSET(0xB492580)
#define BHOFLJKBALH_SET_FIGHTID_OFFSET UNITYSDK_OFFSET(0xB492510)
#define BHOFLJKBALH_SET_ISBEST_OFFSET UNITYSDK_OFFSET(0xB4925B0)
#define BHOFLJKBALH_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB492530)
#define BHOFLJKBALH_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB492570)
#define BHOFLJKBALH_SET_PASSEDLEVELBEFORE_OFFSET UNITYSDK_OFFSET(0xB492550)
#define BHOFLJKBALH_SET_ROUND_OFFSET UNITYSDK_OFFSET(0xB492590)

inline static constexpr unsigned int BHOFLJKBALH_TypeDefinitionIndex = 81020;

	class BHOFLJKBALH : public ::System::Object
	{
	public:
		::System::UInt32 _FightID_k__BackingField; // 0x10
		::System::Boolean _IsBest_k__BackingField; // 0x14
		::System::Boolean _IsWin_k__BackingField; // 0x15
		::System::Byte _padding0[0x2];
		::System::UInt32 _Level_k__BackingField; // 0x18
		::System::UInt32 _PassedLevelBefore_k__BackingField; // 0x1C
		::System::UInt32 _Round_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOFLJKBALH_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_FightID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOFLJKBALH_GET_FIGHTID_OFFSET))(this);
		}

		::System::Void set_FightID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHOFLJKBALH_SET_FIGHTID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOFLJKBALH_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHOFLJKBALH_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_PassedLevelBefore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOFLJKBALH_GET_PASSEDLEVELBEFORE_OFFSET))(this);
		}

		::System::Void set_PassedLevelBefore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHOFLJKBALH_SET_PASSEDLEVELBEFORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOFLJKBALH_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHOFLJKBALH_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Round()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOFLJKBALH_GET_ROUND_OFFSET))(this);
		}

		::System::Void set_Round(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHOFLJKBALH_SET_ROUND_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOFLJKBALH_GET_ISBEST_OFFSET))(this);
		}

		::System::Void set_IsBest(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHOFLJKBALH_SET_ISBEST_OFFSET))(this, a1);
		}

	};
