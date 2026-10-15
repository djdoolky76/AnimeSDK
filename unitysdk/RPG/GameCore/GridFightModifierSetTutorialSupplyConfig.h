#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetTutorialSupplyConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7080B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7080C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D708070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialSupplyConfig_TypeDefinitionIndex = 19441;

	class GridFightModifierSetTutorialSupplyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialSupplyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialSupplyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialSupplyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialSupplyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSUPPLYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
