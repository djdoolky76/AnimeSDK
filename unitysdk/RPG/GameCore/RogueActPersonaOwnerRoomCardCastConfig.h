#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaOwnerRoomCardCastConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D971A60)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D971E20)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D971AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastConfig_TypeDefinitionIndex = 19754;

	class RogueActPersonaOwnerRoomCardCastConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
