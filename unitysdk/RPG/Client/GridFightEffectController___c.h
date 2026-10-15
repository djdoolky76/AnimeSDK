#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD0F9F00)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD0F9F40)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__16_0_OFFSET UNITYSDK_OFFSET(0xD0F9F50)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__16_1_OFFSET UNITYSDK_OFFSET(0xD0F9F60)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__16_2_OFFSET UNITYSDK_OFFSET(0xD0F9F70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c_TypeDefinitionIndex = 64475;

	class GridFightEffectController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68960);
		}

		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68968);
		}

		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__16_2()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68970);
		}

		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68978);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C_CTOR_OFFSET))(this);
		}

		::System::Single _PlayFlyEffect_b__16_0(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__16_0_OFFSET))(this, a1);
		}

		::System::Single _PlayFlyEffect_b__16_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__16_1_OFFSET))(this, a1);
		}

		::System::Single _PlayFlyEffect_b__16_2(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__16_2_OFFSET))(this, a1);
		}

	};
}
