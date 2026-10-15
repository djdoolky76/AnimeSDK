#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Effect_KaleidoscopeAnimatorBehavior_ParticleData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD414F0)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCD41530)
#define RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR___C___UPDATE_B__8_0_OFFSET UNITYSDK_OFFSET(0xCD41540)

namespace RPG::Client
{
	class Effect_KaleidoscopeAnimatorBehavior___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x39370);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x39378);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __Update_b__8_0(::RPG::Client::Effect_KaleidoscopeAnimatorBehavior_ParticleData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Effect_KaleidoscopeAnimatorBehavior_ParticleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_KALEIDOSCOPEANIMATORBEHAVIOR___C___UPDATE_B__8_0_OFFSET))(this, a1);
		}

	};
}
