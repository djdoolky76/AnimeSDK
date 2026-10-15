#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class MGAMADCNPAG;
namespace RPG::Client::Achievement { class AchievementTakeRewardResultViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0xC3A8B20)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_SENDTAKEACHIEVEMENTREWARDCSREQANDBUILDRESULT_OFFSET UNITYSDK_OFFSET(0xC3A89B0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_SENDTAKEACHIEVEMENTREWARDCSREQ_OFFSET UNITYSDK_OFFSET(0xC3A8780)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_START_OFFSET UNITYSDK_OFFSET(0xC3A86F0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_STOP_OFFSET UNITYSDK_OFFSET(0xC3A8730)

namespace RPG::Client::Achievement
{
	class AchievementNetworkService : public ::BHPMNMMGLHI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_STOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* SendTakeAchievementRewardCsReq(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_SENDTAKEACHIEVEMENTREWARDCSREQ_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* SendTakeAchievementRewardCsReqAndBuildResult(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_SENDTAKEACHIEVEMENTREWARDCSREQANDBUILDRESULT_OFFSET))(this, a1);
		}

	};
}
