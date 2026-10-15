#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionSlopeSlide; }

#define RPG_GAMECORE_CAKERACEACTIONSLOPESLIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D549ED0)
#define RPG_GAMECORE_CAKERACEACTIONSLOPESLIDE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D549EE0)
#define RPG_GAMECORE_CAKERACEACTIONSLOPESLIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D549E40)

namespace RPG::GameCore
{
	class CakeRaceActionSlopeSlide : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSLOPESLIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionSlopeSlide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionSlopeSlide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSLOPESLIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionSlopeSlide* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionSlopeSlide*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSLOPESLIDE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
