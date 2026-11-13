#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IActivityQuestRewardData; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTLIMITEDREWARDPAGEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96BAA0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTLIMITEDREWARDPAGEVIEWMODEL_GET_ACTIVITYREWARDDATA_OFFSET UNITYSDK_OFFSET(0x1C96BB40)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTLIMITEDREWARDPAGEVIEWMODEL_SET_ACTIVITYREWARDDATA_OFFSET UNITYSDK_OFFSET(0x1C96BB50)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertLimitedRewardPageViewModel_TypeDefinitionIndex = 77140;

	class ComicDessertLimitedRewardPageViewModel : public ::System::Object
	{
	public:
		::RPG::Client::IActivityQuestRewardData* _ActivityRewardData_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTLIMITEDREWARDPAGEVIEWMODEL_CTOR_OFFSET))(this);
		}

		::RPG::Client::IActivityQuestRewardData* get_ActivityRewardData()
		{
			return ((::RPG::Client::IActivityQuestRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTLIMITEDREWARDPAGEVIEWMODEL_GET_ACTIVITYREWARDDATA_OFFSET))(this);
		}

		::System::Void set_ActivityRewardData(::RPG::Client::IActivityQuestRewardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IActivityQuestRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTLIMITEDREWARDPAGEVIEWMODEL_SET_ACTIVITYREWARDDATA_OFFSET))(this, a1);
		}

	};
}
