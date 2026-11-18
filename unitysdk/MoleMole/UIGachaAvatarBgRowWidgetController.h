#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaBgRowWidget.h"

class BPHGNMNLLHF;
class GALOKGMMHKH;
class PGPEKBONDHI;
namespace MoleMole { class UIActivityDemoTrialPreviewBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGachaWidgetContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_FAPEGOBMNGO_OFFSET UNITYSDK_OFFSET(0x184C7C00)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ISPLAYINGANIMATION_OFFSET UNITYSDK_OFFSET(0x184C75C0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184C74B0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONENTERANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x184C7850)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONENTEREXCHANGEANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x184C7890)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184C7540)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184C6F30)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184C7010)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x184C70F0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_PLAYENTERANIMATION_OFFSET UNITYSDK_OFFSET(0x184C7630)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x184C7700)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x184C78D0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184C79B0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184C7A40)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184C7AD0)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184C7B60)
#define MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0x184C7BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaAvatarBgRowWidgetController_TypeDefinitionIndex = 51816;

	class UIGachaAvatarBgRowWidgetController : public ::MoleMole::UIGachaBgRowWidget
	{
	public:
		::GALOKGMMHKH* _view; // 0x2C8
		::MoleMole::UIActivityDemoTrialPreviewBtnWidgetController* roleNameplate; // 0x2D0
		::MoleMole::UIGachaWidgetContextBase* DAAAEJDBNFI; // 0x2D8
		::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* CEGMBPJOPMN; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean IsPlayingAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ISPLAYINGANIMATION_OFFSET))(this);
		}

		::System::Void PlayEnterAnimation(::System::String* extensionName, ::System::Action* enterCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_PLAYENTERANIMATION_OFFSET))(this, extensionName, enterCallback);
		}

		::System::Void PlayFadeOut(::System::Action* callback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_PLAYFADEOUT_OFFSET))(this, callback, animSpeed);
		}

		::System::Void OnEnterAnimationEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONENTERANIMATIONEND_OFFSET))(this);
		}

		::System::Void OnEnterExchangeAnimationEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_ONENTEREXCHANGEANIMATIONEND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_PlayFadeOut(::System::Action* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER___BASE_PLAYFADEOUT_OFFSET))(this, P0, P1);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Void FAPEGOBMNGO(::PGPEKBONDHI* NKNHMMPBEOH, ::System::Boolean JNKLLBKCHAM)
		{
			return ((::System::Void(*)(::PVOID, ::PGPEKBONDHI*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAAVATARBGROWWIDGETCONTROLLER_FAPEGOBMNGO_OFFSET))(this, NKNHMMPBEOH, JNKLLBKCHAM);
		}
	};
}
