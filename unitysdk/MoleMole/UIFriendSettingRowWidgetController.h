#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/NMBDEDMFEPN.h"

class AINILIOMAPH;
class MKFNBHDICNJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace System { class Object; }

#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_AEBMEEPOCHE_OFFSET UNITYSDK_OFFSET(0x184C4820)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_OFGFGPOAHIL_OFFSET UNITYSDK_OFFSET(0x184C4940)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184C4230)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x184C4340)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184C42C0)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184C40D0)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x184C45C0)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184C45D0)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x184C4660)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184C4700)
#define MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184C4790)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSettingRowWidgetController_TypeDefinitionIndex = 41722;

	class UIFriendSettingRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::AINILIOMAPH* _view; // 0x2F8
		::MKFNBHDICNJ* OPOLMJLMHCD; // 0x300
		::MoleMole::UIGeneralToggleWidgetController* EOPOIBOELCJ; // 0x308
		::NMBDEDMFEPN KNLHNJJGLBA; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void AEBMEEPOCHE(::System::Boolean CMBKOECNKKG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_AEBMEEPOCHE_OFFSET))(this, CMBKOECNKKG);
		}

		::System::Void OFGFGPOAHIL(::System::Boolean CMBKOECNKKG, ::System::Boolean IAOJECCOMPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSETTINGROWWIDGETCONTROLLER_OFGFGPOAHIL_OFFSET))(this, CMBKOECNKKG, IAOJECCOMPN);
		}
	};
}
