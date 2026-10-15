#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddFakeRoleWithEquipConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDFAKEROLEWITHEQUIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D732C10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDFAKEROLEWITHEQUIPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D732C20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDFAKEROLEWITHEQUIPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D732BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddFakeRoleWithEquipConfig_TypeDefinitionIndex = 19371;

	class GridFightModifierAddFakeRoleWithEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDFAKEROLEWITHEQUIPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddFakeRoleWithEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddFakeRoleWithEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDFAKEROLEWITHEQUIPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddFakeRoleWithEquipConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddFakeRoleWithEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDFAKEROLEWITHEQUIPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
