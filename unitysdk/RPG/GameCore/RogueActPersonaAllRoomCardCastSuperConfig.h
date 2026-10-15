#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaAllRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaAllRoomCardCastSuperConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTSUPERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99ECB0)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTSUPERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99ECC0)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTSUPERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99EDE0)

namespace RPG::GameCore
{
	class RogueActPersonaAllRoomCardCastSuperConfig : public ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTSUPERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastSuperConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastSuperConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTSUPERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastSuperConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastSuperConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTSUPERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
