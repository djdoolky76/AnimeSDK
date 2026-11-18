#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class IKKLFPMBGLB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x120A0E60)
#define MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x120A0A90)
#define MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x120A0BC0)
#define MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x120A09C0)
#define MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x120A0A20)
#define MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x120A0C40)
#define MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x120A0DF0)
#define MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x120A0EF0)
#define MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x120A0F50)
#define MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x120A0FE0)
#define MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x120A1070)
#define MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x120A1100)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSkillLvTabBtnWidgetController_TypeDefinitionIndex = 74213;

	class UIZenkovSkillLvTabBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::IKKLFPMBGLB* _view; // 0x2C8
		::System::Int32 MLNKCNJEOMI; // 0x2D0
		::System::Byte _padding0[0x4];
		::System::Action_1<::System::Int32>* PLGLKDMLBLE; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetData(::System::String* name, ::System::Int32 index, ::System::Action_1<::System::Int32>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER_SETDATA_OFFSET))(this, name, index, callback);
		}

		::System::Void SetSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER_SETSELECTED_OFFSET))(this, selected);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER_ONCLICK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSKILLLVTABBTNWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
