#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/UIZenkovWorkbenchDialogPageController_BenchDisplayData.h"

namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1286A130)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1286A170)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__GETBENCHLISTBYPAGE_B__77_0_OFFSET UNITYSDK_OFFSET(0x1286A620)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__INITINFOPANEL_B__78_2_OFFSET UNITYSDK_OFFSET(0x1286A660)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__ONCREATEVIEW_B__51_1_OFFSET UNITYSDK_OFFSET(0x1286A180)
#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__ONCREATEVIEW_B__51_6_OFFSET UNITYSDK_OFFSET(0x1286A3D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWorkbenchDialogPageController___c_TypeDefinitionIndex = 78534;

	class UIZenkovWorkbenchDialogPageController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__77_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWorkbenchDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AEA0);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__51_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWorkbenchDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AEA8);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__78_2()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWorkbenchDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AEB0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWorkbenchDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AEB8);
		}
		static ::System::Action** StaticGet___9__51_6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWorkbenchDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AEC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateView_b__51_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__ONCREATEVIEW_B__51_1_OFFSET))(this);
		}

		::System::Void _OnCreateView_b__51_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__ONCREATEVIEW_B__51_6_OFFSET))(this);
		}

		::System::Int32 _GetBenchListByPage_b__77_0(::MoleMole::UIZenkovWorkbenchDialogPageController_BenchDisplayData a, ::MoleMole::UIZenkovWorkbenchDialogPageController_BenchDisplayData b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIZenkovWorkbenchDialogPageController_BenchDisplayData, ::MoleMole::UIZenkovWorkbenchDialogPageController_BenchDisplayData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__GETBENCHLISTBYPAGE_B__77_0_OFFSET))(this, a, b);
		}

		::System::Void _InitInfoPanel_b__78_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER___C__INITINFOPANEL_B__78_2_OFFSET))(this);
		}
	};
}
