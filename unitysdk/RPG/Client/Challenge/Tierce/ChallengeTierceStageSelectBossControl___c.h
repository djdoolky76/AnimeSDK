#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeListControl_IHPLNNCOIMK; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC959AC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC959B00)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL___C__SET_PRIVATESTAGERECOMMENDDAMAGETYPES_B__49_1_OFFSET UNITYSDK_OFFSET(0xC959B10)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL___C___ONBINDVIEWMODEL_B__59_15_OFFSET UNITYSDK_OFFSET(0xC959C80)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectBossControl___c_TypeDefinitionIndex = 81548;

	class ChallengeTierceStageSelectBossControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl_IHPLNNCOIMK** StaticGet___9__49_1()
		{
			return (::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl_IHPLNNCOIMK**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6C4A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6C4A8);
		}

		static ::System::Func_2<::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*, ::System::Int32>** StaticGet___9__59_15()
		{
			return (::System::Func_2<::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*, ::System::Int32>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6C4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL___C_CTOR_OFFSET))(this);
		}

		::System::Action* _set_PrivateStageRecommendDamageTypes_b__49_1(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL___C__SET_PRIVATESTAGERECOMMENDDAMAGETYPES_B__49_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __OnBindViewModel_b__59_15(::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTBOSSCONTROL___C___ONBINDVIEWMODEL_B__59_15_OFFSET))(this, a1);
		}

	};
}
