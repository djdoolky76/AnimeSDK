#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierUnlockTraitMembersForAllPreBattleRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSFORALLPREBATTLEROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E944930)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSFORALLPREBATTLEROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E944940)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSFORALLPREBATTLEROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9448F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUnlockTraitMembersForAllPreBattleRoleConfig_TypeDefinitionIndex = 19581;

	class GridFightModifierUnlockTraitMembersForAllPreBattleRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSFORALLPREBATTLEROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUnlockTraitMembersForAllPreBattleRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUnlockTraitMembersForAllPreBattleRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSFORALLPREBATTLEROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUnlockTraitMembersForAllPreBattleRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUnlockTraitMembersForAllPreBattleRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSFORALLPREBATTLEROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
