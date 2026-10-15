#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaLowestNRoomCardCastResetConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONALOWESTNROOMCARDCASTRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9719E0)
#define RPG_GAMECORE_ROGUEACTPERSONALOWESTNROOMCARDCASTRESETCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9719F0)
#define RPG_GAMECORE_ROGUEACTPERSONALOWESTNROOMCARDCASTRESETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9719A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaLowestNRoomCardCastResetConfig_TypeDefinitionIndex = 19777;

	class RogueActPersonaLowestNRoomCardCastResetConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONALOWESTNROOMCARDCASTRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaLowestNRoomCardCastResetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaLowestNRoomCardCastResetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONALOWESTNROOMCARDCASTRESETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaLowestNRoomCardCastResetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaLowestNRoomCardCastResetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONALOWESTNROOMCARDCASTRESETCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
