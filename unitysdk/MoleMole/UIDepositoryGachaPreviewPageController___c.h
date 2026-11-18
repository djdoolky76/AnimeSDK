#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOIDMLPJGML;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17578130)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17578170)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__INITVIEW_B__33_3_OFFSET UNITYSDK_OFFSET(0x175781C0)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__ONUIINIT_B__19_0_OFFSET UNITYSDK_OFFSET(0x17578180)

namespace MoleMole
{
	inline static constexpr unsigned int UIDepositoryGachaPreviewPageController___c_TypeDefinitionIndex = 42062;

	class UIDepositoryGachaPreviewPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__33_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIDepositoryGachaPreviewPageController___c_TypeDefinitionIndex)->GetStaticField(0x46F30);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIDepositoryGachaPreviewPageController___c_TypeDefinitionIndex)->GetStaticField(0x46F38);
		}
		static ::System::Func_2<::KOIDMLPJGML*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::KOIDMLPJGML*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIDepositoryGachaPreviewPageController___c_TypeDefinitionIndex)->GetStaticField(0x46F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__19_0(::KOIDMLPJGML* viewData)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOIDMLPJGML*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__ONUIINIT_B__19_0_OFFSET))(this, viewData);
		}

		::System::Void _InitView_b__33_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___C__INITVIEW_B__33_3_OFFSET))(this);
		}
	};
}
