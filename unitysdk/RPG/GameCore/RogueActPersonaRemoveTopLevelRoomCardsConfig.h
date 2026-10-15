#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaRemoveTopLevelRoomCardsConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A0020)
#define RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A0030)
#define RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99FFE0)

namespace RPG::GameCore
{
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
