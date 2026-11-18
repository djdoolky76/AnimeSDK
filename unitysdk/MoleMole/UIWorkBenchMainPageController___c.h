#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWorkbenchMainPageSmallBtnWidgetController_Context; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B2FAE0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B2FB20)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___C__INITAPPICONSDATA_B__25_0_OFFSET UNITYSDK_OFFSET(0x13B2FB30)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchMainPageController___c_TypeDefinitionIndex = 85393;

	class UIWorkBenchMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4EC70);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__25_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x4EC78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitAppIconsData_b__25_0(::MoleMole::UIWorkbenchMainPageSmallBtnWidgetController_Context* a, ::MoleMole::UIWorkbenchMainPageSmallBtnWidgetController_Context* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIWorkbenchMainPageSmallBtnWidgetController_Context*, ::MoleMole::UIWorkbenchMainPageSmallBtnWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___C__INITAPPICONSDATA_B__25_0_OFFSET))(this, a, b);
		}
	};
}
