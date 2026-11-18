#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/GBJMDNJNIBO.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/OKKIMONLGJD.h"

class DKMNLNEBMOK;
class OPDAKKMNLHA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x18E46420)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_CLBFHIFENKI_OFFSET UNITYSDK_OFFSET(0x18E47B80)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GETMODELICON_OFFSET UNITYSDK_OFFSET(0x18E47100)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GETVOICEICON_OFFSET UNITYSDK_OFFSET(0x18E470B0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x18E46250)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18E46240)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_HBLJOJNFHHN_OFFSET UNITYSDK_OFFSET(0x18E478F0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_NJNLMOMBNDL_OFFSET UNITYSDK_OFFSET(0x18E47290)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E469B0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18E47480)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18E47150)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18E46A40)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E46DA0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18E46260)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E475C0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E475D0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18E47660)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18E47710)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18E477C0)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E47850)
#define MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18E47860)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameReviewDialogPopWindowController_TypeDefinitionIndex = 72068;

	class UIGalgameReviewDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::UnityEngine::Sprite** StaticGet_CDJNDKHCNMP()
		{
			return (::UnityEngine::Sprite**)Il2CppClass::FromTypeDefinitionIndex(UIGalgameReviewDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0x4C3B0);
		}
		static ::UnityEngine::Sprite** StaticGet_KEMPCOBLHOK()
		{
			return (::UnityEngine::Sprite**)Il2CppClass::FromTypeDefinitionIndex(UIGalgameReviewDialogPopWindowController_TypeDefinitionIndex)->GetStaticField(0x4C3B8);
		}
		// static const ::System::String* IEHKDBDMNEF; // 0x0
		// static const ::System::String* COEILNIKHNB; // 0x0
		::DKMNLNEBMOK* _view; // 0x320
		::System::Action* MMGMBBDCCDL; // 0x328
		::Foundation::AssetRequestHandle DIOHALLIMHP; // 0x330
		::Foundation::AssetRequestHandle MLADPJOIEMH; // 0x350
		::System::Int32 FIEPNHCICJC; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::GBJMDNJNIBO get_HotSwitchRootLayerState()
		{
			return ((::GBJMDNJNIBO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		static ::UnityEngine::Sprite* GetVoiceIcon()
		{
			return ((::UnityEngine::Sprite*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GETVOICEICON_OFFSET))();
		}

		static ::UnityEngine::Sprite* GetModelIcon()
		{
			return ((::UnityEngine::Sprite*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_GETMODELICON_OFFSET))();
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::OKKIMONLGJD result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::OKKIMONLGJD result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::OKKIMONLGJD P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::OKKIMONLGJD P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void HBLJOJNFHHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_HBLJOJNFHHN_OFFSET))(this);
		}

		::System::Void BHCNMKAFFNI(::System::Collections::Generic::List_1<::OPDAKKMNLHA*>* DJLOKMMLFJC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OPDAKKMNLHA*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_BHCNMKAFFNI_OFFSET))(this, DJLOKMMLFJC);
		}

		::System::Void NJNLMOMBNDL(::System::Int32 ABHBKFJKINO, ::System::Boolean LIEJIGMGGOL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_NJNLMOMBNDL_OFFSET))(this, ABHBKFJKINO, LIEJIGMGGOL);
		}

		::System::Void CLBFHIFENKI(::System::Collections::Generic::List_1<::OPDAKKMNLHA*>* DJLOKMMLFJC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OPDAKKMNLHA*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEREVIEWDIALOGPOPWINDOWCONTROLLER_CLBFHIFENKI_OFFSET))(this, DJLOKMMLFJC);
		}
	};
}
