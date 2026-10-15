#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyPersonaRoomCardMinLevelOnSelectConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDMINLEVELONSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EAA20)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDMINLEVELONSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EAA30)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDMINLEVELONSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EA9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaRoomCardMinLevelOnSelectConfig_TypeDefinitionIndex = 17850;

	class RogueModifierModifyPersonaRoomCardMinLevelOnSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDMINLEVELONSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardMinLevelOnSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardMinLevelOnSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDMINLEVELONSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardMinLevelOnSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardMinLevelOnSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDMINLEVELONSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
