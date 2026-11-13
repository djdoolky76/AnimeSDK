#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5B52C0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B5300)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__34_0_OFFSET UNITYSDK_OFFSET(0x1D5B5310)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__34_1_OFFSET UNITYSDK_OFFSET(0x1D5B5320)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__34_2_OFFSET UNITYSDK_OFFSET(0x1D5B5330)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c_TypeDefinitionIndex = 65966;

	class GridFightEffectController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__34_2()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x706E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x706E8);
		}

		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x706F0);
		}

		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__34_1()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x706F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C_CTOR_OFFSET))(this);
		}

		::System::Single _PlayFlyEffect_b__34_0(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__34_0_OFFSET))(this, a1);
		}

		::System::Single _PlayFlyEffect_b__34_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__34_1_OFFSET))(this, a1);
		}

		::System::Single _PlayFlyEffect_b__34_2(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__34_2_OFFSET))(this, a1);
		}

	};
}
