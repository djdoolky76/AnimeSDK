#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class ILDNJGBJGPF;
class OBJANKHLNGO;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client::Challenge { class IChallengeEnvironmentHintViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeProgressHintViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeViewModel_EnvironmentHintMessage; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeViewModel_ProgressHintMessage; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTargetsViewModel; }
namespace System { class Action; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_ADD_ONHINTENVIRONMENT_OFFSET UNITYSDK_OFFSET(0xC949930)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_ADD_ONHINTPROGRESS_OFFSET UNITYSDK_OFFSET(0xC949870)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC949B70)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC949C60)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GETENVIRONMENTHINT_OFFSET UNITYSDK_OFFSET(0xC949EF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GETLEAVECONFIRMTITLE_OFFSET UNITYSDK_OFFSET(0xC949CC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0xC949AB0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_ISPASSED_OFFSET UNITYSDK_OFFSET(0xC9494D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_JUSTFINISHEDTARGETIDS_OFFSET UNITYSDK_OFFSET(0xC949B00)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC9499F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_RECORD_OFFSET UNITYSDK_OFFSET(0xC949760)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0xC949860)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_LEAVE_OFFSET UNITYSDK_OFFSET(0xC949EA0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_REMOVE_ONHINTENVIRONMENT_OFFSET UNITYSDK_OFFSET(0xC949990)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_REMOVE_ONHINTPROGRESS_OFFSET UNITYSDK_OFFSET(0xC9498D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_TRYGETSTORYCONFIGCLEARSCORE_OFFSET UNITYSDK_OFFSET(0xC949DC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL__ONENVIRONMENTHINTMESSAGE_OFFSET UNITYSDK_OFFSET(0xC949F40)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL__ONPROGRESSHINTMESSAGE_OFFSET UNITYSDK_OFFSET(0xC949FF0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceMazeViewModel_TypeDefinitionIndex = 81591;

	class ChallengeTierceMazeViewModel : public ::System::Object
	{
	public:
		::System::Action* OnHintProgress; // 0x10
		::System::Action* OnHintEnvironment; // 0x18
		::OBJANKHLNGO* _Messenger; // 0x20
		::ILDNJGBJGPF* _Engagement; // 0x28
		::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* _Targets_k__BackingField; // 0x30
		::RPG::Client::ChallengeData* _Challenge; // 0x38
		::System::Void _ctor(::RPG::Client::ChallengeData* a1, ::ILDNJGBJGPF* a2, ::OBJANKHLNGO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*, ::ILDNJGBJGPF*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_ISPASSED_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* get_Targets()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_TARGETS_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* get_Record()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_RECORD_OFFSET))(this);
		}

		::System::Void add_OnHintProgress(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_ADD_ONHINTPROGRESS_OFFSET))(this, a1);
		}

		::System::Void remove_OnHintProgress(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_REMOVE_ONHINTPROGRESS_OFFSET))(this, a1);
		}

		::System::Void add_OnHintEnvironment(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_ADD_ONHINTENVIRONMENT_OFFSET))(this, a1);
		}

		::System::Void remove_OnHintEnvironment(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_REMOVE_ONHINTENVIRONMENT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_JustFinishedTargetIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GET_JUSTFINISHEDTARGETIDS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::TextID GetLeaveConfirmTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GETLEAVECONFIRMTITLE_OFFSET))(this);
		}

		::System::Nullable* TryGetStoryConfigClearScore()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_TRYGETSTORYCONFIGCLEARSCORE_OFFSET))(this);
		}

		::System::Void Leave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_LEAVE_OFFSET))(this);
		}

		::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel* GetEnvironmentHint()
		{
			return ((::RPG::Client::Challenge::IChallengeEnvironmentHintViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_GETENVIRONMENTHINT_OFFSET))(this);
		}

		::System::Void _OnEnvironmentHintMessage(::System::Object* a1, ::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel_EnvironmentHintMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel_EnvironmentHintMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL__ONENVIRONMENTHINTMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnProgressHintMessage(::System::Object* a1, ::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel_ProgressHintMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel_ProgressHintMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL__ONPROGRESSHINTMESSAGE_OFFSET))(this, a1, a2);
		}

	};
}
