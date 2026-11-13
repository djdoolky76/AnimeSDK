#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class CKCJOCJGHKC;
class ILDNJGBJGPF;
namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::Client::Challenge { class ChallengeTargetViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTargetsViewModel; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_CREATEFORENGAGEMENTMAZEORBATTLE_OFFSET UNITYSDK_OFFSET(0x1B6EBAF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_CREATEFORENGAGEMENTSETTLE_OFFSET UNITYSDK_OFFSET(0x1B6EC1D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_CREATEFOROUTOFENGAGEMENT_OFFSET UNITYSDK_OFFSET(0x1B6EB410)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6EC2B0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GETTARGETDATA_OFFSET UNITYSDK_OFFSET(0x1B6EB040)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B6EAEE0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GET_TARGETDATALIST_OFFSET UNITYSDK_OFFSET(0x1B6EAED0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0x1B6EB330)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_ISACHIEVED_OFFSET UNITYSDK_OFFSET(0x1B6EB1B0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__CREATE_1_OFFSET UNITYSDK_OFFSET(0x1B6EBBD0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__CREATE_OFFSET UNITYSDK_OFFSET(0x1B6EB4F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__DETERMINESTATEFORENGAGEMENTMAZEORBATTLE_OFFSET UNITYSDK_OFFSET(0x1B6EC3C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__DETERMINESTATEFORENGAGEMENTSETTLE_OFFSET UNITYSDK_OFFSET(0x1B6ED030)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__DETERMINESTATEFOROUTOFENGAGEMENT_OFFSET UNITYSDK_OFFSET(0x1B6EC2C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__GET_TARGETS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1B6ED280)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__ISLEFTROUNDSTARGETFAILEDINCURRENTSESSION_OFFSET UNITYSDK_OFFSET(0x1B6ECA30)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__ISMEMBERDEATHTARGETFAILEDINCURRENTSESSION_OFFSET UNITYSDK_OFFSET(0x1B6EC500)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL___ISLEFTROUNDSTARGETFAILEDINCURRENTSESSION_G__TRYGETCURRENTBATTLEUSEDROUNDCOUNT_21_0_OFFSET UNITYSDK_OFFSET(0x1B6ED220)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL___ISMEMBERDEATHTARGETFAILEDINCURRENTSESSION_G__TRYGETCURRENTBATTLEDEADMEMBERCOUNT_20_0_OFFSET UNITYSDK_OFFSET(0x1B6ED1C0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTargetsViewModel_TypeDefinitionIndex = 84362;

	class ChallengeTierceTargetsViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Challenge::ChallengeTargetViewModel*>* _Targets; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseChallengeTargetData*>* _TargetDataList_k__BackingField; // 0x18
		::CKCJOCJGHKC* _Tierce; // 0x20
		::System::Void _ctor(::CKCJOCJGHKC* a1, ::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CKCJOCJGHKC*, ::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseChallengeTargetData*>* get_TargetDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::BaseChallengeTargetData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GET_TARGETDATALIST_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GET_COUNT_OFFSET))(this);
		}

		::RPG::Client::BaseChallengeTargetData* GetTargetData(::System::Int32 a1)
		{
			return ((::RPG::Client::BaseChallengeTargetData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GETTARGETDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsAchieved(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_ISACHIEVED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::ChallengeTargetViewModel*>* get_Targets()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::ChallengeTargetViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_GET_TARGETS_OFFSET))(this);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* CreateForOutOfEngagement(::CKCJOCJGHKC* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::CKCJOCJGHKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_CREATEFOROUTOFENGAGEMENT_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* CreateForEngagementMazeOrBattle(::ILDNJGBJGPF* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_CREATEFORENGAGEMENTMAZEORBATTLE_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* CreateForEngagementSettle(::ILDNJGBJGPF* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL_CREATEFORENGAGEMENTSETTLE_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* _Create(::CKCJOCJGHKC* a1, ::System::Func_3<::CKCJOCJGHKC*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::CKCJOCJGHKC*, ::System::Func_3<::CKCJOCJGHKC*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* _Create_1(::ILDNJGBJGPF* a1, ::System::Func_3<::ILDNJGBJGPF*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::ILDNJGBJGPF*, ::System::Func_3<::ILDNJGBJGPF*, ::RPG::Client::BaseChallengeTargetData*, ::RPG::Client::ChallengeTargetState>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__CREATE_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ChallengeTargetState _DetermineStateForOutOfEngagement(::CKCJOCJGHKC* a1, ::RPG::Client::BaseChallengeTargetData* a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::CKCJOCJGHKC*, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__DETERMINESTATEFOROUTOFENGAGEMENT_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ChallengeTargetState _DetermineStateForEngagementMazeOrBattle(::ILDNJGBJGPF* a1, ::RPG::Client::BaseChallengeTargetData* a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::ILDNJGBJGPF*, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__DETERMINESTATEFORENGAGEMENTMAZEORBATTLE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ChallengeTargetState _DetermineStateForEngagementSettle(::ILDNJGBJGPF* a1, ::RPG::Client::BaseChallengeTargetData* a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::ILDNJGBJGPF*, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__DETERMINESTATEFORENGAGEMENTSETTLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsMemberDeathTargetFailedInCurrentSession(::ILDNJGBJGPF* a1, ::RPG::Client::BaseChallengeTargetData* a2)
		{
			return ((::System::Boolean(*)(::ILDNJGBJGPF*, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__ISMEMBERDEATHTARGETFAILEDINCURRENTSESSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsLeftRoundsTargetFailedInCurrentSession(::ILDNJGBJGPF* a1, ::RPG::Client::BaseChallengeTargetData* a2)
		{
			return ((::System::Boolean(*)(::ILDNJGBJGPF*, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__ISLEFTROUNDSTARGETFAILEDINCURRENTSESSION_OFFSET))(a1, a2);
		}

		::RPG::Client::Challenge::ChallengeTargetViewModel* _get_Targets_b__10_0(::RPG::Client::BaseChallengeTargetData* a1)
		{
			return ((::RPG::Client::Challenge::ChallengeTargetViewModel*(*)(::PVOID, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL__GET_TARGETS_B__10_0_OFFSET))(this, a1);
		}

		static ::System::Nullable_1<::System::Int32> __IsMemberDeathTargetFailedInCurrentSession_g__TryGetCurrentBattleDeadMemberCount_20_0()
		{
			return ((::System::Nullable_1<::System::Int32>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL___ISMEMBERDEATHTARGETFAILEDINCURRENTSESSION_G__TRYGETCURRENTBATTLEDEADMEMBERCOUNT_20_0_OFFSET))();
		}

		static ::System::Nullable_1<::System::Int32> __IsLeftRoundsTargetFailedInCurrentSession_g__TryGetCurrentBattleUsedRoundCount_21_0()
		{
			return ((::System::Nullable_1<::System::Int32>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETSVIEWMODEL___ISLEFTROUNDSTARGETFAILEDINCURRENTSESSION_G__TRYGETCURRENTBATTLEUSEDROUNDCOUNT_21_0_OFFSET))();
		}

	};
}
