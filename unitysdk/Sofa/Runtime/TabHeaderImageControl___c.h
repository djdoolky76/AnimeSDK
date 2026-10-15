#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDFGOEGFHMC;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SOFA_RUNTIME_TABHEADERIMAGECONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE97F400)
#define SOFA_RUNTIME_TABHEADERIMAGECONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE97F440)
#define SOFA_RUNTIME_TABHEADERIMAGECONTROL___C___BINDING_B__2_0_OFFSET UNITYSDK_OFFSET(0xE97F450)
#define SOFA_RUNTIME_TABHEADERIMAGECONTROL___C___BINDING_B__2_1_OFFSET UNITYSDK_OFFSET(0xE97F470)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderImageControl___c_TypeDefinitionIndex = 49731;

	class TabHeaderImageControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FDFGOEGFHMC*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::FDFGOEGFHMC*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0xD2A0);
		}

		static ::System::Func_2<::FDFGOEGFHMC*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::FDFGOEGFHMC*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0xD2A8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0xD2B0);
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
