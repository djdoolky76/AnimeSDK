#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddAdditionalPropertyByRoleTraitConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROLETRAITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93F020)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROLETRAITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E93F030)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROLETRAITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E93EFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddAdditionalPropertyByRoleTraitConfig_TypeDefinitionIndex = 19611;

	class GridFightModifierAddAdditionalPropertyByRoleTraitConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROLETRAITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoleTraitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoleTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROLETRAITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoleTraitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoleTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROLETRAITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
