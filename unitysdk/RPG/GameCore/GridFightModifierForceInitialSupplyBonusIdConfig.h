#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierForceInitialSupplyBonusIdConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D706D40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D706D50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D706D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierForceInitialSupplyBonusIdConfig_TypeDefinitionIndex = 19377;

	class GridFightModifierForceInitialSupplyBonusIdConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceInitialSupplyBonusIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceInitialSupplyBonusIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierForceInitialSupplyBonusIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierForceInitialSupplyBonusIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFORCEINITIALSUPPLYBONUSIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
