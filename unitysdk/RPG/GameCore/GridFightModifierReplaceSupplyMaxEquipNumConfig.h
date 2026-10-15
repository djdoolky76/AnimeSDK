#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierReplaceSupplyMaxEquipNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYMAXEQUIPNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7354E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYMAXEQUIPNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7354F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYMAXEQUIPNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7354A0)

namespace RPG::GameCore
{
	class GridFightModifierReplaceSupplyMaxEquipNumConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYMAXEQUIPNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReplaceSupplyMaxEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReplaceSupplyMaxEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYMAXEQUIPNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReplaceSupplyMaxEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReplaceSupplyMaxEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYMAXEQUIPNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
