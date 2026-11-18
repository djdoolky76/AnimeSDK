#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class JGNPCNEINID;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER_DOFIRSTSELECT_OFFSET UNITYSDK_OFFSET(0x15D63270)
#define MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x15D63140)
#define MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15D62E30)
#define MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15D631B0)
#define MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15D62ED0)
#define MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER_REFRESHSELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x15D63310)
#define MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D633B0)
#define MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15D63410)
#define MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x15D634B0)
#define MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15D63540)

namespace MoleMole
{
	inline static constexpr unsigned int UISkinSetInfoWidgetController_TypeDefinitionIndex = 85526;

	class UISkinSetInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void DoFirstSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER_DOFIRSTSELECT_OFFSET))(this);
		}

		::System::Void RefreshSelectedItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER_REFRESHSELECTEDITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::JGNPCNEINID* OGMPOGIHBIK()
		{
			return ((::JGNPCNEINID*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKINSETINFOWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
