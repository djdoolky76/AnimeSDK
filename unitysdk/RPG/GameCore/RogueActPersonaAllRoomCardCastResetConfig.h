#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaAllRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaAllRoomCardCastResetConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE7D00)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTRESETCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBE7D10)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTRESETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBE7E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAllRoomCardCastResetConfig_TypeDefinitionIndex = 20079;

	class RogueActPersonaAllRoomCardCastResetConfig : public ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastResetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastResetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTRESETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastResetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastResetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTRESETCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
