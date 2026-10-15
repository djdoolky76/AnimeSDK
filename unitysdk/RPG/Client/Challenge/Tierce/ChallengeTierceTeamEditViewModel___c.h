#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLCJBFLKOJD;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC96FEF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC96FF30)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__SUBMITCHANGE_B__28_1_OFFSET UNITYSDK_OFFSET(0xC9700A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__TRYSTARTCHALLENGE_B__27_1_OFFSET UNITYSDK_OFFSET(0xC970030)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C___EXPORTPLAN_B__26_0_OFFSET UNITYSDK_OFFSET(0xC96FF40)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTeamEditViewModel___c_TypeDefinitionIndex = 81632;

	class ChallengeTierceTeamEditViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::JLCJBFLKOJD*>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::JLCJBFLKOJD*>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6CAC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6CAC8);
		}

		static ::System::Func_1<::RPG::Client::Promises::IPromise*>** StaticGet___9__28_1()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6CAD0);
		}

		static ::System::Func_1<::RPG::Client::Promises::IPromise*>** StaticGet___9__27_1()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6CAD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::JLCJBFLKOJD* __ExportPlan_b__26_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::JLCJBFLKOJD*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C___EXPORTPLAN_B__26_0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _TryStartChallenge_b__27_1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__TRYSTARTCHALLENGE_B__27_1_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _SubmitChange_b__28_1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__SUBMITCHANGE_B__28_1_OFFSET))(this);
		}

	};
}
