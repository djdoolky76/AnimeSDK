#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaSelectRoomCardCastRemoveAndRandomCardChangeLevelConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEANDRANDOMCARDCHANGELEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE9700)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEANDRANDOMCARDCHANGELEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EBE9710)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEANDRANDOMCARDCHANGELEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EBE9910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastRemoveAndRandomCardChangeLevelConfig_TypeDefinitionIndex = 20059;

	class RogueActPersonaSelectRoomCardCastRemoveAndRandomCardChangeLevelConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEANDRANDOMCARDCHANGELEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAndRandomCardChangeLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAndRandomCardChangeLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEANDRANDOMCARDCHANGELEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAndRandomCardChangeLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAndRandomCardChangeLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEANDRANDOMCARDCHANGELEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
