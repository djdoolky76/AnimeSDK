#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

class PPLHAJHEHKE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_DOWIDGETHIDE_OFFSET UNITYSDK_OFFSET(0x17056710)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x17056520)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17056410)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x170564A0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17056340)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x170563A0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_PLAYBUBBLEANIMATION_OFFSET UNITYSDK_OFFSET(0x17056570)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_PLAYRIGHTSTATEANIMATION_OFFSET UNITYSDK_OFFSET(0x17056600)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170567F0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17056850)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x170568E0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17056970)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17056A00)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPlayBubble04WidgetController_TypeDefinitionIndex = 77271;

	class UICinemaPlayBubble04WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::PPLHAJHEHKE* _view; // 0x2C8
		::System::Threading::CancellationTokenSource* animTokenSource; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::PPLHAJHEHKE* GetView()
		{
			return ((::PPLHAJHEHKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid PlayBubbleAnimation(::System::String* animString, ::System::Boolean isHide)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_PLAYBUBBLEANIMATION_OFFSET))(this, animString, isHide);
		}

		::System::Void PlayRightStateAnimation(::System::Boolean isRight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_PLAYRIGHTSTATEANIMATION_OFFSET))(this, isRight);
		}

		::System::Void DoWidgetHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER_DOWIDGETHIDE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
