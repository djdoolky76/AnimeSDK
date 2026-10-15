#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9597A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC9597E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL___C___ONBINDVIEWMODEL_B__12_5_OFFSET UNITYSDK_OFFSET(0xC9597F0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectTabControl___c_TypeDefinitionIndex = 81556;

	class ChallengeTierceStageSelectTabControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6A5E0);
		}

		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__12_5()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("RPG.Client.Challenge.Tierce", "<>c")->GetStaticField(0x6A5E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL___C_CTOR_OFFSET))(this);
		}

		::System::String* __OnBindViewModel_b__12_5(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL___C___ONBINDVIEWMODEL_B__12_5_OFFSET))(this, a1);
		}

	};
}
