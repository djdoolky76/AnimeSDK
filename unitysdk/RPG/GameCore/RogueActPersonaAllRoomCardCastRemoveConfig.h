#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaAllRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaAllRoomCardCastRemoveConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99EC50)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99EC60)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99ED20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAllRoomCardCastRemoveConfig_TypeDefinitionIndex = 19744;

	class RogueActPersonaAllRoomCardCastRemoveConfig : public ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTREMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
