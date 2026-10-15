#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionSuddenGravityAdd; }

#define RPG_GAMECORE_CAKERACEACTIONSUDDENGRAVITYADD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54A3D0)
#define RPG_GAMECORE_CAKERACEACTIONSUDDENGRAVITYADD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54A3E0)
#define RPG_GAMECORE_CAKERACEACTIONSUDDENGRAVITYADD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54A360)

namespace RPG::GameCore
{
	class CakeRaceActionSuddenGravityAdd : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSUDDENGRAVITYADD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionSuddenGravityAdd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionSuddenGravityAdd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSUDDENGRAVITYADD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionSuddenGravityAdd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionSuddenGravityAdd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSUDDENGRAVITYADD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
