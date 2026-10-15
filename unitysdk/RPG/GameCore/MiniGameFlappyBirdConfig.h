#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiniGameFlappyBirdConfig; }
namespace RPG::GameCore { class MiniGameFlappyBirdWaveConfig; }

#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D880F50)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D880F70)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D880F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameFlappyBirdConfig_TypeDefinitionIndex = 18809;

	class MiniGameFlappyBirdConfig : public ::RPG::GameCore::BaseScrollGameConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiniGameFlappyBirdWaveConfig*>* WaveConfig; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniGameFlappyBirdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniGameFlappyBirdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiniGameFlappyBirdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiniGameFlappyBirdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
