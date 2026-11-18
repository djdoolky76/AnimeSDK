#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class GMCPAFDJNLH;
class IPLCGHDLPJH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMaincityMiniGameChildWindowController; }
namespace MoleMole { class UIMiniUIGameContext; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_CREATEORREFRESHWINDOW_OFFSET UNITYSDK_OFFSET(0x18EABA30)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_CREATEWINDOW_OFFSET UNITYSDK_OFFSET(0x18EABC50)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_GET_CONTENTROOT_OFFSET UNITYSDK_OFFSET(0x18EABA00)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_GET_INNERWINDOW_OFFSET UNITYSDK_OFFSET(0x18EABA20)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18EAB9F0)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_GOENNKEBAKH_OFFSET UNITYSDK_OFFSET(0x18EAC180)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EABD10)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18EABDA0)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EABF10)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x18EABF80)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAC020)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EAC030)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18EAC0C0)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EAC0D0)
#define MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x18EAC0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniUIGamePageController_TypeDefinitionIndex = 44212;

	class UIMiniUIGamePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::IPLCGHDLPJH* _view; // 0x330
		::MoleMole::UIMaincityMiniGameChildWindowController* _ACDNHCALJKO_k__BackingField; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ContentRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_GET_CONTENTROOT_OFFSET))(this);
		}

		::MoleMole::UIMaincityMiniGameChildWindowController* get_InnerWindow()
		{
			return ((::MoleMole::UIMaincityMiniGameChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_GET_INNERWINDOW_OFFSET))(this);
		}

		::MoleMole::UIMaincityMiniGameChildWindowController* CreateOrRefreshWindow(::MoleMole::UIMiniUIGameContext* ctx, ::GMCPAFDJNLH* openParams)
		{
			return ((::MoleMole::UIMaincityMiniGameChildWindowController*(*)(::PVOID, ::MoleMole::UIMiniUIGameContext*, ::GMCPAFDJNLH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_CREATEORREFRESHWINDOW_OFFSET))(this, ctx, openParams);
		}

		::MoleMole::UIMaincityMiniGameChildWindowController* CreateWindow(::MoleMole::UIMiniUIGameContext* ctx, ::GMCPAFDJNLH* openParams)
		{
			return ((::MoleMole::UIMaincityMiniGameChildWindowController*(*)(::PVOID, ::MoleMole::UIMiniUIGameContext*, ::GMCPAFDJNLH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_CREATEWINDOW_OFFSET))(this, ctx, openParams);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void GOENNKEBAKH(::MoleMole::UIMaincityMiniGameChildWindowController* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMaincityMiniGameChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMEPAGECONTROLLER_GOENNKEBAKH_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
