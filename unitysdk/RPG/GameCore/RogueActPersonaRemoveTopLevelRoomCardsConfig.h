#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaRemoveTopLevelRoomCardsConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE9090)
#define RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBE90A0)
#define RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBE9050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRemoveTopLevelRoomCardsConfig_TypeDefinitionIndex = 20107;

	class RogueActPersonaRemoveTopLevelRoomCardsConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRemoveTopLevelRoomCardsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRemoveTopLevelRoomCardsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaRemoveTopLevelRoomCardsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaRemoveTopLevelRoomCardsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
