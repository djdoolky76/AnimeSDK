#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionBouncePlate; }

#define RPG_GAMECORE_CAKERACEACTIONBOUNCEPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D548230)
#define RPG_GAMECORE_CAKERACEACTIONBOUNCEPLATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D548240)
#define RPG_GAMECORE_CAKERACEACTIONBOUNCEPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5481A0)

namespace RPG::GameCore
{
	class CakeRaceActionBouncePlate : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBOUNCEPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionBouncePlate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionBouncePlate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBOUNCEPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionBouncePlate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionBouncePlate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBOUNCEPLATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
