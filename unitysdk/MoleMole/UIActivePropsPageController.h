#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/OKKIMONLGJD.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class DJFILCFPGAE;
class DOFIMCNIHEH;
class MFKICFOILDD;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIActivePropsItemIconWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ATLEASTONETABUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C103E10)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_BELAOHKDDEH_OFFSET UNITYSDK_OFFSET(0x1C1042A0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_EOENBBPPCMO_OFFSET UNITYSDK_OFFSET(0x1C103FB0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_FLDOMOFEAPP_OFFSET UNITYSDK_OFFSET(0x1C1055E0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1C102DD0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_HDAENGJIGMC_OFFSET UNITYSDK_OFFSET(0x1C104CC0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_JJFAJAKEJGK_OFFSET UNITYSDK_OFFSET(0x1C104EE0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x1C103180)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_LCFEIODMKBH_OFFSET UNITYSDK_OFFSET(0x1C103340)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_LCJEGOPMGHP_OFFSET UNITYSDK_OFFSET(0x1C105750)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_LIEBFAJBEMG_OFFSET UNITYSDK_OFFSET(0x1C105450)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1C102DE0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1C1047E0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1C1043E0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1C104480)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1C104520)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1C103BC0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1C103D80)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1C102E70)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1048B0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1C104960)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1C1049F0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1C104AA0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1C104B30)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1C104BC0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1C104C70)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1C104CA0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1C104CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPageController_TypeDefinitionIndex = 63622;

	class UIActivePropsPageController : public ::MoleMole::UIWindowController
	{
	public:
		::MFKICFOILDD* _view; // 0x320
		::System::Collections::Generic::List_1<::DOFIMCNIHEH*>* CINPHMLGMKJ; // 0x328
		::System::Int32 LABNNEFGEPE; // 0x330
		::System::Byte _padding0[0x4];
		::MoleMole::UIActivePropsItemIconWidgetController* IEFIOICBHFE; // 0x338
		::System::Collections::Generic::Dictionary_2<::System::String*, ::DJFILCFPGAE*>* ABLIBPENMIE; // 0x340
		::DJFILCFPGAE* BOJKHJFLNML; // 0x348
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITabButton*>* OAAHBEJMFOG; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::NotificationBadge*>* AFAPCNLDBLJ; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		static ::System::Boolean AtLeastOneTabUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ATLEASTONETABUNLOCK_OFFSET))();
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::OKKIMONLGJD result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::OKKIMONLGJD result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::OKKIMONLGJD P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::OKKIMONLGJD P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::OKKIMONLGJD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		static ::System::Boolean BELAOHKDDEH(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_BELAOHKDDEH_OFFSET))(ABHBKFJKINO);
		}

		::System::Void JJFAJAKEJGK(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_JJFAJAKEJGK_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Int32 FLDOMOFEAPP(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_FLDOMOFEAPP_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void LCJEGOPMGHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_LCJEGOPMGHP_OFFSET))(this);
		}

		::System::String* LIEBFAJBEMG(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_LIEBFAJBEMG_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void LCFEIODMKBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_LCFEIODMKBH_OFFSET))(this);
		}

		static ::System::Boolean EOENBBPPCMO(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_EOENBBPPCMO_OFFSET))(ABHBKFJKINO);
		}

		::System::Void KDGMEFEJMGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_KDGMEFEJMGJ_OFFSET))(this);
		}

		static ::System::Int32 HDAENGJIGMC(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_HDAENGJIGMC_OFFSET))(ABHBKFJKINO);
		}
	};
}
