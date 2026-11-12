#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD724290)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD7242C0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_0_OFFSET UNITYSDK_OFFSET(0xD7242D0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_1_OFFSET UNITYSDK_OFFSET(0xD7242E0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_2_OFFSET UNITYSDK_OFFSET(0xD7242F0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_3_OFFSET UNITYSDK_OFFSET(0xD724300)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_4_OFFSET UNITYSDK_OFFSET(0xD724310)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_5_OFFSET UNITYSDK_OFFSET(0xD724320)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PathDeformBehavior___c_TypeDefinitionIndex = 72503;

	class Effect_PathDeformBehavior___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_3()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x39670);
		}

		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x39678);
		}

		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_5()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x39680);
		}

		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x39688);
		}

		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_4()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x39690);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x39698);
		}

		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__9_2()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x396A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C_CTOR_OFFSET))(this);
		}

		::System::Single __GetRenderBound_b__9_0(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_0_OFFSET))(this, a1);
		}

		::System::Single __GetRenderBound_b__9_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_1_OFFSET))(this, a1);
		}

		::System::Single __GetRenderBound_b__9_2(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_2_OFFSET))(this, a1);
		}

		::System::Single __GetRenderBound_b__9_3(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_3_OFFSET))(this, a1);
		}

		::System::Single __GetRenderBound_b__9_4(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_4_OFFSET))(this, a1);
		}

		::System::Single __GetRenderBound_b__9_5(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR___C___GETRENDERBOUND_B__9_5_OFFSET))(this, a1);
		}

	};
}
