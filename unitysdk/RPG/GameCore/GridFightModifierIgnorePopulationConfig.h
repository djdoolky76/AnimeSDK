#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierIgnorePopulationConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERIGNOREPOPULATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D734C50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERIGNOREPOPULATIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734C60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERIGNOREPOPULATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D734C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierIgnorePopulationConfig_TypeDefinitionIndex = 19479;

	class GridFightModifierIgnorePopulationConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERIGNOREPOPULATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierIgnorePopulationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierIgnorePopulationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERIGNOREPOPULATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierIgnorePopulationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierIgnorePopulationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERIGNOREPOPULATIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
