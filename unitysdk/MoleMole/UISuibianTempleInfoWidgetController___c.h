#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UISUIBIANTEMPLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x167D92B0)
#define MOLEMOLE_UISUIBIANTEMPLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x167D92F0)
#define MOLEMOLE_UISUIBIANTEMPLEINFOWIDGETCONTROLLER___C__GOINGEXPEDITION_B__38_0_OFFSET UNITYSDK_OFFSET(0x167D9370)
#define MOLEMOLE_UISUIBIANTEMPLEINFOWIDGETCONTROLLER___C__GOINGEXPEDITION_B__38_2_OFFSET UNITYSDK_OFFSET(0x167D9380)
#define MOLEMOLE_UISUIBIANTEMPLEINFOWIDGETCONTROLLER___C__UPDATETIME_B__32_0_OFFSET UNITYSDK_OFFSET(0x167D9300)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleInfoWidgetController___c_TypeDefinitionIndex = 45640;

	class UISuibianTempleInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__38_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45350);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45358);
		}
		static ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>** StaticGet___9__32_0()
		{
			return (::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45360);
		}
		static ::System::Action** StaticGet___9__38_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45368);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateTime_b__32_0(::UnityEngine::UI::Extension::UITimeWidget* widget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEINFOWIDGETCONTROLLER___C__UPDATETIME_B__32_0_OFFSET))(this, widget);
		}

		::System::Void _GoingExpedition_b__38_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEINFOWIDGETCONTROLLER___C__GOINGEXPEDITION_B__38_0_OFFSET))(this);
		}

		::System::Void _GoingExpedition_b__38_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEINFOWIDGETCONTROLLER___C__GOINGEXPEDITION_B__38_2_OFFSET))(this);
		}
	};
}
