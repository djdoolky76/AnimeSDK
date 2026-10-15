#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeListControl_IHPLNNCOIMK; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC958770)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC9587B0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C__SET_PRIVATESTAGERECOMMENDDAMAGETYPES_B__55_1_OFFSET UNITYSDK_OFFSET(0xC9587C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C___ONBINDVIEWMODEL_B__65_13_OFFSET UNITYSDK_OFFSET(0xC958930)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectStoryControl___c_TypeDefinitionIndex = 81554;

	class ChallengeTierceStageSelectStoryControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6A500);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl_IHPLNNCOIMK** StaticGet___9__55_1()
		{
			return (::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl_IHPLNNCOIMK**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6A508);
		}

		static ::System::Func_2<::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*, ::System::Int32>** StaticGet___9__65_13()
		{
			return (::System::Func_2<::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*, ::System::Int32>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6A510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C_CTOR_OFFSET))(this);
		}

		::System::Action* _set_PrivateStageRecommendDamageTypes_b__55_1(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C__SET_PRIVATESTAGERECOMMENDDAMAGETYPES_B__55_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __OnBindViewModel_b__65_13(::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C___ONBINDVIEWMODEL_B__65_13_OFFSET))(this, a1);
		}

	};
}
