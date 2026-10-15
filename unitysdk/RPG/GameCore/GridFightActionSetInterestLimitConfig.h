#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionSetInterestLimitConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D724A30)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D724A40)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D724E80)

namespace RPG::GameCore
{
	class GridFightActionSetInterestLimitConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSetInterestLimitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSetInterestLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSetInterestLimitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSetInterestLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETINTERESTLIMITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
