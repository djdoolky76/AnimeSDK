#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIACTIVITYLISTDIALOGPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A75EAA0)
#define MOLEMOLE_UIACTIVITYLISTDIALOGPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75EAE0)
#define MOLEMOLE_UIACTIVITYLISTDIALOGPAGECONTROLLER___C__SHOWTAB_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A75EAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityListDialogPageController___c_TypeDefinitionIndex = 42945;

	class UIActivityListDialogPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityListDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x34F80);
		}
		static ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>** StaticGet___9__1_0()
		{
			return (::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityListDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x34F88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLISTDIALOGPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLISTDIALOGPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTab_b__1_0(::UnityEngine::UI::Extension::UITimeWidget* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLISTDIALOGPAGECONTROLLER___C__SHOWTAB_B__1_0_OFFSET))(this, t);
		}
	};
}
