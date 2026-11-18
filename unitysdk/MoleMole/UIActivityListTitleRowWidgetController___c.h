#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIACTIVITYLISTTITLEROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A122B20)
#define MOLEMOLE_UIACTIVITYLISTTITLEROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A122B60)
#define MOLEMOLE_UIACTIVITYLISTTITLEROWWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__4_0_OFFSET UNITYSDK_OFFSET(0x1A122B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityListTitleRowWidgetController___c_TypeDefinitionIndex = 80025;

	class UIActivityListTitleRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityListTitleRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3BFF0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIActivityListTitleRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3BFF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLISTTITLEROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLISTTITLEROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__4_0(::UnityEngine::UI::Extension::UITimeWidget* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLISTTITLEROWWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__4_0_OFFSET))(this, t);
		}
	};
}
