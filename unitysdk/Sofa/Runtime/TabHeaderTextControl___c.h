#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class IIFJAHONOGC;
namespace R3 { class Observable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SOFA_RUNTIME_TABHEADERTEXTCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE981300)
#define SOFA_RUNTIME_TABHEADERTEXTCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE981340)
#define SOFA_RUNTIME_TABHEADERTEXTCONTROL___C___BINDING_B__2_0_OFFSET UNITYSDK_OFFSET(0xE981350)
#define SOFA_RUNTIME_TABHEADERTEXTCONTROL___C___BINDING_B__2_1_OFFSET UNITYSDK_OFFSET(0xE981460)

namespace Sofa::Runtime
{
	class TabHeaderTextControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::IIFJAHONOGC*, ::R3::Observable*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::IIFJAHONOGC*, ::R3::Observable*>**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0xD540);
		}

		static ::System::Func_2<::IIFJAHONOGC*, ::R3::Observable*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::IIFJAHONOGC*, ::R3::Observable*>**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0xD548);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0xD550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL___C_CTOR_OFFSET))(this);
		}

		::R3::Observable* __Binding_b__2_0(::IIFJAHONOGC* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::IIFJAHONOGC*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL___C___BINDING_B__2_0_OFFSET))(this, a1);
		}

		::R3::Observable* __Binding_b__2_1(::IIFJAHONOGC* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::IIFJAHONOGC*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL___C___BINDING_B__2_1_OFFSET))(this, a1);
		}

	};
}
