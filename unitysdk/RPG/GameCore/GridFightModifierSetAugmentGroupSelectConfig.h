#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetAugmentGroupSelectConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTGROUPSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E943620)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTGROUPSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E943630)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTGROUPSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9435E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetAugmentGroupSelectConfig_TypeDefinitionIndex = 19772;

	class GridFightModifierSetAugmentGroupSelectConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTGROUPSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetAugmentGroupSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetAugmentGroupSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTGROUPSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetAugmentGroupSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetAugmentGroupSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTGROUPSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
