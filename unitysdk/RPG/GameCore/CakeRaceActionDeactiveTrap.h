#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionDeactiveTrap; }

#define RPG_GAMECORE_CAKERACEACTIONDEACTIVETRAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D548C80)
#define RPG_GAMECORE_CAKERACEACTIONDEACTIVETRAP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D548C90)
#define RPG_GAMECORE_CAKERACEACTIONDEACTIVETRAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D548BF0)

namespace RPG::GameCore
{
	class CakeRaceActionDeactiveTrap : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONDEACTIVETRAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionDeactiveTrap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionDeactiveTrap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONDEACTIVETRAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionDeactiveTrap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionDeactiveTrap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONDEACTIVETRAP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
