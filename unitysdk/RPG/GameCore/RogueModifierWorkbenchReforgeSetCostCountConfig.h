#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierWorkbenchReforgeSetCostCountConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGESETCOSTCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ED4C0)
#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGESETCOSTCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9ED4D0)
#define RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGESETCOSTCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9ED480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierWorkbenchReforgeSetCostCountConfig_TypeDefinitionIndex = 17880;

	class RogueModifierWorkbenchReforgeSetCostCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGESETCOSTCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierWorkbenchReforgeSetCostCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierWorkbenchReforgeSetCostCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGESETCOSTCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierWorkbenchReforgeSetCostCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierWorkbenchReforgeSetCostCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERWORKBENCHREFORGESETCOSTCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
