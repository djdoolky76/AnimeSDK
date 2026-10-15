#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierBattleFailKeepWinConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERBATTLEFAILKEEPWINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D705BF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBATTLEFAILKEEPWINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D705C00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERBATTLEFAILKEEPWINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D705BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierBattleFailKeepWinConfig_TypeDefinitionIndex = 19372;

	class GridFightModifierBattleFailKeepWinConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBATTLEFAILKEEPWINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierBattleFailKeepWinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierBattleFailKeepWinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBATTLEFAILKEEPWINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierBattleFailKeepWinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierBattleFailKeepWinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERBATTLEFAILKEEPWINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
