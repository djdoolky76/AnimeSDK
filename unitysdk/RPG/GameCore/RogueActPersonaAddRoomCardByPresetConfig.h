#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaAddRoomCardByPresetConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDBYPRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE7890)
#define RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDBYPRESETCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBE78A0)
#define RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDBYPRESETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBE7850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAddRoomCardByPresetConfig_TypeDefinitionIndex = 20081;

	class RogueActPersonaAddRoomCardByPresetConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDBYPRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAddRoomCardByPresetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAddRoomCardByPresetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDBYPRESETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAddRoomCardByPresetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAddRoomCardByPresetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDBYPRESETCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
