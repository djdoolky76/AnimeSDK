#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeMonsterAlertConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MAZEMONSTERALERTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83A2C0)
#define RPG_GAMECORE_MAZEMONSTERALERTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D839F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeMonsterAlertConfig_TypeDefinitionIndex = 16399;

	class MazeMonsterAlertConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MazeAlertRTPCRangeMin; // 0x10
		::System::Single MazeAlertRTPCRangeMax; // 0x14
		::System::Single MazeAlertRTPCSmoothSpeed; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* NPCMonsterHintDefaultEvent; // 0x20
		::System::Single NPCMonsterHintDefaultRange; // 0x28
		::System::Byte _padding1[0x4];
		::System::String* MazeStateGroupName; // 0x30
		::System::String* MazeStateBusy; // 0x38
		::System::String* MonsterAlertLevelSwitchGroup; // 0x40
		::System::String* MonsterAlertLevelAlertSwitch; // 0x48
		::System::String* MonsterAlertLevelDisarmSwitch; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEMONSTERALERTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeMonsterAlertConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeMonsterAlertConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEMONSTERALERTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
