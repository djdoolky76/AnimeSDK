#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerController; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DRINKMAKERCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D61C830)
#define RPG_GAMECORE_DRINKMAKERCONTROLLER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D61C840)
#define RPG_GAMECORE_DRINKMAKERCONTROLLER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D61C800)

namespace RPG::GameCore
{
	class DrinkMakerController : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCONTROLLER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerController* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCONTROLLER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DrinkMakerController* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DrinkMakerController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERCONTROLLER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
