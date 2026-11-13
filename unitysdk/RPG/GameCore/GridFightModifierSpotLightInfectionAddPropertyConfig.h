#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSpotLightInfectionAddPropertyConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPOTLIGHTINFECTIONADDPROPERTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BC200)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPOTLIGHTINFECTIONADDPROPERTYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BC210)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPOTLIGHTINFECTIONADDPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BC1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSpotLightInfectionAddPropertyConfig_TypeDefinitionIndex = 19792;

	class GridFightModifierSpotLightInfectionAddPropertyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPOTLIGHTINFECTIONADDPROPERTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSpotLightInfectionAddPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSpotLightInfectionAddPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPOTLIGHTINFECTIONADDPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSpotLightInfectionAddPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSpotLightInfectionAddPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPOTLIGHTINFECTIONADDPROPERTYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
