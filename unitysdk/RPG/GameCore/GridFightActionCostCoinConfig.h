#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionCostCoinConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F6E90)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F6EA0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F7170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCostCoinConfig_TypeDefinitionIndex = 19322;

	class GridFightActionCostCoinConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionCostCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionCostCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionCostCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionCostCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
