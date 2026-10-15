#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierTriggerSupplyRoundBeginConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERSUPPLYROUNDBEGINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D708590)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERSUPPLYROUNDBEGINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7085A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERSUPPLYROUNDBEGINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D708550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierTriggerSupplyRoundBeginConfig_TypeDefinitionIndex = 19460;

	class GridFightModifierTriggerSupplyRoundBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERSUPPLYROUNDBEGINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierTriggerSupplyRoundBeginConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierTriggerSupplyRoundBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERSUPPLYROUNDBEGINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierTriggerSupplyRoundBeginConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierTriggerSupplyRoundBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERTRIGGERSUPPLYROUNDBEGINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
