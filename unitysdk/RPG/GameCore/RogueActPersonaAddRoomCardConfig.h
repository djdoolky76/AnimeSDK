#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaAddRoomCardConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D970F20)
#define RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D970F30)
#define RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D970EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAddRoomCardConfig_TypeDefinitionIndex = 19751;

	class RogueActPersonaAddRoomCardConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAddRoomCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAddRoomCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAddRoomCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAddRoomCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
