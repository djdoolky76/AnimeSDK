#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaRandomRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaRandomRoomCardCastAppendAttributeConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDATTRIBUTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207364A0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207364B0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20736460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastAppendAttributeConfig_TypeDefinitionIndex = 20069;

	class RogueActPersonaRandomRoomCardCastAppendAttributeConfig : public ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDATTRIBUTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastAppendAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastAppendAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastAppendAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastAppendAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTAPPENDATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
