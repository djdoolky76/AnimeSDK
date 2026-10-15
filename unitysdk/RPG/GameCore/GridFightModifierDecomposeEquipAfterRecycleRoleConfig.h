#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierDecomposeEquipAfterRecycleRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERDECOMPOSEEQUIPAFTERRECYCLEROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D733930)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDECOMPOSEEQUIPAFTERRECYCLEROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D733940)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDECOMPOSEEQUIPAFTERRECYCLEROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7338F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierDecomposeEquipAfterRecycleRoleConfig_TypeDefinitionIndex = 19425;

	class GridFightModifierDecomposeEquipAfterRecycleRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDECOMPOSEEQUIPAFTERRECYCLEROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierDecomposeEquipAfterRecycleRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierDecomposeEquipAfterRecycleRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDECOMPOSEEQUIPAFTERRECYCLEROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierDecomposeEquipAfterRecycleRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierDecomposeEquipAfterRecycleRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDECOMPOSEEQUIPAFTERRECYCLEROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
