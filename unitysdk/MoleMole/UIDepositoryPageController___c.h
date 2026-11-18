#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOIDMLPJGML;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FB7080)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB70C0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__INITVIEW_B__67_3_OFFSET UNITYSDK_OFFSET(0x19FB7110)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__ONUIINIT_B__42_0_OFFSET UNITYSDK_OFFSET(0x19FB70D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDepositoryPageController___c_TypeDefinitionIndex = 63586;

	class UIDepositoryPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIDepositoryPageController___c_TypeDefinitionIndex)->GetStaticField(0x38CD0);
		}
		static ::System::Action** StaticGet___9__67_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIDepositoryPageController___c_TypeDefinitionIndex)->GetStaticField(0x38CD8);
		}
		static ::System::Func_2<::KOIDMLPJGML*, ::System::Boolean>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::KOIDMLPJGML*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIDepositoryPageController___c_TypeDefinitionIndex)->GetStaticField(0x38CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__42_0(::KOIDMLPJGML* viewData)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOIDMLPJGML*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__ONUIINIT_B__42_0_OFFSET))(this, viewData);
		}

		::System::Void _InitView_b__67_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___C__INITVIEW_B__67_3_OFFSET))(this);
		}
	};
}
