#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaRandomRoomCardCastConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207364C0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20736880)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20736530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastConfig_TypeDefinitionIndex = 20049;

	class RogueActPersonaRandomRoomCardCastConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
