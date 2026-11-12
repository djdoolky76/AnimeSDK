#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaRandomRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaRandomRoomCardCastRemoveConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE8DA0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBE8DB0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBE8ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastRemoveConfig_TypeDefinitionIndex = 20066;

	class RogueActPersonaRandomRoomCardCastRemoveConfig : public ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
