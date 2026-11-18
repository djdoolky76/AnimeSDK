#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/UnityEngine/Vector2.h"

class EOBDMJEAAMJ;
class HCCEKKIMBNL;
class LKOINHNFAKE;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_AANDPPEGOJA_OFFSET UNITYSDK_OFFSET(0x147E6AF0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_AILKDMOPCAP_OFFSET UNITYSDK_OFFSET(0x147E5480)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_AJHOPCBMJLF_OFFSET UNITYSDK_OFFSET(0x147E6D60)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_AOCHCAGAHIC_OFFSET UNITYSDK_OFFSET(0x147E5D00)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_BCIOLJEBCFH_OFFSET UNITYSDK_OFFSET(0x147E6CF0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_CCMLJPDBKLD_OFFSET UNITYSDK_OFFSET(0x147E75F0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ENDBJNMELCD_OFFSET UNITYSDK_OFFSET(0x147E48D0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_FEEMIHCJCKJ_OFFSET UNITYSDK_OFFSET(0x147E6B40)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_FHOLJFPIIMF_OFFSET UNITYSDK_OFFSET(0x147E78B0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_GEHGIEMLGBC_OFFSET UNITYSDK_OFFSET(0x147E7D50)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x147E3380)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_HDCLJIJPNAH_OFFSET UNITYSDK_OFFSET(0x147E58A0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_HPJLFLCPIMI_OFFSET UNITYSDK_OFFSET(0x147E57A0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ICFLKOIGMJP_OFFSET UNITYSDK_OFFSET(0x147E3E30)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_KMIPIDFJFIN_OFFSET UNITYSDK_OFFSET(0x147E5CB0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_MIDIOKOBIAC_OFFSET UNITYSDK_OFFSET(0x147E55F0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147E3430)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x147E4CF0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x147E4750)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x147E4B00)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x147E4560)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147E44F0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x147E34C0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x147E3390)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x147E50D0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x147E5040)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x147E50E0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x147E5170)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x147E5260)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x147E5290)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x147E5320)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x147E53C0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x147E53D0)
#define MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x147E53E0)

namespace MoleMole
{
	inline static constexpr unsigned int UINyakichiPageController_TypeDefinitionIndex = 64816;

	class UINyakichiPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::System::Boolean* StaticGet_testLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UINyakichiPageController_TypeDefinitionIndex)->GetStaticField(0x11AB0);
		}
		::EOBDMJEAAMJ* _view; // 0x330
		::HCCEKKIMBNL* storeData; // 0x338
		::System::Int32 StoreIndex; // 0x340
		::System::Byte _padding0[0x4];
		::LKOINHNFAKE* OPOLMJLMHCD; // 0x348
		::MoleMole::UIGeneralDynamicTipsPopWindowController* PLMIOCJIIHL; // 0x350
		::System::Int32 FBKGFLADIDE; // 0x358
		::System::Int32 ONGGKCJALAN; // 0x35C
		::MoleMole::UIGeneralPopUpHintWidgetController* HJFCJGCCBDM; // 0x360
		::System::String* EONJMPLLBJH; // 0x368
		::System::String* NPLKIEIIKLD; // 0x370
		::System::String* AKFKOGKMFIA; // 0x378
		::System::String* DMIGAJOOIKF; // 0x380
		::System::String* AADIJBFFKGL; // 0x388
		::System::String* NINDHFGMHEL; // 0x390

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void AILKDMOPCAP(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_AILKDMOPCAP_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void ENDBJNMELCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ENDBJNMELCD_OFFSET))(this);
		}

		::System::Void HPJLFLCPIMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_HPJLFLCPIMI_OFFSET))(this);
		}

		::System::Void KMIPIDFJFIN(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_KMIPIDFJFIN_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void AOCHCAGAHIC(::System::Boolean HPHJPKJHKKG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_AOCHCAGAHIC_OFFSET))(this, HPHJPKJHKKG);
		}

		::System::Void AANDPPEGOJA(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_AANDPPEGOJA_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void FEEMIHCJCKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_FEEMIHCJCKJ_OFFSET))(this);
		}

		::System::Void BCIOLJEBCFH(::System::Int32 ABHBKFJKINO, ::System::Boolean LIEJIGMGGOL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_BCIOLJEBCFH_OFFSET))(this, ABHBKFJKINO, LIEJIGMGGOL);
		}

		::System::Void ICFLKOIGMJP(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_ICFLKOIGMJP_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void MIDIOKOBIAC(::System::String* BLGNOOLDEOF)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_MIDIOKOBIAC_OFFSET))(this, BLGNOOLDEOF);
		}

		::System::Void AJHOPCBMJLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_AJHOPCBMJLF_OFFSET))(this);
		}

		::System::Void HDCLJIJPNAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_HDCLJIJPNAH_OFFSET))(this);
		}

		::System::Void CCMLJPDBKLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_CCMLJPDBKLD_OFFSET))(this);
		}

		::System::Void FHOLJFPIIMF(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_FHOLJFPIIMF_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void GEHGIEMLGBC(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINYAKICHIPAGECONTROLLER_GEHGIEMLGBC_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
