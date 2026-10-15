#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TrainPartyPerformanceCharacterTriggerFreeStyle; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTERTRIGGERFREESTYLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC33F90)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTERTRIGGERFREESTYLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC33FA0)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTERTRIGGERFREESTYLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC33F60)

namespace RPG::GameCore
{
	class TrainPartyPerformanceCharacterTriggerFreeStyle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ActionName; // 0x20
		::System::Single NormalizedTimeWait; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTERTRIGGERFREESTYLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyPerformanceCharacterTriggerFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyPerformanceCharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTERTRIGGERFREESTYLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyPerformanceCharacterTriggerFreeStyle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyPerformanceCharacterTriggerFreeStyle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECHARACTERTRIGGERFREESTYLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
