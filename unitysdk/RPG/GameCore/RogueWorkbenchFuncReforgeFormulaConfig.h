#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchFuncReforgeFormulaConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEFORMULACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA46290)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEFORMULACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA462A0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEFORMULACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA46560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncReforgeFormulaConfig_TypeDefinitionIndex = 18023;

	class RogueWorkbenchFuncReforgeFormulaConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEFORMULACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncReforgeFormulaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncReforgeFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEFORMULACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchFuncReforgeFormulaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchFuncReforgeFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEFORMULACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
