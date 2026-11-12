#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DailyLoginRewardActivityData.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEBF37A0)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_CANGETREWARD_OFFSET UNITYSDK_OFFSET(0xEBF3A30)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0xEBF3AF0)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_ISREWARDTOKEN_OFFSET UNITYSDK_OFFSET(0xEBF39D0)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xEBF3A90)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xEBF3940)
#define RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_ONSYNCDATA_OFFSET UNITYSDK_OFFSET(0xEBF3840)

namespace RPG::Client::StoryToken
{
	inline static constexpr unsigned int StoryTokenActivityData_TypeDefinitionIndex = 76537;

	class StoryTokenActivityData : public ::RPG::Client::DailyLoginRewardActivityData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _NotDisplayInActivityPageIDList; // 0xA8
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void OnSyncData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_ONSYNCDATA_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_IsRewardToken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_ISREWARDTOKEN_OFFSET))(this);
		}

		::System::Boolean get_CanGetReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_CANGETREWARD_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYTOKEN_STORYTOKENACTIVITYDATA_GET_ISDISPLAY_OFFSET))(this);
		}

	};
}
