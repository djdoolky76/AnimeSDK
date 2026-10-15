#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchReforgeGenFormulaConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENFORMULACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18EF0)
#define RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENFORMULACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchReforgeGenFormulaConfig_TypeDefinitionIndex = 18022;

	class RogueWorkbenchReforgeGenFormulaConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENFORMULACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchReforgeGenFormulaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchReforgeGenFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENFORMULACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
