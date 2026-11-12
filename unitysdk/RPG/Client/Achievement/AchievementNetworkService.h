#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
class MGAMADCNPAG;
namespace RPG::Client::Achievement { class AchievementTakeRewardResultViewModel; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0xCCE2E60)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_SENDTAKEACHIEVEMENTREWARDCSREQANDBUILDRESULT_OFFSET UNITYSDK_OFFSET(0xCCE2CF0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_SENDTAKEACHIEVEMENTREWARDCSREQ_OFFSET UNITYSDK_OFFSET(0xCCE2AC0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_START_OFFSET UNITYSDK_OFFSET(0xCCE2A30)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_STOP_OFFSET UNITYSDK_OFFSET(0xCCE2A70)

namespace RPG::Client::Achievement
{
	inline static constexpr unsigned int AchievementNetworkService_TypeDefinitionIndex = 84986;

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

		::RPG::Client::Promises::IPromise_1<::MGAMADCNPAG*>* SendTakeAchievementRewardCsReq(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::MGAMADCNPAG*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_SENDTAKEACHIEVEMENTREWARDCSREQ_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::Achievement::AchievementTakeRewardResultViewModel*>* SendTakeAchievementRewardCsReqAndBuildResult(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::Achievement::AchievementTakeRewardResultViewModel*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE_SENDTAKEACHIEVEMENTREWARDCSREQANDBUILDRESULT_OFFSET))(this, a1);
		}

	};
}
