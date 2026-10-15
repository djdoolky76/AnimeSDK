#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class HAEELHPFFGH;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE9779D0)
#define SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE977A10)
#define SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL___C___BINDING_B__5_0_OFFSET UNITYSDK_OFFSET(0xE977A20)
#define SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL___C___BINDING_B__5_1_OFFSET UNITYSDK_OFFSET(0xE977B30)
#define SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL___C___BINDING_B__5_2_OFFSET UNITYSDK_OFFSET(0xE977B50)
#define SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL___C___BINDING_B__5_3_OFFSET UNITYSDK_OFFSET(0xE977B70)
#define SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL___C___BINDING_B__5_4_OFFSET UNITYSDK_OFFSET(0xE977B90)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderTextWithStatusControl___c_TypeDefinitionIndex = 49739;

	class TabHeaderTextWithStatusControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::HAEELHPFFGH*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::HAEELHPFFGH*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0xD550);
		}

		static ::System::Func_2<::HAEELHPFFGH*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__5_3()
		{
			return (::System::Func_2<::HAEELHPFFGH*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0xD558);
		}

		static ::System::Func_2<::HAEELHPFFGH*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__5_4()
		{
			return (::System::Func_2<::HAEELHPFFGH*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0xD560);
		}

		static ::System::Func_2<::HAEELHPFFGH*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::HAEELHPFFGH*, ::R3::Observable_1<::RPG::Client::TextID>*>**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0xD568);
		}

		static ::System::Func_2<::HAEELHPFFGH*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::HAEELHPFFGH*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0xD570);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0xD578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL___C_CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __Binding_b__5_0(::HAEELHPFFGH* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::HAEELHPFFGH*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL___C___BINDING_B__5_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__5_1(::HAEELHPFFGH* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::HAEELHPFFGH*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL___C___BINDING_B__5_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__5_2(::HAEELHPFFGH* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::HAEELHPFFGH*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL___C___BINDING_B__5_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__5_3(::HAEELHPFFGH* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::HAEELHPFFGH*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL___C___BINDING_B__5_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__5_4(::HAEELHPFFGH* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::HAEELHPFFGH*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL___C___BINDING_B__5_4_OFFSET))(this, a1);
		}

	};
}
