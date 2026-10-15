#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaRandomAddRoomCardConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMADDROOMCARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99F950)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMADDROOMCARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99F960)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMADDROOMCARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99F910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomAddRoomCardConfig_TypeDefinitionIndex = 19752;

	class RogueActPersonaRandomAddRoomCardConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMADDROOMCARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRandomAddRoomCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRandomAddRoomCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMADDROOMCARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRandomAddRoomCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRandomAddRoomCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMADDROOMCARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
