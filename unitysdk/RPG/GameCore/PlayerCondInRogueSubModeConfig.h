#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerCondInRogueSubModeConfig; }

#define RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D933880)
#define RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D933890)
#define RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D933840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerCondInRogueSubModeConfig_TypeDefinitionIndex = 19560;

	class PlayerCondInRogueSubModeConfig : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerCondInRogueSubModeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerCondInRogueSubModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerCondInRogueSubModeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerCondInRogueSubModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUESUBMODECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
