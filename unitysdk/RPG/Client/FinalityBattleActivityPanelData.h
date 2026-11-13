#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"
namespace RPG::Client::ActivityFinalityBattle::Activity { class FinalityBattleActivityPanelViewModel; }

#define RPG_CLIENT_FINALITYBATTLEACTIVITYPANELDATA_CREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B30AC70)
#define RPG_CLIENT_FINALITYBATTLEACTIVITYPANELDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B30AC60)
#define RPG_CLIENT_FINALITYBATTLEACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0x1B30AE30)
#define RPG_CLIENT_FINALITYBATTLEACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x1B30ACD0)

namespace RPG::Client
{
	inline static constexpr unsigned int FinalityBattleActivityPanelData_TypeDefinitionIndex = 63024;

	class FinalityBattleActivityPanelData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINALITYBATTLEACTIVITYPANELDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityFinalityBattle::Activity::FinalityBattleActivityPanelViewModel* CreateViewModel()
		{
			return ((::RPG::Client::ActivityFinalityBattle::Activity::FinalityBattleActivityPanelViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINALITYBATTLEACTIVITYPANELDATA_CREATEVIEWMODEL_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINALITYBATTLEACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINALITYBATTLEACTIVITYPANELDATA_ISSHOWDAILYREDDOT_OFFSET))(this);
		}

	};
}
