#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class GPBCAEOBMOK;
class ODNBJIEICJH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_BINDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x17DAF2E0)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_BINDTOBASELEVEL_OFFSET UNITYSDK_OFFSET(0x17DAF350)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_BINDVIEWCALLBACK_OFFSET UNITYSDK_OFFSET(0x17DAFD60)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x17DAED40)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_OGJJLGCDEII_OFFSET UNITYSDK_OFFSET(0x17DB02A0)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17DAF1D0)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DAF260)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17DAEDE0)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17DAF160)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_REFRESHLEVEL_OFFSET UNITYSDK_OFFSET(0x17DAF600)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAFE20)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x17DAFFD0)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17DB0060)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DB00F0)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17DB0180)
#define MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17DB0210)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianLevelWidgetController_TypeDefinitionIndex = 47669;

	class UISuibianLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::GPBCAEOBMOK* _view; // 0x2C8
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* AJEDFBPPMNM; // 0x2D0
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* FKDMBPECLJL; // 0x2D8
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* MKKKKINIEKK; // 0x2E0
		::ODNBJIEICJH* KDEBCMGNCNH; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindNotification(::Share::ENotificationBadgeType type)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_BINDNOTIFICATION_OFFSET))(this, type);
		}

		::System::Void BindToBaseLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_BINDTOBASELEVEL_OFFSET))(this);
		}

		::System::Void RefreshLevel(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_REFRESHLEVEL_OFFSET))(this, level);
		}

		::System::Void BindViewCallback(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_BINDVIEWCALLBACK_OFFSET))(this, callback);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void OGJJLGCDEII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANLEVELWIDGETCONTROLLER_OGJJLGCDEII_OFFSET))(this);
		}
	};
}
