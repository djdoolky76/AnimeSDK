#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierRoleStarUpBeforeBattleBeginConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735660)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735670)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735620)

namespace RPG::GameCore
{
	class GridFightModifierRoleStarUpBeforeBattleBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRoleStarUpBeforeBattleBeginConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRoleStarUpBeforeBattleBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRoleStarUpBeforeBattleBeginConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRoleStarUpBeforeBattleBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERROLESTARUPBEFOREBATTLEBEGINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
