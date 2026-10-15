#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC96E3D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC96E410)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL___C__ITERATEMODIFIEDAVATARROLEIDS_B__21_0_OFFSET UNITYSDK_OFFSET(0xC96E420)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL___C__ITERATEMODIFIEDAVATARS_B__22_0_OFFSET UNITYSDK_OFFSET(0xC96E490)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTeamEditTeamViewModel___c_TypeDefinitionIndex = 81629;

	class ChallengeTierceTeamEditTeamViewModel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6CAA0);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6CAA8);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6CAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _IterateModifiedAvatarRoleIDs_b__21_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL___C__ITERATEMODIFIEDAVATARROLEIDS_B__21_0_OFFSET))(this, a1);
		}

		::System::Boolean _IterateModifiedAvatars_b__22_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL___C__ITERATEMODIFIEDAVATARS_B__22_0_OFFSET))(this, a1);
		}

	};
}
