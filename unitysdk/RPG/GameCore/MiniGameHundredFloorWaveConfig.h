#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameWaveConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiniGameHundredFloorBlockConfig; }
namespace RPG::GameCore { class MiniGameHundredFloorWaveConfig; }

#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D881B50)
#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D881B60)
#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D881B00)

namespace RPG::GameCore
{
	class MiniGameHundredFloorWaveConfig : public ::RPG::GameCore::BaseScrollGameWaveConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiniGameHundredFloorBlockConfig*>* StartBlockList; // 0x20
		::Il2CppArray<::RPG::GameCore::MiniGameHundredFloorBlockConfig*>* MiddleBlockList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniGameHundredFloorWaveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniGameHundredFloorWaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniGameHundredFloorWaveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniGameHundredFloorWaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORWAVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
