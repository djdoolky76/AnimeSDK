#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCheersCancelMakerDrinkAfterPerformance; }

#define RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D61A7A0)
#define RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D61A7B0)
#define RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D61A6E0)

namespace RPG::GameCore
{
	class DrinkMakerCheersCancelMakerDrinkAfterPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerCheersCancelMakerDrinkAfterPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCHEERSCANCELMAKERDRINKAFTERPERFORMANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
