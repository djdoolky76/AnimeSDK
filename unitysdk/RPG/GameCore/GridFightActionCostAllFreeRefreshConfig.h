#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionCostAllFreeRefreshConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7248F0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D724900)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D724BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCostAllFreeRefreshConfig_TypeDefinitionIndex = 19323;

	class GridFightActionCostAllFreeRefreshConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionCostAllFreeRefreshConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionCostAllFreeRefreshConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionCostAllFreeRefreshConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionCostAllFreeRefreshConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
