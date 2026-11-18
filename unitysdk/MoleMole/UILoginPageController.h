#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/GBJMDNJNIBO.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/HDENKHCBKGL.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class EJHKAOBCFNK;
class IAAJEJNAOMG;
namespace MoleMole { class MonoGamepadBaseList; }
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralLoginTipsDialogPopWindowController; }
namespace MoleMole { class UILoginAgeEjectDialogPopWindowController; }
namespace MoleMole { class UIResourceLoadWidgetContext; }
namespace MoleMole { class UIResourceLoadWidgetController; }
namespace MoleMole { class UISDKLoginContext; }
namespace MoleMole { class UISDKLoginWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UILOGINPAGECONTROLLER_CANCELLOGIN_OFFSET UNITYSDK_OFFSET(0x19036F70)
#define MOLEMOLE_UILOGINPAGECONTROLLER_CFMPDMPCIPD_OFFSET UNITYSDK_OFFSET(0x19039B10)
#define MOLEMOLE_UILOGINPAGECONTROLLER_CLOSELOGIN_OFFSET UNITYSDK_OFFSET(0x19037BF0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_COLOSESDKTIPS_OFFSET UNITYSDK_OFFSET(0x190382A0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_DAHKNBLAAEB_OFFSET UNITYSDK_OFFSET(0x19034B30)
#define MOLEMOLE_UILOGINPAGECONTROLLER_DDJNEGJDOEI_OFFSET UNITYSDK_OFFSET(0x1903A8D0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_EGPPOPGKMIN_OFFSET UNITYSDK_OFFSET(0x1903B250)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ENABLELOGININPUTBLOCK_OFFSET UNITYSDK_OFFSET(0x190395A0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_FHDMKOJCNIK_OFFSET UNITYSDK_OFFSET(0x1903A2F0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_FHJOCMOENFG_OFFSET UNITYSDK_OFFSET(0x1903A5B0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_FHMOJDKGANJ_OFFSET UNITYSDK_OFFSET(0x19039EA0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_FMHLIMBADIB_OFFSET UNITYSDK_OFFSET(0x1903B320)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GAMEPADSETDEFAULTSELECT_OFFSET UNITYSDK_OFFSET(0x19036340)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GETLOGINKEY_OFFSET UNITYSDK_OFFSET(0x19035AF0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GETTIPSROOTWIDGET_OFFSET UNITYSDK_OFFSET(0x190336E0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GETTIPSROOT_OFFSET UNITYSDK_OFFSET(0x19033660)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x19033500)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x190334C0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GET_SDKWIGETROOT_OFFSET UNITYSDK_OFFSET(0x190334D0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x190334B0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GHPIEMHKFEC_OFFSET UNITYSDK_OFFSET(0x1903AF00)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GNMFNKNFGFM_OFFSET UNITYSDK_OFFSET(0x1903AA80)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GOFMJPCLDCO_OFFSET UNITYSDK_OFFSET(0x19039D30)
#define MOLEMOLE_UILOGINPAGECONTROLLER_HJFMPHCMNBK_OFFSET UNITYSDK_OFFSET(0x19037F10)
#define MOLEMOLE_UILOGINPAGECONTROLLER_INITLOGIN_OFFSET UNITYSDK_OFFSET(0x19038320)
#define MOLEMOLE_UILOGINPAGECONTROLLER_INKNMIGNNDH_OFFSET UNITYSDK_OFFSET(0x19034A70)
#define MOLEMOLE_UILOGINPAGECONTROLLER_JINKGCFJJCF_OFFSET UNITYSDK_OFFSET(0x1903B240)
#define MOLEMOLE_UILOGINPAGECONTROLLER_KNBCKMPIOAJ_OFFSET UNITYSDK_OFFSET(0x19036DF0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_LCICDLGKLGE_OFFSET UNITYSDK_OFFSET(0x1903A780)
#define MOLEMOLE_UILOGINPAGECONTROLLER_LNOJDEJEMAE_OFFSET UNITYSDK_OFFSET(0x1903B530)
#define MOLEMOLE_UILOGINPAGECONTROLLER_MIKCEBEGKKJ_OFFSET UNITYSDK_OFFSET(0x1903AC20)
#define MOLEMOLE_UILOGINPAGECONTROLLER_NOEDEBOMPJM_OFFSET UNITYSDK_OFFSET(0x190399E0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OJBINKFFLMM_OFFSET UNITYSDK_OFFSET(0x19037EB0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19033730)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x19035760)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONSDKENTERGAMESUCCESS_OFFSET UNITYSDK_OFFSET(0x19037A60)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19033550)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19034D00)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190337C0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19039600)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENAGEDAILOG_OFFSET UNITYSDK_OFFSET(0x19038F20)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENCLOUDPRELOGIN_OFFSET UNITYSDK_OFFSET(0x19038B60)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENDEBUGLOGIN_OFFSET UNITYSDK_OFFSET(0x19038850)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENRESOURCELOAD_OFFSET UNITYSDK_OFFSET(0x19039410)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENSDKLOGIN_OFFSET UNITYSDK_OFFSET(0x190388E0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENSELECTSERVER_OFFSET UNITYSDK_OFFSET(0x19036DA0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_PCKBBFFHLHJ_OFFSET UNITYSDK_OFFSET(0x19039080)
#define MOLEMOLE_UILOGINPAGECONTROLLER_PGJPOLFCCEC_OFFSET UNITYSDK_OFFSET(0x19039D40)
#define MOLEMOLE_UILOGINPAGECONTROLLER_PMGJJBHMFHN_OFFSET UNITYSDK_OFFSET(0x190399F0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_RESETFOCUS_OFFSET UNITYSDK_OFFSET(0x19037950)
#define MOLEMOLE_UILOGINPAGECONTROLLER_RESETLOGIN_OFFSET UNITYSDK_OFFSET(0x19037380)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETBESTSERVER_OFFSET UNITYSDK_OFFSET(0x19036CA0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETIGNORECUSTOMLISTNAVIGATESTATE_OFFSET UNITYSDK_OFFSET(0x190376D0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETMESSAGEKEY_OFFSET UNITYSDK_OFFSET(0x19035DE0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETRESOURCEVERSION_OFFSET UNITYSDK_OFFSET(0x19036670)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETSERVERBYNAME_OFFSET UNITYSDK_OFFSET(0x19036AC0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x19034C70)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETXBOXIDTAG_OFFSET UNITYSDK_OFFSET(0x19036600)
#define MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGINANDLOADRESOURCE_OFFSET UNITYSDK_OFFSET(0x19037410)
#define MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGIN_OFFSET UNITYSDK_OFFSET(0x19036820)
#define MOLEMOLE_UILOGINPAGECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x19036A80)
#define MOLEMOLE_UILOGINPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19039750)
#define MOLEMOLE_UILOGINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19039730)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x19039760)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19039770)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x19039800)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19039890)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x190398A0)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x190398B0)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x190398C0)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x19039950)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginPageController_TypeDefinitionIndex = 39120;

	class UILoginPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Boolean* StaticGet_Hide_Code_Login()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UILoginPageController_TypeDefinitionIndex)->GetStaticField(0xF720);
		}
		// static const ::System::String* NNODKEHIFAD; // 0x0
		// static const ::System::Int32 DAFKHBHEIJH = 0x5; // 0x0
		// static const ::System::Single NGKPGOOACFA; // 0x0
		::System::Single KHDKMKHLGHG; // 0x320
		::System::Single HANIIOCHPLN; // 0x324
		::System::Boolean BEEJKNKBACC; // 0x328
		::System::Byte _padding0[0x7];
		::IAAJEJNAOMG* _view; // 0x330
		::EJHKAOBCFNK* GLICIEJNEIC; // 0x338
		::UnityEngine::Animation* BECGPNGEOEM; // 0x340
		::UnityEngine::Animation* HALKMHJJACA; // 0x348
		::UnityEngine::Animation* PDMBOLBPIGD; // 0x350
		::MoleMole::UISDKLoginWidgetController* LPHKOCADALJ; // 0x358
		::MoleMole::UIResourceLoadWidgetController* FEAGDFPGBBH; // 0x360
		::MoleMole::UILoginAgeEjectDialogPopWindowController* IHKGJNKOPIK; // 0x368
		::MoleMole::UIGeneralLoginTipsDialogPopWindowController* JIGEANBCOPP; // 0x370
		::MoleMole::MonoGamepadBaseList* CEMEKOGCFII; // 0x378
		::MoleMole::MonoGamepadCustomList* DCNHPOBLBBC; // 0x380
		::MoleMole::MonoGamepadBaseList* NOHBANLLPBL; // 0x388
		::HDENKHCBKGL BCJIFGIDPMA; // 0x390
		::System::Boolean Disable_Frequent_attempts; // 0x394
		::System::Byte _padding1[0x3];
		::System::Collections::Generic::List_1<::System::Single>* JMIGIBDHCOE; // 0x398

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::FAKODLEPJOA get_MessageMatchPage()
		{
			return ((::FAKODLEPJOA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_SDKWigetRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GET_SDKWIGETROOT_OFFSET))(this);
		}

		::GBJMDNJNIBO get_HotSwitchRootLayerState()
		{
			return ((::GBJMDNJNIBO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::UnityEngine::Transform* GetTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GETTIPSROOT_OFFSET))(this);
		}

		::MoleMole::UIGeneralLoginTipsDialogPopWindowController* GetTipsRootWidget()
		{
			return ((::MoleMole::UIGeneralLoginTipsDialogPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GETTIPSROOTWIDGET_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void SetXboxIdTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETXBOXIDTAG_OFFSET))(this);
		}

		::System::Void SetResourceVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETRESOURCEVERSION_OFFSET))(this);
		}

		::System::Void SetMessageKey(::System::String* key, ::System::Boolean needLoppAni, ::System::Boolean showGamePadHint)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETMESSAGEKEY_OFFSET))(this, key, needLoppAni, showGamePadHint);
		}

		::System::Void StartLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGIN_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_START_OFFSET))(this);
		}

		::System::Void SetServerByName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETSERVERBYNAME_OFFSET))(this, name);
		}

		::System::Void SetBestServer(::System::Action* success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETBESTSERVER_OFFSET))(this, success);
		}

		::System::Void OpenSelectServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENSELECTSERVER_OFFSET))(this);
		}

		::System::Void CancelLogin(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_CANCELLOGIN_OFFSET))(this, arg);
		}

		::System::String* GetLoginKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GETLOGINKEY_OFFSET))(this);
		}

		::System::Void ResetLogin(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_RESETLOGIN_OFFSET))(this, arg);
		}

		::System::Void StartLoginAndLoadResource(::MoleMole::UIResourceLoadWidgetContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIResourceLoadWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGINANDLOADRESOURCE_OFFSET))(this, context);
		}

		::System::Void ResetFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_RESETFOCUS_OFFSET))(this);
		}

		::System::Void OnSDKEnterGameSuccess(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONSDKENTERGAMESUCCESS_OFFSET))(this, args);
		}

		::System::Void CloseLogin(::System::Action_1<::System::Boolean>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_CLOSELOGIN_OFFSET))(this, cb);
		}

		::System::Void ColoseSDKTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_COLOSESDKTIPS_OFFSET))(this);
		}

		::System::Void InitLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_INITLOGIN_OFFSET))(this);
		}

		::System::Void OpenAgeDailog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENAGEDAILOG_OFFSET))(this);
		}

		::System::Void OpenCloudPreLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENCLOUDPRELOGIN_OFFSET))(this);
		}

		::System::Void OpenSDKLogin(::MoleMole::UISDKLoginContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISDKLoginContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENSDKLOGIN_OFFSET))(this, context);
		}

		::System::Void OpenDebugLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENDEBUGLOGIN_OFFSET))(this);
		}

		::System::Void OpenResourceLoad(::MoleMole::UIResourceLoadWidgetContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIResourceLoadWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENRESOURCELOAD_OFFSET))(this, context);
		}

		::System::Void EnableLoginInputBlock(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ENABLELOGININPUTBLOCK_OFFSET))(this, arg);
		}

		::System::Void SetIgnoreCustomListNavigateState(::System::Boolean ignoreNavigate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETIGNORECUSTOMLISTNAVIGATESTATE_OFFSET))(this, ignoreNavigate);
		}

		::System::Void GamePadSetDefaultSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GAMEPADSETDEFAULTSELECT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::GBJMDNJNIBO __base_get_HotSwitchRootLayerState()
		{
			return ((::GBJMDNJNIBO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OJBINKFFLMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OJBINKFFLMM_OFFSET))(this);
		}

		::System::Void NOEDEBOMPJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_NOEDEBOMPJM_OFFSET))(this);
		}

		::System::Void PMGJJBHMFHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_PMGJJBHMFHN_OFFSET))(this);
		}

		::System::Void HJFMPHCMNBK(::System::Action_1<::System::Boolean>* DMPEOJCCCLO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_HJFMPHCMNBK_OFFSET))(this, DMPEOJCCCLO);
		}

		::System::Void INKNMIGNNDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_INKNMIGNNDH_OFFSET))(this);
		}

		::System::Void GOFMJPCLDCO(::System::EventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GOFMJPCLDCO_OFFSET))(this, PIIPCLCCOIG);
		}

		::System::Void PGJPOLFCCEC(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_PGJPOLFCCEC_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void FHMOJDKGANJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_FHMOJDKGANJ_OFFSET))(this);
		}

		::System::Void FHDMKOJCNIK(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_FHDMKOJCNIK_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void FHJOCMOENFG(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_FHJOCMOENFG_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void LCICDLGKLGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_LCICDLGKLGE_OFFSET))(this);
		}

		::System::Void PCKBBFFHLHJ(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_PCKBBFFHLHJ_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void DDJNEGJDOEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_DDJNEGJDOEI_OFFSET))(this);
		}

		::System::Void GNMFNKNFGFM(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GNMFNKNFGFM_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void DAHKNBLAAEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_DAHKNBLAAEB_OFFSET))(this);
		}

		::System::Void GHPIEMHKFEC(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GHPIEMHKFEC_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void JINKGCFJJCF(::System::EventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_JINKGCFJJCF_OFFSET))(this, PIIPCLCCOIG);
		}

		::System::Void CFMPDMPCIPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_CFMPDMPCIPD_OFFSET))(this);
		}

		::System::Boolean MIKCEBEGKKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_MIKCEBEGKKJ_OFFSET))(this);
		}

		::System::Void KNBCKMPIOAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_KNBCKMPIOAJ_OFFSET))(this);
		}

		::System::Void FMHLIMBADIB(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_FMHLIMBADIB_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void EGPPOPGKMIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_EGPPOPGKMIN_OFFSET))(this);
		}

		::System::Void LNOJDEJEMAE(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_LNOJDEJEMAE_OFFSET))(this, FNIOPKPHDEH);
		}
	};
}
