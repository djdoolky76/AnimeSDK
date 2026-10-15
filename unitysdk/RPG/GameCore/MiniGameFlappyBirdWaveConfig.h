#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameWaveConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiniGameFlappyBirdBlockConfig; }
namespace RPG::GameCore { class MiniGameFlappyBirdWaveConfig; }

#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D853980)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D853990)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D853930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameFlappyBirdWaveConfig_TypeDefinitionIndex = 18811;

	class MiniGameFlappyBirdWaveConfig : public ::RPG::GameCore::BaseScrollGameWaveConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiniGameFlappyBirdBlockConfig*>* StartBlockList; // 0x20
		::Il2CppArray<::RPG::GameCore::MiniGameFlappyBirdBlockConfig*>* MiddleBlockList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniGameFlappyBirdWaveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniGameFlappyBirdWaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniGameFlappyBirdWaveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniGameFlappyBirdWaveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDWAVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
