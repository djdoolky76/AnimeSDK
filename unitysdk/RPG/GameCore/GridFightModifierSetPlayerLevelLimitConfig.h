#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetPlayerLevelLimitConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELLIMITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7357E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELLIMITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7357F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELLIMITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7357A0)

namespace RPG::GameCore
{
	class GridFightModifierSetPlayerLevelLimitConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELLIMITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetPlayerLevelLimitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetPlayerLevelLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELLIMITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetPlayerLevelLimitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetPlayerLevelLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETPLAYERLEVELLIMITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
