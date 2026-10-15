#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierAddRandomPathEchoConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERADDRANDOMPATHECHOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AF9C0)
#define RPG_GAMECORE_ROGUEMODIFIERADDRANDOMPATHECHOCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9AF9D0)
#define RPG_GAMECORE_ROGUEMODIFIERADDRANDOMPATHECHOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9AF980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddRandomPathEchoConfig_TypeDefinitionIndex = 17992;

	class RogueModifierAddRandomPathEchoConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDRANDOMPATHECHOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAddRandomPathEchoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAddRandomPathEchoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDRANDOMPATHECHOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAddRandomPathEchoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAddRandomPathEchoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDRANDOMPATHECHOCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
