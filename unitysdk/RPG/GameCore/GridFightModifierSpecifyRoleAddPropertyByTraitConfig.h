#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSpecifyRoleAddPropertyByTraitConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDPROPERTYBYTRAITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E944510)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDPROPERTYBYTRAITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E944520)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDPROPERTYBYTRAITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9444D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSpecifyRoleAddPropertyByTraitConfig_TypeDefinitionIndex = 19764;

	class GridFightModifierSpecifyRoleAddPropertyByTraitConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDPROPERTYBYTRAITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSpecifyRoleAddPropertyByTraitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSpecifyRoleAddPropertyByTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDPROPERTYBYTRAITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSpecifyRoleAddPropertyByTraitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSpecifyRoleAddPropertyByTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDPROPERTYBYTRAITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
