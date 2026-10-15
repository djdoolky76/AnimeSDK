#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetSupplyNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETSUPPLYNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D707E10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETSUPPLYNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D707E20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETSUPPLYNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D707DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetSupplyNumConfig_TypeDefinitionIndex = 19451;

	class GridFightModifierSetSupplyNumConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETSUPPLYNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetSupplyNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetSupplyNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETSUPPLYNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetSupplyNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetSupplyNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETSUPPLYNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
