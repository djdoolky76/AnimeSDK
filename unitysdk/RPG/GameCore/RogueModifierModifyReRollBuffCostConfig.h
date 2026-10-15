#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyReRollBuffCostConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREROLLBUFFCOSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA185C0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREROLLBUFFCOSTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA185D0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYREROLLBUFFCOSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyReRollBuffCostConfig_TypeDefinitionIndex = 17961;

	class RogueModifierModifyReRollBuffCostConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREROLLBUFFCOSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyReRollBuffCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyReRollBuffCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREROLLBUFFCOSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyReRollBuffCostConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyReRollBuffCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYREROLLBUFFCOSTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
