#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/MoleMole/UIBaseController.h"
#include "unitysdk/MoleMole/UIWindowController_OnHideOperation.h"
#include "unitysdk/ODOPDJKEEIG_NFFKBGCLEGF.h"
#include "unitysdk/ODOPDJKEEIG_GJCHPEICMOL.h"

class GMCPAFDJNLH;
class GPANGEMAHKF;
class HNLACBJDCGI;
class NBCNIBOCNAA;
class ODOPDJKEEIG;
class PEBJBCONAGN;
namespace MoleMole { class UIAspectRatioHandler; }
namespace MoleMole { class UIBase3DModelController; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDialogStaticBlurWidgetController; }
namespace MoleMole { class UIMonoController; }
namespace MoleMole { class UIWidgetController; }
namespace MoleMole::Config { class BaseConfigSoundAction; }
namespace MoleMole::Config { class UIBlurFlag; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIWINDOWCONTROLLER_ADDCHILDCONTROL_1_OFFSET UNITYSDK_OFFSET(0x1670B3A0)
#define MOLEMOLE_UIWINDOWCONTROLLER_ADDCHILDCONTROL_OFFSET UNITYSDK_OFFSET(0x1670B340)
#define MOLEMOLE_UIWINDOWCONTROLLER_ADDMONOCONTROLLER_OFFSET UNITYSDK_OFFSET(0x16708FA0)
#define MOLEMOLE_UIWINDOWCONTROLLER_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0x1670B080)
#define MOLEMOLE_UIWINDOWCONTROLLER_BEFOREPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x1670CCD0)
#define MOLEMOLE_UIWINDOWCONTROLLER_BEFOREPAGEFADEOUT_OFFSET UNITYSDK_OFFSET(0x1670CDC0)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLEARPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x16707E60)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLOSECHILDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1670ABC0)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLOSESTATICBLURCONTROLLER_1_OFFSET UNITYSDK_OFFSET(0x1670D340)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLOSESTATICBLURCONTROLLER_OFFSET UNITYSDK_OFFSET(0x16708420)
#define MOLEMOLE_UIWINDOWCONTROLLER_CLOSE_OFFSET UNITYSDK_OFFSET(0x166D36F0)
#define MOLEMOLE_UIWINDOWCONTROLLER_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0x1670B180)
#define MOLEMOLE_UIWINDOWCONTROLLER_CREATEPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x16707870)
#define MOLEMOLE_UIWINDOWCONTROLLER_DELAYHIDECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1670BF10)
#define MOLEMOLE_UIWINDOWCONTROLLER_DESTROYCLEAN_OFFSET UNITYSDK_OFFSET(0x16709BE0)
#define MOLEMOLE_UIWINDOWCONTROLLER_DESTROYPROXY_OFFSET UNITYSDK_OFFSET(0x1670B2A0)
#define MOLEMOLE_UIWINDOWCONTROLLER_DISPOSEPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x16707710)
#define MOLEMOLE_UIWINDOWCONTROLLER_DOHIDEIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x167099B0)
#define MOLEMOLE_UIWINDOWCONTROLLER_EXECUTESOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1670C2B0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETALLCHILDREN_OFFSET UNITYSDK_OFFSET(0x1670A5B0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETASSETPROXY_OFFSET UNITYSDK_OFFSET(0x16709B90)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0x167076D0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETCUSTOMHIDE3DTIME_OFFSET UNITYSDK_OFFSET(0x1670C270)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETISCHILDWINDOW_OFFSET UNITYSDK_OFFSET(0x16708720)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETISPAGEWINDOW_OFFSET UNITYSDK_OFFSET(0x16708770)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETISPOPUPWINDOW_OFFSET UNITYSDK_OFFSET(0x167086D0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETPAGEWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x167087C0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETTOPTIPSROOT_OFFSET UNITYSDK_OFFSET(0x16707690)
#define MOLEMOLE_UIWINDOWCONTROLLER_GETWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x167088B0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_ASPECTRATIOHANDLER_OFFSET UNITYSDK_OFFSET(0x167081B0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_BACKTYPE_OFFSET UNITYSDK_OFFSET(0x16708060)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_BOTTOMPUMP_OFFSET UNITYSDK_OFFSET(0x16707670)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_ISMODALWINDOW_OFFSET UNITYSDK_OFFSET(0x16708370)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_ISROOTLAYER_OFFSET UNITYSDK_OFFSET(0x167080A0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_JUMPTYPE_OFFSET UNITYSDK_OFFSET(0x16708080)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x16708350)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_SENDOPENPOPUPFORNEWBIE_OFFSET UNITYSDK_OFFSET(0x16708400)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_SHOULDHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x167081D0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_TOPPUMP_OFFSET UNITYSDK_OFFSET(0x16707650)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0x167083E0)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_TRIGGERPOP_OFFSET UNITYSDK_OFFSET(0x16708360)
#define MOLEMOLE_UIWINDOWCONTROLLER_GET_TRYOVERRIDETOPPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x16708410)
#define MOLEMOLE_UIWINDOWCONTROLLER_HANDLEUISTATICBLUR_OFFSET UNITYSDK_OFFSET(0x1670CE60)
#define MOLEMOLE_UIWINDOWCONTROLLER_HIDECHILDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1670B400)
#define MOLEMOLE_UIWINDOWCONTROLLER_HIDESTATICBLURCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1670D5C0)
#define MOLEMOLE_UIWINDOWCONTROLLER_INITWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x16708470)
#define MOLEMOLE_UIWINDOWCONTROLLER_INTERRUPTPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x16707B60)
#define MOLEMOLE_UIWINDOWCONTROLLER_ISSKIPFADEIN_OFFSET UNITYSDK_OFFSET(0x1670BF90)
#define MOLEMOLE_UIWINDOWCONTROLLER_NEEDMUTEINLEVELSKILLINPUTINSTREAMING_OFFSET UNITYSDK_OFFSET(0x1670D910)
#define MOLEMOLE_UIWINDOWCONTROLLER_NEEDOVERRIDEGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0x1670D8C0)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONBEFOREPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x1670CC80)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONBEFOREPAGEFADEOUT_OFFSET UNITYSDK_OFFSET(0x1670CD70)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONCHILDPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x1670B120)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x1670BFE0)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x1670C1F0)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x166CCF70)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x166EB780)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166CD190)
#define MOLEMOLE_UIWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166CC560)
#define MOLEMOLE_UIWINDOWCONTROLLER_OPENSTATICBLURCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1670CF30)
#define MOLEMOLE_UIWINDOWCONTROLLER_PAGEBACK_OFFSET UNITYSDK_OFFSET(0x1670B480)
#define MOLEMOLE_UIWINDOWCONTROLLER_PAGEDELAYHIDE_OFFSET UNITYSDK_OFFSET(0x1670B8D0)
#define MOLEMOLE_UIWINDOWCONTROLLER_PAUSEPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x16707D10)
#define MOLEMOLE_UIWINDOWCONTROLLER_PAUSESCREENLAYOUT_OFFSET UNITYSDK_OFFSET(0x1670A020)
#define MOLEMOLE_UIWINDOWCONTROLLER_PLAYCLOSEANIM_OFFSET UNITYSDK_OFFSET(0x1670B660)
#define MOLEMOLE_UIWINDOWCONTROLLER_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x1670B7A0)
#define MOLEMOLE_UIWINDOWCONTROLLER_POSTOPEN3DMODELCHILDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1670D740)
#define MOLEMOLE_UIWINDOWCONTROLLER_POSTOPENCHILDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1670A950)
#define MOLEMOLE_UIWINDOWCONTROLLER_POSTRELEASEUI_OFFSET UNITYSDK_OFFSET(0x16708AB0)
#define MOLEMOLE_UIWINDOWCONTROLLER_PREPARESHOW_OFFSET UNITYSDK_OFFSET(0x1670AFE0)
#define MOLEMOLE_UIWINDOWCONTROLLER_REFRESHSCREENLAYOUT_OFFSET UNITYSDK_OFFSET(0x16709F70)
#define MOLEMOLE_UIWINDOWCONTROLLER_REMOVECHILDCTRL_1_OFFSET UNITYSDK_OFFSET(0x1670AE20)
#define MOLEMOLE_UIWINDOWCONTROLLER_REMOVECHILDCTRL_OFFSET UNITYSDK_OFFSET(0x1670ADC0)
#define MOLEMOLE_UIWINDOWCONTROLLER_REMOVEFROMPARENT_OFFSET UNITYSDK_OFFSET(0x16709800)
#define MOLEMOLE_UIWINDOWCONTROLLER_RESELECTPARENT_OFFSET UNITYSDK_OFFSET(0x1670A390)
#define MOLEMOLE_UIWINDOWCONTROLLER_SETCHILDCONTROLLERPARENT_OFFSET UNITYSDK_OFFSET(0x16708900)
#define MOLEMOLE_UIWINDOWCONTROLLER_SETONHIDEOPERATION_OFFSET UNITYSDK_OFFSET(0x16708010)
#define MOLEMOLE_UIWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x166FA5A0)
#define MOLEMOLE_UIWINDOWCONTROLLER_SET_ASPECTRATIOHANDLER_OFFSET UNITYSDK_OFFSET(0x167081C0)
#define MOLEMOLE_UIWINDOWCONTROLLER_SET_BOTTOMPUMP_OFFSET UNITYSDK_OFFSET(0x16707680)
#define MOLEMOLE_UIWINDOWCONTROLLER_SET_TOPPUMP_OFFSET UNITYSDK_OFFSET(0x16707660)
#define MOLEMOLE_UIWINDOWCONTROLLER_SET_TRIGGERNEWBIEONSHOW_OFFSET UNITYSDK_OFFSET(0x167083F0)
#define MOLEMOLE_UIWINDOWCONTROLLER_STARTPUMPQUEUE_OFFSET UNITYSDK_OFFSET(0x167079C0)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONHIDEBEFOREANIMSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1670C7D0)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONHIDESOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1670BA60)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONSHOWSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1670C320)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRYHIDEBYPARENT_OFFSET UNITYSDK_OFFSET(0x1670B570)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRYPLAYTOPPAGEOVERRIDEFADEIN_OFFSET UNITYSDK_OFFSET(0x16709550)
#define MOLEMOLE_UIWINDOWCONTROLLER_TRYSHOWBYPARENT_OFFSET UNITYSDK_OFFSET(0x1670B500)
#define MOLEMOLE_UIWINDOWCONTROLLER_UICLOSE_OFFSET UNITYSDK_OFFSET(0x16709150)
#define MOLEMOLE_UIWINDOWCONTROLLER_UPDATELAYOUTPLATFORM_OFFSET UNITYSDK_OFFSET(0x16708DB0)
#define MOLEMOLE_UIWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x166C8970)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_AFTERSHOW_OFFSET UNITYSDK_OFFSET(0x1670DB30)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1670DA70)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_CREATEPROXY_OFFSET UNITYSDK_OFFSET(0x1670DEF0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_DESTROYCLEAN_OFFSET UNITYSDK_OFFSET(0x1670DF00)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_DESTROYPROXY_OFFSET UNITYSDK_OFFSET(0x1670DFB0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_GET_SHOULDHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x1670E070)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONCHILDPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x1670E080)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONPREPAREHIDE_OFFSET UNITYSDK_OFFSET(0x1670DBD0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1670DA80)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1670DB20)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1670D950)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1670D9E0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_PLAYCLOSEANIM_OFFSET UNITYSDK_OFFSET(0x1670DC70)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x1670DC60)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_POSTRELEASEUI_OFFSET UNITYSDK_OFFSET(0x1670DE60)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_PREPARESHOW_OFFSET UNITYSDK_OFFSET(0x1670DDC0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_REMOVEFROMPARENT_OFFSET UNITYSDK_OFFSET(0x1670E110)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONHIDEBEFOREANIMSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1670E1A0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONHIDESOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1670E1B0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONSHOWSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x1670E1C0)
#define MOLEMOLE_UIWINDOWCONTROLLER___BASE_UPDATELAYOUTPLATFORM_OFFSET UNITYSDK_OFFSET(0x1670DD30)

namespace MoleMole
{
	inline static constexpr unsigned int UIWindowController_TypeDefinitionIndex = 47248;

	class UIWindowController : public ::MoleMole::UIBaseController
	{
	public:
		::NBCNIBOCNAA* _TopPump_k__BackingField; // 0x2B0
		::NBCNIBOCNAA* _BottomPump_k__BackingField; // 0x2B8
		::System::Collections::Generic::List_1<::NBCNIBOCNAA*>* _pumpList; // 0x2C0
		::MoleMole::UIWindowController_OnHideOperation _onHidePumpQueueOperation; // 0x2C8
		::System::Byte _padding0[0x4];
		::MoleMole::UIAspectRatioHandler* _AspectRatioHandler_k__BackingField; // 0x2D0
		::ODOPDJKEEIG* _uiWindowSetting; // 0x2D8
		::UnityEngine::Transform* realUIRoot; // 0x2E0
		::System::Boolean _TriggerNewbieOnShow_k__BackingField; // 0x2E8
		::System::Boolean PageFreezeAnimation; // 0x2E9
		::System::Byte _padding1[0x6];
		::PEBJBCONAGN* _childWindowProxy; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UIMonoController*>* _listMonoController; // 0x2F8
		::System::Boolean _hideByParent; // 0x300
		::System::Byte _padding2[0x7];
		::System::Action* closeAction; // 0x308
		::MoleMole::Config::UIBlurFlag* uiBlurFlag; // 0x310
		::MoleMole::UIGeneralDialogStaticBlurWidgetController* _blurDialogWidget; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::NBCNIBOCNAA* get_TopPump()
		{
			return ((::NBCNIBOCNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_TOPPUMP_OFFSET))(this);
		}

		::System::Void set_TopPump(::NBCNIBOCNAA* value)
		{
			return ((::System::Void(*)(::PVOID, ::NBCNIBOCNAA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_SET_TOPPUMP_OFFSET))(this, value);
		}

		::NBCNIBOCNAA* get_BottomPump()
		{
			return ((::NBCNIBOCNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_BOTTOMPUMP_OFFSET))(this);
		}

		::System::Void set_BottomPump(::NBCNIBOCNAA* value)
		{
			return ((::System::Void(*)(::PVOID, ::NBCNIBOCNAA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_SET_BOTTOMPUMP_OFFSET))(this, value);
		}

		::UnityEngine::Transform* GetTopTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETTOPTIPSROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetBottomTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETBOTTOMTIPSROOT_OFFSET))(this);
		}

		::System::Void DisposePumpQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_DISPOSEPUMPQUEUE_OFFSET))(this);
		}

		::System::Void CreatePumpQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_CREATEPUMPQUEUE_OFFSET))(this);
		}

		::System::Void StartPumpQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_STARTPUMPQUEUE_OFFSET))(this);
		}

		::System::Void InterruptPumpQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_INTERRUPTPUMPQUEUE_OFFSET))(this);
		}

		::System::Void PausePumpQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PAUSEPUMPQUEUE_OFFSET))(this);
		}

		::System::Void ClearPumpQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_CLEARPUMPQUEUE_OFFSET))(this);
		}

		::System::Void SetOnHideOperation(::MoleMole::UIWindowController_OnHideOperation operation)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController_OnHideOperation))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_SETONHIDEOPERATION_OFFSET))(this, operation);
		}

		::ODOPDJKEEIG_GJCHPEICMOL get_BackType()
		{
			return ((::ODOPDJKEEIG_GJCHPEICMOL(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_BACKTYPE_OFFSET))(this);
		}

		::ODOPDJKEEIG_NFFKBGCLEGF get_JumpType()
		{
			return ((::ODOPDJKEEIG_NFFKBGCLEGF(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_JUMPTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsRootLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_ISROOTLAYER_OFFSET))(this);
		}

		::MoleMole::UIAspectRatioHandler* get_AspectRatioHandler()
		{
			return ((::MoleMole::UIAspectRatioHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_ASPECTRATIOHANDLER_OFFSET))(this);
		}

		::System::Void set_AspectRatioHandler(::MoleMole::UIAspectRatioHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAspectRatioHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_SET_ASPECTRATIOHANDLER_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldHandleInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_SHOULDHANDLEINPUT_OFFSET))(this);
		}

		::FAKODLEPJOA get_MessageMatchPage()
		{
			return ((::FAKODLEPJOA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::FAKODLEPJOA get_TriggerPop()
		{
			return ((::FAKODLEPJOA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_TRIGGERPOP_OFFSET))(this);
		}

		::System::Boolean get_IsModalWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_ISMODALWINDOW_OFFSET))(this);
		}

		::System::Boolean get_TriggerNewbieOnShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_TRIGGERNEWBIEONSHOW_OFFSET))(this);
		}

		::System::Void set_TriggerNewbieOnShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_SET_TRIGGERNEWBIEONSHOW_OFFSET))(this, value);
		}

		::System::Boolean get_SendOpenPopUpForNewBie()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_SENDOPENPOPUPFORNEWBIE_OFFSET))(this);
		}

		::System::Boolean get_TryOverrideTopPageFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GET_TRYOVERRIDETOPPAGEFADEIN_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_INITWINDOWSETTING_OFFSET))(this);
		}

		::System::Boolean GetIsPopupWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETISPOPUPWINDOW_OFFSET))(this);
		}

		::System::Boolean GetIsChildWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETISCHILDWINDOW_OFFSET))(this);
		}

		::System::Boolean GetIsPageWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETISPAGEWINDOW_OFFSET))(this);
		}

		::GPANGEMAHKF* GetPageWindowSetting()
		{
			return ((::GPANGEMAHKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETPAGEWINDOWSETTING_OFFSET))(this);
		}

		::ODOPDJKEEIG* GetWindowSetting()
		{
			return ((::ODOPDJKEEIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETWINDOWSETTING_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void SetChildControllerParent(::MoleMole::UIBaseController* childController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_SETCHILDCONTROLLERPARENT_OFFSET))(this, childController);
		}

		::System::Void PostReleaseUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_POSTRELEASEUI_OFFSET))(this);
		}

		::System::Void UpdateLayoutPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_UPDATELAYOUTPLATFORM_OFFSET))(this);
		}

		::System::Void AddMonoController(::MoleMole::UIMonoController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMonoController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ADDMONOCONTROLLER_OFFSET))(this, ctrl);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_CLOSE_OFFSET))(this);
		}

		::System::Void UIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_UICLOSE_OFFSET))(this);
		}

		::System::Void TryPlayTopPageOverrideFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_TRYPLAYTOPPAGEOVERRIDEFADEIN_OFFSET))(this);
		}

		::System::Void DoHideImmediate(::System::Boolean doOnHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_DOHIDEIMMEDIATE_OFFSET))(this, doOnHide);
		}

		::HNLACBJDCGI* GetAssetProxy()
		{
			return ((::HNLACBJDCGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETASSETPROXY_OFFSET))(this);
		}

		::System::Void DestroyClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_DESTROYCLEAN_OFFSET))(this);
		}

		::System::Void RefreshScreenLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_REFRESHSCREENLAYOUT_OFFSET))(this);
		}

		::System::Void PauseScreenLayout(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PAUSESCREENLAYOUT_OFFSET))(this, pause);
		}

		::System::Void ReSelectParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_RESELECTPARENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* GetAllChildren()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETALLCHILDREN_OFFSET))(this);
		}

		::System::Void PostOpenChildController(::MoleMole::UIWindowController* ctrl, ::UnityEngine::Transform* parent, ::MoleMole::UIControllerContextBase* uiControllerContext, ::GMCPAFDJNLH* openParams, ::System::Int32 overrideCanvas)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::MoleMole::UIControllerContextBase*, ::GMCPAFDJNLH*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_POSTOPENCHILDCONTROLLER_OFFSET))(this, ctrl, parent, uiControllerContext, openParams, overrideCanvas);
		}

		::System::Void CloseChildController(::MoleMole::UIWindowController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_CLOSECHILDCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void RemoveChildCtrl(::MoleMole::UIWidgetController* widgetController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_REMOVECHILDCTRL_OFFSET))(this, widgetController);
		}

		::System::Void RemoveChildCtrl_1(::MoleMole::UIWindowController* child)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_REMOVECHILDCTRL_1_OFFSET))(this, child);
		}

		::System::Void PrepareShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PREPARESHOW_OFFSET))(this);
		}

		::System::Void AfterShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_AFTERSHOW_OFFSET))(this);
		}

		::System::Void OnChildPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONCHILDPREPAREHIDE_OFFSET))(this);
		}

		::System::Void CreateProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_CREATEPROXY_OFFSET))(this);
		}

		::System::Void DestroyProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_DESTROYPROXY_OFFSET))(this);
		}

		::System::Void AddChildControl(::MoleMole::UIWidgetController* widgetController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ADDCHILDCONTROL_OFFSET))(this, widgetController);
		}

		::System::Void AddChildControl_1(::MoleMole::UIWindowController* widgetController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ADDCHILDCONTROL_1_OFFSET))(this, widgetController);
		}

		::System::Void HideChildController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_HIDECHILDCONTROLLER_OFFSET))(this);
		}

		::System::Void PageBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PAGEBACK_OFFSET))(this);
		}

		::System::Void TryShowByParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_TRYSHOWBYPARENT_OFFSET))(this);
		}

		::System::Void TryHideByParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_TRYHIDEBYPARENT_OFFSET))(this);
		}

		::System::Void RemoveFromParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_REMOVEFROMPARENT_OFFSET))(this);
		}

		::System::Single PlayCloseAnim(::System::Action* callback, ::MIKOMFIBMBN nextPage, ::System::String* fadeOutAnim)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*, ::MIKOMFIBMBN, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PLAYCLOSEANIM_OFFSET))(this, callback, nextPage, fadeOutAnim);
		}

		::System::Void PlayFadeOut(::System::Action* callback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PLAYFADEOUT_OFFSET))(this, callback, animSpeed);
		}

		::System::Void PageDelayHide(::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_PAGEDELAYHIDE_OFFSET))(this, delay);
		}

		::System::Void DelayHideComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_DELAYHIDECOMPLETE_OFFSET))(this);
		}

		::System::Boolean IsSkipFadeIn(::MoleMole::UIBaseController* fromCtrl)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ISSKIPFADEIN_OFFSET))(this, fromCtrl);
		}

		::System::Void OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONPREPAREHIDE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Single GetCustomHide3DTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_GETCUSTOMHIDE3DTIME_OFFSET))(this);
		}

		::System::Void ExecuteSoundAction(::MoleMole::Config::BaseConfigSoundAction* soundAction)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseConfigSoundAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_EXECUTESOUNDACTION_OFFSET))(this, soundAction);
		}

		::System::Void TriggerOnHideSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONHIDESOUNDACTION_OFFSET))(this);
		}

		::System::Void TriggerOnShowSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONSHOWSOUNDACTION_OFFSET))(this);
		}

		::System::Void TriggerOnHideBeforeAnimSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_TRIGGERONHIDEBEFOREANIMSOUNDACTION_OFFSET))(this);
		}

		::System::Void OnBeforePageFadeIn(::System::Boolean currentPageNeedsFadeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONBEFOREPAGEFADEIN_OFFSET))(this, currentPageNeedsFadeAnim);
		}

		::System::Void BeforePageFadeIn(::System::Boolean currentPageNeedsFadeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_BEFOREPAGEFADEIN_OFFSET))(this, currentPageNeedsFadeAnim);
		}

		::System::Void OnBeforePageFadeOut(::System::Boolean currentPageNeedsFadeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_ONBEFOREPAGEFADEOUT_OFFSET))(this, currentPageNeedsFadeAnim);
		}

		::System::Void BeforePageFadeOut(::System::Boolean currentPageNeedsFadeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_BEFOREPAGEFADEOUT_OFFSET))(this, currentPageNeedsFadeAnim);
		}

		::System::Void HandleUIStaticBlur(::System::Int32 instancedID, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_HANDLEUISTATICBLUR_OFFSET))(this, instancedID, isActive);
		}

		::System::Void OpenStaticBlurController(::System::Int32 instancedID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_OPENSTATICBLURCONTROLLER_OFFSET))(this, instancedID);
		}

		::System::Boolean CloseStaticBlurController()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_CLOSESTATICBLURCONTROLLER_OFFSET))(this);
		}

		::System::Boolean CloseStaticBlurController_1(::System::Int32 instancedID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_CLOSESTATICBLURCONTROLLER_1_OFFSET))(this, instancedID);
		}

		::System::Void HideStaticBlurController(::System::Int32 instancedID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_HIDESTATICBLURCONTROLLER_OFFSET))(this, instancedID);
		}

		::System::Void PostOpen3DModelChildController(::MoleMole::UIBase3DModelController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBase3DModelController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_POSTOPEN3DMODELCHILDCONTROLLER_OFFSET))(this, ctrl);
		}

		::System::Boolean NeedOverrideGamePause(::System::Boolean& needPause)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_NEEDOVERRIDEGAMEPAUSE_OFFSET))(this, needPause);
		}

		::System::Boolean NeedMuteInLevelSkillInputInStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER_NEEDMUTEINLEVELSKILLINPUTINSTREAMING_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_CLOSE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_AfterShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_AFTERSHOW_OFFSET))(this);
		}

		::System::Void __base_OnPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONPREPAREHIDE_OFFSET))(this);
		}

		::System::Void __base_PlayFadeOut(::System::Action* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_PLAYFADEOUT_OFFSET))(this, P0, P1);
		}

		::System::Single __base_PlayCloseAnim(::System::Action* P0, ::MIKOMFIBMBN P1, ::System::String* P2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*, ::MIKOMFIBMBN, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_PLAYCLOSEANIM_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_UpdateLayoutPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_UPDATELAYOUTPLATFORM_OFFSET))(this);
		}

		::System::Void __base_PrepareShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_PREPARESHOW_OFFSET))(this);
		}

		::System::Void __base_PostReleaseUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_POSTRELEASEUI_OFFSET))(this);
		}

		::System::Void __base_CreateProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_CREATEPROXY_OFFSET))(this);
		}

		::System::Void __base_DestroyClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_DESTROYCLEAN_OFFSET))(this);
		}

		::System::Void __base_DestroyProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_DESTROYPROXY_OFFSET))(this);
		}

		::System::Boolean __base_get_ShouldHandleInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_GET_SHOULDHANDLEINPUT_OFFSET))(this);
		}

		::System::Void __base_OnChildPrepareHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_ONCHILDPREPAREHIDE_OFFSET))(this);
		}

		::System::Void __base_RemoveFromParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_REMOVEFROMPARENT_OFFSET))(this);
		}

		::System::Void __base_TriggerOnHideBeforeAnimSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONHIDEBEFOREANIMSOUNDACTION_OFFSET))(this);
		}

		::System::Void __base_TriggerOnHideSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONHIDESOUNDACTION_OFFSET))(this);
		}

		::System::Void __base_TriggerOnShowSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWINDOWCONTROLLER___BASE_TRIGGERONSHOWSOUNDACTION_OFFSET))(this);
		}
	};
}
