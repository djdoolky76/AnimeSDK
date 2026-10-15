#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaStyleGiftForcedSelectConfig; }

#define RPG_GAMECORE_ROGUEPERSONASTYLEGIFTFORCEDSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2C3F0)
#define RPG_GAMECORE_ROGUEPERSONASTYLEGIFTFORCEDSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2C3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaStyleGiftForcedSelectConfig_TypeDefinitionIndex = 17855;

	class RoguePersonaStyleGiftForcedSelectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONASTYLEGIFTFORCEDSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaStyleGiftForcedSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaStyleGiftForcedSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONASTYLEGIFTFORCEDSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
