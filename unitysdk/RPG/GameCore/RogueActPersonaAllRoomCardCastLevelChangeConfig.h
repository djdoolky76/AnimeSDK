#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaAllRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaAllRoomCardCastLevelChangeConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTLEVELCHANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99EC30)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTLEVELCHANGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99EC40)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTLEVELCHANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99ECE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAllRoomCardCastLevelChangeConfig_TypeDefinitionIndex = 19743;

	class RogueActPersonaAllRoomCardCastLevelChangeConfig : public ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTLEVELCHANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTLEVELCHANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTLEVELCHANGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
