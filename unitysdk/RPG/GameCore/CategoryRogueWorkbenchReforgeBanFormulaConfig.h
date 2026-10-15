#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CategoryRogueWorkbenchReforgeBanFormulaConfig; }

#define RPG_GAMECORE_CATEGORYROGUEWORKBENCHREFORGEBANFORMULACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D558230)
#define RPG_GAMECORE_CATEGORYROGUEWORKBENCHREFORGEBANFORMULACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5581F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CategoryRogueWorkbenchReforgeBanFormulaConfig_TypeDefinitionIndex = 17756;

	class CategoryRogueWorkbenchReforgeBanFormulaConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CATEGORYROGUEWORKBENCHREFORGEBANFORMULACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CategoryRogueWorkbenchReforgeBanFormulaConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CategoryRogueWorkbenchReforgeBanFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CATEGORYROGUEWORKBENCHREFORGEBANFORMULACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
