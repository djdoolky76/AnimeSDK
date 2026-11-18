#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0C9670)
#define MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C96B0)
#define MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__REFRESHPROGRESSPOINTVIEW_B__13_0_OFFSET UNITYSDK_OFFSET(0x1A0C96C0)
#define MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__REFRESHPROGRESSPOINTVIEW_B__13_2_OFFSET UNITYSDK_OFFSET(0x1A0C9730)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBigCatProgressBarWidgetController___c_TypeDefinitionIndex = 62432;

	class UIActivityBigCatProgressBarWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityBigCatProgressBarWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C260);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityBigCatProgressBarWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C268);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityBigCatProgressBarWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4C270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshProgressPointView_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__REFRESHPROGRESSPOINTVIEW_B__13_0_OFFSET))(this);
		}

		::System::Void _RefreshProgressPointView_b__13_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBIGCATPROGRESSBARWIDGETCONTROLLER___C__REFRESHPROGRESSPOINTVIEW_B__13_2_OFFSET))(this);
		}
	};
}
