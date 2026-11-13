#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDFGOEGFHMC;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SOFA_RUNTIME_TABHEADERIMAGECONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC3E980)
#define SOFA_RUNTIME_TABHEADERIMAGECONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC3E9C0)
#define SOFA_RUNTIME_TABHEADERIMAGECONTROL___C___BINDING_B__2_0_OFFSET UNITYSDK_OFFSET(0x1AC3E9D0)
#define SOFA_RUNTIME_TABHEADERIMAGECONTROL___C___BINDING_B__2_1_OFFSET UNITYSDK_OFFSET(0x1AC3E9F0)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderImageControl___c_TypeDefinitionIndex = 50779;

	class TabHeaderImageControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FDFGOEGFHMC*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::FDFGOEGFHMC*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0x13ED0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0x13ED8);
		}

		static ::System::Func_2<::FDFGOEGFHMC*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::FDFGOEGFHMC*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0x13EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGECONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGECONTROL___C_CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__2_0(::FDFGOEGFHMC* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::FDFGOEGFHMC*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGECONTROL___C___BINDING_B__2_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__2_1(::FDFGOEGFHMC* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::FDFGOEGFHMC*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGECONTROL___C___BINDING_B__2_1_OFFSET))(this, a1);
		}

	};
}
