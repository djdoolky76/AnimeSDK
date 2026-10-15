#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierBanEquipDressConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANEQUIPDRESSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7335C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANEQUIPDRESSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7335D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBANEQUIPDRESSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D733580)

namespace RPG::GameCore
{
	class GridFightModifierBanEquipDressConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANEQUIPDRESSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierBanEquipDressConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierBanEquipDressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANEQUIPDRESSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierBanEquipDressConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierBanEquipDressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBANEQUIPDRESSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
