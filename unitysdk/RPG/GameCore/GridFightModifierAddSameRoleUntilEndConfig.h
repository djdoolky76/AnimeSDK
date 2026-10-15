#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddSameRoleUntilEndConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7331B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7331C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D733170)

namespace RPG::GameCore
{
	class GridFightModifierAddSameRoleUntilEndConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddSameRoleUntilEndConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddSameRoleUntilEndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddSameRoleUntilEndConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddSameRoleUntilEndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
