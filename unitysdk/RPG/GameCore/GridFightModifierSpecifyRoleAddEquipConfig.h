#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSpecifyRoleAddEquipConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDEQUIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9444B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDEQUIPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9444C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDEQUIPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E944470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSpecifyRoleAddEquipConfig_TypeDefinitionIndex = 19761;

	class GridFightModifierSpecifyRoleAddEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDEQUIPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSpecifyRoleAddEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSpecifyRoleAddEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDEQUIPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSpecifyRoleAddEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSpecifyRoleAddEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSPECIFYROLEADDEQUIPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
