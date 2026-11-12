#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierBindingEquipForRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERBINDINGEQUIPFORROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9405C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBINDINGEQUIPFORROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9405D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBINDINGEQUIPFORROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E940580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierBindingEquipForRoleConfig_TypeDefinitionIndex = 19751;

	class GridFightModifierBindingEquipForRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBINDINGEQUIPFORROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierBindingEquipForRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierBindingEquipForRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBINDINGEQUIPFORROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierBindingEquipForRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierBindingEquipForRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBINDINGEQUIPFORROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
