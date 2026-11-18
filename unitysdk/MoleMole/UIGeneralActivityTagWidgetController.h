#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNGGIKMNJEC.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class FJMNEIDAPLL;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralActivityTagContext; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x17596820)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONCLICKTAGDETAIL_OFFSET UNITYSDK_OFFSET(0x17596870)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17596160)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17596270)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175961F0)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17596090)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x175960F0)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETACTIVITYTAG_OFFSET UNITYSDK_OFFSET(0x17596760)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETCONSOLEREGIONACTIVE_OFFSET UNITYSDK_OFFSET(0x175968E0)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETTAGICON_OFFSET UNITYSDK_OFFSET(0x17596580)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17596970)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175969D0)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17596A60)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17596B00)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17596B90)
#define MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17596C20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralActivityTagWidgetController_TypeDefinitionIndex = 39424;

	class UIGeneralActivityTagWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::FJMNEIDAPLL* _view; // 0x2C8
		::MoleMole::UIGeneralActivityTagContext* context; // 0x2D0
		::System::Int32 tagRuleID; // 0x2D8
		::System::Boolean isExist; // 0x2DC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::FJMNEIDAPLL* GetView()
		{
			return ((::FJMNEIDAPLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void OnClickTagDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_ONCLICKTAGDETAIL_OFFSET))(this);
		}

		::System::Void SetConsoleRegionActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETCONSOLEREGIONACTIVE_OFFSET))(this, isActive);
		}

		::System::Void SetTagIcon(::DNGGIKMNJEC tagIcon)
		{
			return ((::System::Void(*)(::PVOID, ::DNGGIKMNJEC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETTAGICON_OFFSET))(this, tagIcon);
		}

		::System::Void SetActivityTag(::System::String* stringTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER_SETACTIVITYTAG_OFFSET))(this, stringTag);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACTIVITYTAGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
