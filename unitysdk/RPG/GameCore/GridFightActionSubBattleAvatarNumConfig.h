#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionSubBattleAvatarNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBATTLEAVATARNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D724A70)
#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBATTLEAVATARNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D724A80)
#define RPG_GAMECORE_GRIDFIGHTACTIONSUBBATTLEAVATARNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D724F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSubBattleAvatarNumConfig_TypeDefinitionIndex = 19305;

	class GridFightActionSubBattleAvatarNumConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBATTLEAVATARNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSubBattleAvatarNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSubBattleAvatarNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBATTLEAVATARNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSubBattleAvatarNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSubBattleAvatarNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSUBBATTLEAVATARNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
