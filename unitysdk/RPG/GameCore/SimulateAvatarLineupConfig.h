#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SimulateAvatarLineupConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SIMULATEAVATARLINEUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABD130)
#define RPG_GAMECORE_SIMULATEAVATARLINEUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABCCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimulateAvatarLineupConfig_TypeDefinitionIndex = 18142;

	class SimulateAvatarLineupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 avatarId; // 0x10
		::System::UInt32 enhancedId; // 0x14
		::System::UInt32 level; // 0x18
		::System::UInt32 promotion; // 0x1C
		::System::UInt32 rank; // 0x20
		::System::UInt32 hp; // 0x24
		::System::UInt32 sp; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* skillTree; // 0x30
		::System::Boolean skillTreeMaxWithinLevel; // 0x38
		::System::Boolean skillTreeLvMax; // 0x39
		::System::Byte _padding1[0x6];
		::System::String* equipment; // 0x40
		::Il2CppArray<::System::UInt32>* relicPropertyTypeList; // 0x48
		::System::UInt32 RelicMainValue; // 0x50
		::System::UInt32 RelicSubValue; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMULATEAVATARLINEUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SimulateAvatarLineupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SimulateAvatarLineupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMULATEAVATARLINEUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
