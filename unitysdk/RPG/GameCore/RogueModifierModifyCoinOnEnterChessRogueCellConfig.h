#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyCoinOnEnterChessRogueCellConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCHESSROGUECELLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EA240)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCHESSROGUECELLCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EA250)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCHESSROGUECELLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EA200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyCoinOnEnterChessRogueCellConfig_TypeDefinitionIndex = 17987;

	class RogueModifierModifyCoinOnEnterChessRogueCellConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCHESSROGUECELLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyCoinOnEnterChessRogueCellConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyCoinOnEnterChessRogueCellConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCHESSROGUECELLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyCoinOnEnterChessRogueCellConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyCoinOnEnterChessRogueCellConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCHESSROGUECELLCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
