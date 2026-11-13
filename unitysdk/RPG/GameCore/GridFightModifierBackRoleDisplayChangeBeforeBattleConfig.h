#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierBackRoleDisplayChangeBeforeBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERBACKROLEDISPLAYCHANGEBEFOREBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060BEB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBACKROLEDISPLAYCHANGEBEFOREBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060BEC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBACKROLEDISPLAYCHANGEBEFOREBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060BE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierBackRoleDisplayChangeBeforeBattleConfig_TypeDefinitionIndex = 19749;

	class GridFightModifierBackRoleDisplayChangeBeforeBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBACKROLEDISPLAYCHANGEBEFOREBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierBackRoleDisplayChangeBeforeBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierBackRoleDisplayChangeBeforeBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBACKROLEDISPLAYCHANGEBEFOREBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierBackRoleDisplayChangeBeforeBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierBackRoleDisplayChangeBeforeBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBACKROLEDISPLAYCHANGEBEFOREBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
