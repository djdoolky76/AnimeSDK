#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class IIFJAHONOGC;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SOFA_RUNTIME_TABHEADERTEXTCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC40880)
#define SOFA_RUNTIME_TABHEADERTEXTCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC408C0)
#define SOFA_RUNTIME_TABHEADERTEXTCONTROL___C___BINDING_B__2_0_OFFSET UNITYSDK_OFFSET(0x1AC408D0)
#define SOFA_RUNTIME_TABHEADERTEXTCONTROL___C___BINDING_B__2_1_OFFSET UNITYSDK_OFFSET(0x1AC409E0)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderTextControl___c_TypeDefinitionIndex = 50785;

	class TabHeaderTextControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::IIFJAHONOGC*, ::R3::Observable_1<::RPG::Client::TextID>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::IIFJAHONOGC*, ::R3::Observable_1<::RPG::Client::TextID>*>**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0x14340);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0x14348);
		}

		static ::System::Func_2<::IIFJAHONOGC*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::IIFJAHONOGC*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("Sofa.Runtime", "<>c")->GetStaticField(0x14350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL___C_CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::RPG::Client::TextID>* __Binding_b__2_0(::IIFJAHONOGC* a1)
		{
			return ((::R3::Observable_1<::RPG::Client::TextID>*(*)(::PVOID, ::IIFJAHONOGC*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL___C___BINDING_B__2_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__2_1(::IIFJAHONOGC* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::IIFJAHONOGC*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL___C___BINDING_B__2_1_OFFSET))(this, a1);
		}

	};
}
