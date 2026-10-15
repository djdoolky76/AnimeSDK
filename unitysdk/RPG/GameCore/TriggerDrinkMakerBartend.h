#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerDrinkMakerBartend; }

#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC46120)
#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC46130)
#define RPG_GAMECORE_TRIGGERDRINKMAKERBARTEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC460F0)

namespace RPG::GameCore
{
	class TriggerDrinkMakerBartend : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggered; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerDrinkMakerBartend* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerDrinkMakerBartend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerDrinkMakerBartend* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerDrinkMakerBartend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDRINKMAKERBARTEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
