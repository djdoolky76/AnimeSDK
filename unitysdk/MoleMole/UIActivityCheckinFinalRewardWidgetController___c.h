#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F872E0)
#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F87320)
#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__ONUIINIT_B__3_0_OFFSET UNITYSDK_OFFSET(0x19F87330)
#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__SETDATAANDREFRESHVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x19F873A0)
#define MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__SETDATAANDREFRESHVIEW_B__7_1_OFFSET UNITYSDK_OFFSET(0x19F87410)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex = 92903;

	class UIActivityCheckinFinalRewardWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38BA0);
		}
		static ::System::Action** StaticGet___9__7_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38BA8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38BB0);
		}
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityCheckinFinalRewardWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38BB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__ONUIINIT_B__3_0_OFFSET))(this);
		}

		::System::Void _SetDataAndRefreshView_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__SETDATAANDREFRESHVIEW_B__7_0_OFFSET))(this);
		}

		::System::Void _SetDataAndRefreshView_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHECKINFINALREWARDWIDGETCONTROLLER___C__SETDATAANDREFRESHVIEW_B__7_1_OFFSET))(this);
		}
	};
}
