#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationTextConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MAPROTATIONTEXTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D830300)
#define RPG_GAMECORE_MAPROTATIONTEXTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D82FBE0)

namespace RPG::GameCore
{
	class MapRotationTextConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PoseSwitchBanMazeSkillTextID; // 0x10
		::System::String* PoseSwitchBanMazeAttackTextID; // 0x18
		::System::String* EnergyOutText; // 0x20
		::System::String* EnergyGainText; // 0x28
		::System::String* EnergyFillText; // 0x30
		::System::String* NotInVolumeText; // 0x38
		::System::String* RemovePoseSwitcherText; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONTEXTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationTextConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationTextConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONTEXTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
