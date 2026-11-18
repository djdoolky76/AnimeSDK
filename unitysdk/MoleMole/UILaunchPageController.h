#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class DGDNKBFMHME;
class DIFEAEFEEIM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_UILAUNCHPAGECONTROLLER_BAIJMPLPBIP_OFFSET UNITYSDK_OFFSET(0x179540C0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_BGMLMDHCDCE_OFFSET UNITYSDK_OFFSET(0x17955170)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_CMOIKKDLLBJ_OFFSET UNITYSDK_OFFSET(0x17952DC0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_FIGNKBAILPG_OFFSET UNITYSDK_OFFSET(0x17954640)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_FILDNHFBOND_OFFSET UNITYSDK_OFFSET(0x17954410)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17952CF0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_GPHLAHLLCGP_OFFSET UNITYSDK_OFFSET(0x17954BF0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_HEGPENKNNGE_OFFSET UNITYSDK_OFFSET(0x17953E60)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_KPFJKNMKINF_OFFSET UNITYSDK_OFFSET(0x17955010)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_LMHMKENFFOH_OFFSET UNITYSDK_OFFSET(0x17954200)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_MKNIDCIFHCJ_OFFSET UNITYSDK_OFFSET(0x17954B30)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_NBIJLCLOANG_OFFSET UNITYSDK_OFFSET(0x17954D00)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_OLKLBMCMKFJ_OFFSET UNITYSDK_OFFSET(0x17953E20)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17953240)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x179532D0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17952D60)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17953C00)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17953450)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_PKNEELEKMIA_OFFSET UNITYSDK_OFFSET(0x17954BE0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17952D00)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17953C50)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17953CA0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17953D30)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17953D60)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17953D70)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17953D80)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17953D90)

namespace MoleMole
{
	inline static constexpr unsigned int UILaunchPageController_TypeDefinitionIndex = 49584;

	class UILaunchPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Single waitSkipTime; // 0x320
		::System::Boolean DIOEDFDJMOK; // 0x324
		::System::Byte _padding0[0x3];
		::UnityEngine::UI::Extension::UIButtonEx* HNAMOOMCGLM; // 0x328
		::DIFEAEFEEIM* _view; // 0x330
		::UnityEngine::Animation* BECGPNGEOEM; // 0x338
		::UnityEngine::Animation* HALKMHJJACA; // 0x340
		::UnityEngine::Animation* PDMBOLBPIGD; // 0x348
		::System::Single PPGBCKJGDGP; // 0x350
		::System::Byte _padding1[0x4];
		::DGDNKBFMHME* PIEIABDHLAN; // 0x358
		::UnityEngine::UI::RawImage* OLHHFMKKALO; // 0x360
		::System::Single GIMLKOCIMDL; // 0x368
		::Foundation::Coroutine::CoroutineHandle OJKPNLHIMEC; // 0x36C
		::UnityEngine::Animation* OEPBCIGFAND; // 0x370
		::System::String* HLHDCLGJOKL; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		static ::System::Boolean OLKLBMCMKFJ()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_OLKLBMCMKFJ_OFFSET))();
		}

		::System::Void HEGPENKNNGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_HEGPENKNNGE_OFFSET))(this);
		}

		::System::Void BAIJMPLPBIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_BAIJMPLPBIP_OFFSET))(this);
		}

		::System::Void LMHMKENFFOH(::DGDNKBFMHME* FMJAFFDJMBB)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_LMHMKENFFOH_OFFSET))(this, FMJAFFDJMBB);
		}

		::System::Void FIGNKBAILPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_FIGNKBAILPG_OFFSET))(this);
		}

		::System::Void PKNEELEKMIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_PKNEELEKMIA_OFFSET))(this);
		}

		::System::Void GPHLAHLLCGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_GPHLAHLLCGP_OFFSET))(this);
		}

		::System::Void NBIJLCLOANG(::System::Action* KIAGKPDIDDH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_NBIJLCLOANG_OFFSET))(this, KIAGKPDIDDH);
		}

		::System::String* MKNIDCIFHCJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_MKNIDCIFHCJ_OFFSET))(this);
		}

		::System::Void FILDNHFBOND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_FILDNHFBOND_OFFSET))(this);
		}

		::System::Void KPFJKNMKINF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_KPFJKNMKINF_OFFSET))(this);
		}

		::System::Void CMOIKKDLLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_CMOIKKDLLBJ_OFFSET))(this);
		}

		::System::Void BGMLMDHCDCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_BGMLMDHCDCE_OFFSET))(this);
		}
	};
}
