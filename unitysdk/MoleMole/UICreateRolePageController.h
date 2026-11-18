#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/GBJMDNJNIBO.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class DGDNKBFMHME;
class HIDPAPFBACC;
class JIDBGNHFLOL;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVideoWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_AONFJMNDCAE_OFFSET UNITYSDK_OFFSET(0x18919C20)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x18918F50)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_DKHGHJGGADM_OFFSET UNITYSDK_OFFSET(0x18919230)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ENELOKENKMP_OFFSET UNITYSDK_OFFSET(0x18919C90)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_FENJLIJOPHB_OFFSET UNITYSDK_OFFSET(0x18918C50)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x18918640)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x189186E0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18918630)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_JHLKKLIFDGB_OFFSET UNITYSDK_OFFSET(0x18919900)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_KDJEEAKJPGJ_OFFSET UNITYSDK_OFFSET(0x18919970)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18918650)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x189187D0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18919490)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18918D10)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x189186F0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_OPENINPUTNAMEVIEW_OFFSET UNITYSDK_OFFSET(0x189195A0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_PLAYSPLITVIDEO_OFFSET UNITYSDK_OFFSET(0x18918A80)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_RESETCLICKSTATE_OFFSET UNITYSDK_OFFSET(0x18919690)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x18918CC0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18919700)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189197B0)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18919840)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18919850)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18919860)
#define MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18919870)

namespace MoleMole
{
	inline static constexpr unsigned int UICreateRolePageController_TypeDefinitionIndex = 48843;

	class UICreateRolePageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* MFKHBENADIL; // 0x0
		// static const ::System::String* LPKHDJCILEG; // 0x0
		// static const ::System::String* FGGOOLHGPBB; // 0x0
		// static const ::System::Int32 FOPDAJCACFL = 0x2; // 0x0
		::JIDBGNHFLOL* _view; // 0x320
		::System::Collections::Generic::List_1<::System::Object*>* PPDBEALANGE; // 0x328
		::System::Boolean MOJFCKJONDA; // 0x330
		::System::Byte _padding0[0x7];
		::System::String* EIDNKPDFDFM; // 0x338
		::System::Int32 JBEHAGLFOBK; // 0x340
		::System::Byte _padding1[0x4];
		::MoleMole::UIVideoWidgetController* EFBHBCKBGAN; // 0x348
		::System::Boolean KMICAILENNN; // 0x350
		::System::Byte _padding2[0x7];
		::HIDPAPFBACC* COIGFPLEEJH; // 0x358
		::System::Int32 CGBFIADBLBN; // 0x360
		::System::Int32 BFLOBDJHOBK; // 0x364
		::DGDNKBFMHME* ADGFFOJBKHI; // 0x368
		::DGDNKBFMHME* COEGLPGHGCH; // 0x370
		::System::String* NLGEHNEGNDC; // 0x378
		::System::String* NAGLFJAOEOA; // 0x380

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::GBJMDNJNIBO get_HotSwitchRootLayerState()
		{
			return ((::GBJMDNJNIBO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::FAKODLEPJOA get_MessageMatchPage()
		{
			return ((::FAKODLEPJOA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONSHOW_OFFSET))(this, openCtrlContext);
		}

		::System::Void PlaySplitVideo(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_PLAYSPLITVIDEO_OFFSET))(this, url);
		}

		::System::Void SetConfig(::HIDPAPFBACC* config)
		{
			return ((::System::Void(*)(::PVOID, ::HIDPAPFBACC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_SETCONFIG_OFFSET))(this, config);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OpenInputNameView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_OPENINPUTNAMEVIEW_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void ResetClickState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_RESETCLICKSTATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void DKHGHJGGADM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_DKHGHJGGADM_OFFSET))(this);
		}

		::System::Void JHLKKLIFDGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_JHLKKLIFDGB_OFFSET))(this);
		}

		::System::Void AONFJMNDCAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_AONFJMNDCAE_OFFSET))(this);
		}

		::System::Void KDJEEAKJPGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_KDJEEAKJPGJ_OFFSET))(this);
		}

		::System::Void FENJLIJOPHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_FENJLIJOPHB_OFFSET))(this);
		}

		::System::Void ENELOKENKMP(::DGDNKBFMHME* BKIIJMLGNJH)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLEPAGECONTROLLER_ENELOKENKMP_OFFSET))(this, BKIIJMLGNJH);
		}
	};
}
