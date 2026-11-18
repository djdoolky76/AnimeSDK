#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class CKENOHMEEGI;
class KOGPMKOGCLC;
namespace MoleMole { class UISuibianTempleBuddyWidgetController_MultiSelectContext; }
namespace System { class Object; }
template <typename T> class KLIOMMIOFDC_1;

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL_GET_MULTISELECTCONTEXT_OFFSET UNITYSDK_OFFSET(0x15C8AC00)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL_GET_SCENARIO_OFFSET UNITYSDK_OFFSET(0x15C8ABE0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL_GET_TEMPLEBUDDY_OFFSET UNITYSDK_OFFSET(0x15C8AC10)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15C8AC20)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL_SET_MULTISELECTCONTEXT_OFFSET UNITYSDK_OFFSET(0x15C88080)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL_SET_SCENARIO_OFFSET UNITYSDK_OFFSET(0x15C8ABF0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL_SET_TEMPLEBUDDY_OFFSET UNITYSDK_OFFSET(0x15C86440)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15C85D10)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyWidgetController_ViewModel_TypeDefinitionIndex = 52797;

	class UISuibianTempleBuddyWidgetController_ViewModel : public ::JJEJBPGJPJN
	{
	public:
		::CKENOHMEEGI* _templeBuddy; // 0x88
		::KLIOMMIOFDC_1<::System::Object*>* _Scenario_k__BackingField; // 0x90
		::MoleMole::UISuibianTempleBuddyWidgetController_MultiSelectContext* _multiSelectContext; // 0x98

		::System::Void _ctor(::KOGPMKOGCLC* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this, autoDisposePool);
		}

		::KLIOMMIOFDC_1<::System::Object*>* get_Scenario()
		{
			return ((::KLIOMMIOFDC_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL_GET_SCENARIO_OFFSET))(this);
		}

		::System::Void set_Scenario(::KLIOMMIOFDC_1<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::KLIOMMIOFDC_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL_SET_SCENARIO_OFFSET))(this, value);
		}

		::MoleMole::UISuibianTempleBuddyWidgetController_MultiSelectContext* get_MultiSelectContext()
		{
			return ((::MoleMole::UISuibianTempleBuddyWidgetController_MultiSelectContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL_GET_MULTISELECTCONTEXT_OFFSET))(this);
		}

		::System::Void set_MultiSelectContext(::MoleMole::UISuibianTempleBuddyWidgetController_MultiSelectContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISuibianTempleBuddyWidgetController_MultiSelectContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL_SET_MULTISELECTCONTEXT_OFFSET))(this, value);
		}

		::CKENOHMEEGI* get_TempleBuddy()
		{
			return ((::CKENOHMEEGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL_GET_TEMPLEBUDDY_OFFSET))(this);
		}

		::System::Void set_TempleBuddy(::CKENOHMEEGI* value)
		{
			return ((::System::Void(*)(::PVOID, ::CKENOHMEEGI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL_SET_TEMPLEBUDDY_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
