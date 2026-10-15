#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Effect_FallingAnimator_ParticleData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EFFECT_FALLINGANIMATOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD21F50)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCD21F90)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR___C__INIT_B__44_0_OFFSET UNITYSDK_OFFSET(0xCD22090)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR___C__UPDATE_B__43_0_OFFSET UNITYSDK_OFFSET(0xCD21FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FallingAnimator___c_TypeDefinitionIndex = 70469;

	class Effect_FallingAnimator___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31690);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31698);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x316A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Update_b__43_0(::RPG::Client::Effect_FallingAnimator_ParticleData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Effect_FallingAnimator_ParticleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR___C__UPDATE_B__43_0_OFFSET))(this, a1);
		}

		::System::Int32 _Init_b__44_0(::RPG::Client::Effect_FallingAnimator_ParticleData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Effect_FallingAnimator_ParticleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR___C__INIT_B__44_0_OFFSET))(this, a1);
		}

	};
}
