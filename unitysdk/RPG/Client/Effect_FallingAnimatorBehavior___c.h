#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Effect_FallingAnimatorBehavior_ParticleData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x17BE2C50)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0x17BE2C90)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR___C__INITDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0x17BE2D90)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR___C__TICK_B__5_0_OFFSET UNITYSDK_OFFSET(0x17BE2CA0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR___C__TRYFILLJOBDATA_B__8_0_OFFSET UNITYSDK_OFFSET(0x17BE2DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FallingAnimatorBehavior___c_TypeDefinitionIndex = 72443;

	class Effect_FallingAnimatorBehavior___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3E340);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3E348);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3E350);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3E358);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Tick_b__5_0(::RPG::Client::Effect_FallingAnimatorBehavior_ParticleData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Effect_FallingAnimatorBehavior_ParticleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR___C__TICK_B__5_0_OFFSET))(this, a1);
		}

		::System::Int32 _InitData_b__6_0(::RPG::Client::Effect_FallingAnimatorBehavior_ParticleData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Effect_FallingAnimatorBehavior_ParticleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR___C__INITDATA_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _TryFillJobData_b__8_0(::RPG::Client::Effect_FallingAnimatorBehavior_ParticleData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Effect_FallingAnimatorBehavior_ParticleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATORBEHAVIOR___C__TRYFILLJOBDATA_B__8_0_OFFSET))(this, a1);
		}

	};
}
