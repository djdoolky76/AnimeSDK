#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierFakeRemoveRoleBeforeBattleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFAKEREMOVEROLEBEFOREBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E941D70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFAKEREMOVEROLEBEFOREBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E941D80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFAKEREMOVEROLEBEFOREBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E941D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierFakeRemoveRoleBeforeBattleConfig_TypeDefinitionIndex = 19801;

	class GridFightModifierFakeRemoveRoleBeforeBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFAKEREMOVEROLEBEFOREBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierFakeRemoveRoleBeforeBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierFakeRemoveRoleBeforeBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFAKEREMOVEROLEBEFOREBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierFakeRemoveRoleBeforeBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierFakeRemoveRoleBeforeBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFAKEREMOVEROLEBEFOREBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
