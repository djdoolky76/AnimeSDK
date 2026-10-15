#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class MiniGameHundredFloorConfig; }
namespace RPG::GameCore { class MiniGameHundredFloorWaveConfig; }

#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D881760)
#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D881780)
#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D881710)

namespace RPG::GameCore
{
	class MiniGameHundredFloorConfig : public ::RPG::GameCore::BaseScrollGameConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiniGameHundredFloorWaveConfig*>* WaveConfig; // 0x48
		::RPG::GameCore::HoyoTagContainer* ChildPresetTags; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniGameHundredFloorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniGameHundredFloorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniGameHundredFloorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniGameHundredFloorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
