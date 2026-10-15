#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierFreeBuyRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D734A10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734A20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7349D0)

namespace RPG::GameCore
{
	class GridFightModifierFreeBuyRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierFreeBuyRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierFreeBuyRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierFreeBuyRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierFreeBuyRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFREEBUYROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
