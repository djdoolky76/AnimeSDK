#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddKeepWinRewardConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDKEEPWINREWARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D732D30)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDKEEPWINREWARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D732D40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDKEEPWINREWARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D732CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddKeepWinRewardConfig_TypeDefinitionIndex = 19373;

	class GridFightModifierAddKeepWinRewardConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDKEEPWINREWARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddKeepWinRewardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddKeepWinRewardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDKEEPWINREWARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddKeepWinRewardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddKeepWinRewardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDKEEPWINREWARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
