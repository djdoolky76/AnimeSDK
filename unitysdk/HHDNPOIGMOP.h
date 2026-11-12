#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAMIOFOKCEB.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define HHDNPOIGMOP_CTOR_OFFSET UNITYSDK_OFFSET(0x16C0BA00)
#define HHDNPOIGMOP_GET_LEVELDESC_OFFSET UNITYSDK_OFFSET(0x16C0B9C0)
#define HHDNPOIGMOP_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x16C0B960)
#define HHDNPOIGMOP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x16C0B9E0)
#define HHDNPOIGMOP_GET_UNLOCKCYCLEID_OFFSET UNITYSDK_OFFSET(0x16C0B9A0)
#define HHDNPOIGMOP_GET_UPGRADECOST_OFFSET UNITYSDK_OFFSET(0x16C0B980)
#define HHDNPOIGMOP_SET_LEVELDESC_OFFSET UNITYSDK_OFFSET(0x16C0B9D0)
#define HHDNPOIGMOP_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x16C0B970)
#define HHDNPOIGMOP_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x16C0B9F0)
#define HHDNPOIGMOP_SET_UNLOCKCYCLEID_OFFSET UNITYSDK_OFFSET(0x16C0B9B0)
#define HHDNPOIGMOP_SET_UPGRADECOST_OFFSET UNITYSDK_OFFSET(0x16C0B990)

inline static constexpr unsigned int HHDNPOIGMOP_TypeDefinitionIndex = 77055;

	class HHDNPOIGMOP : public ::System::Object
	{
	public:
		::BAMIOFOKCEB _UnlockCycleId_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14
		::RPG::Client::TextID _LevelDesc_k__BackingField; // 0x18
		::System::UInt32 _UpgradeCost_k__BackingField; // 0x28
		::System::UInt32 _Priority_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDNPOIGMOP_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDNPOIGMOP_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHDNPOIGMOP_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_UpgradeCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDNPOIGMOP_GET_UPGRADECOST_OFFSET))(this);
		}

		::System::Void set_UpgradeCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHDNPOIGMOP_SET_UPGRADECOST_OFFSET))(this, a1);
		}

		::BAMIOFOKCEB get_UnlockCycleId()
		{
			return ((::BAMIOFOKCEB(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDNPOIGMOP_GET_UNLOCKCYCLEID_OFFSET))(this);
		}

		::System::Void set_UnlockCycleId(::BAMIOFOKCEB a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAMIOFOKCEB))((::PBYTE)hIl2Cpp + HHDNPOIGMOP_SET_UNLOCKCYCLEID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_LevelDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDNPOIGMOP_GET_LEVELDESC_OFFSET))(this);
		}

		::System::Void set_LevelDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + HHDNPOIGMOP_SET_LEVELDESC_OFFSET))(this, a1);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDNPOIGMOP_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHDNPOIGMOP_SET_PRIORITY_OFFSET))(this, a1);
		}

	};
