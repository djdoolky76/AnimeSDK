#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimStartChenLingGameBoyCountDownAction; }

#define RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B0740)
#define RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B0750)
#define RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B06D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartChenLingGameBoyCountDownAction_TypeDefinitionIndex = 18675;

	class FiveDimStartChenLingGameBoyCountDownAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTCHENLINGGAMEBOYCOUNTDOWNACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
