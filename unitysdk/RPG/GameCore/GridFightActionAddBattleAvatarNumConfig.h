#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddBattleAvatarNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D723F00)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D723F10)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D723EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddBattleAvatarNumConfig_TypeDefinitionIndex = 19304;

	class GridFightActionAddBattleAvatarNumConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddBattleAvatarNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddBattleAvatarNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddBattleAvatarNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddBattleAvatarNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDBATTLEAVATARNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
