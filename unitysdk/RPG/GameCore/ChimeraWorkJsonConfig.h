#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbilityStart; }
namespace RPG::GameCore { class ChimeraEventHandlers; }
namespace RPG::GameCore { class ChimeraWorkJsonConfig; }
namespace RPG::GameCore { class ChimeraWorkPhaseConfig; }

#define RPG_GAMECORE_CHIMERAWORKJSONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D583A60)
#define RPG_GAMECORE_CHIMERAWORKJSONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5838C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkJsonConfig_TypeDefinitionIndex = 15883;

	class ChimeraWorkJsonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraAbilityStart* Spawn; // 0x10
		::RPG::GameCore::ChimeraAbilityStart* OnStart; // 0x18
		::RPG::GameCore::ChimeraAbilityStart* OnFinish; // 0x20
		::RPG::GameCore::ChimeraAbilityStart* Leave; // 0x28
		::RPG::GameCore::ChimeraAbilityStart* CloseAttack; // 0x30
		::RPG::GameCore::ChimeraWorkPhaseConfig* WorkPhase; // 0x38
		::RPG::GameCore::ChimeraEventHandlers* Handlers; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKJSONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraWorkJsonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraWorkJsonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAWORKJSONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
