#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddTraitEffectElationPropertyConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITEFFECTELATIONPROPERTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D733270)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITEFFECTELATIONPROPERTYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D733280)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITEFFECTELATIONPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D733230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddTraitEffectElationPropertyConfig_TypeDefinitionIndex = 19488;

	class GridFightModifierAddTraitEffectElationPropertyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITEFFECTELATIONPROPERTYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddTraitEffectElationPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddTraitEffectElationPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITEFFECTELATIONPROPERTYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddTraitEffectElationPropertyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddTraitEffectElationPropertyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITEFFECTELATIONPROPERTYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
