#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityElationHideCutIn; }

#define RPG_GAMECORE_ACTIVITYELATIONHIDECUTIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D353D90)
#define RPG_GAMECORE_ACTIVITYELATIONHIDECUTIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D353DA0)
#define RPG_GAMECORE_ACTIVITYELATIONHIDECUTIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D353CD0)

namespace RPG::GameCore
{
	class ActivityElationHideCutIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONHIDECUTIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityElationHideCutIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityElationHideCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONHIDECUTIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityElationHideCutIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityElationHideCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONHIDECUTIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
