#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJLOGHOHAGG.h"
#include "unitysdk/MoleMole/GamepadNavTargetConfig.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/SpecialGamepadInputHintType.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralKeyPanelWidgetController; }
namespace System { class String; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define MOLEMOLE_MONOINPUTKEY_CLEARGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0x124855E0)
#define MOLEMOLE_MONOINPUTKEY_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x12485630)
#define MOLEMOLE_MONOINPUTKEY_EBFLAKCEGCK_OFFSET UNITYSDK_OFFSET(0x12484800)
#define MOLEMOLE_MONOINPUTKEY_FORCECREATEGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0x12485880)
#define MOLEMOLE_MONOINPUTKEY_GETGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0x12484520)
#define MOLEMOLE_MONOINPUTKEY_GET_BINDEDBUTTON_OFFSET UNITYSDK_OFFSET(0x12483CD0)
#define MOLEMOLE_MONOINPUTKEY_GET_BINDEDTEXT_OFFSET UNITYSDK_OFFSET(0x12483CF0)
#define MOLEMOLE_MONOINPUTKEY_GET_HANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x12483C90)
#define MOLEMOLE_MONOINPUTKEY_GET_HIDEHINTWHENBUTTONDISABLE_OFFSET UNITYSDK_OFFSET(0x12483CE0)
#define MOLEMOLE_MONOINPUTKEY_GET_HIDEHINTWHENCANNOTNAVIGATETO_OFFSET UNITYSDK_OFFSET(0x12483D40)
#define MOLEMOLE_MONOINPUTKEY_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x12483C70)
#define MOLEMOLE_MONOINPUTKEY_GET_ISHANDLELONGPRESS_OFFSET UNITYSDK_OFFSET(0x12483D00)
#define MOLEMOLE_MONOINPUTKEY_GET_ISHIDEHINT_OFFSET UNITYSDK_OFFSET(0x12483D10)
#define MOLEMOLE_MONOINPUTKEY_GET_LOGICEVENT_OFFSET UNITYSDK_OFFSET(0x12483CC0)
#define MOLEMOLE_MONOINPUTKEY_GET_NOTIFICATIONBADGETYPE_OFFSET UNITYSDK_OFFSET(0x12483D20)
#define MOLEMOLE_MONOINPUTKEY_GET_NOTIFICATIONKEY_OFFSET UNITYSDK_OFFSET(0x12483D30)
#define MOLEMOLE_MONOINPUTKEY_GET_PRIORITYLEVEL_OFFSET UNITYSDK_OFFSET(0x12483CA0)
#define MOLEMOLE_MONOINPUTKEY_GET_SPECIALGAMEPADINPUTHINT_OFFSET UNITYSDK_OFFSET(0x12483CB0)
#define MOLEMOLE_MONOINPUTKEY_INITGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0x124849D0)
#define MOLEMOLE_MONOINPUTKEY_INIT_OFFSET UNITYSDK_OFFSET(0x12483EE0)
#define MOLEMOLE_MONOINPUTKEY_ISCONFIGEMPTY_OFFSET UNITYSDK_OFFSET(0x12483E80)
#define MOLEMOLE_MONOINPUTKEY_ISWORKABLE_OFFSET UNITYSDK_OFFSET(0x12483D50)
#define MOLEMOLE_MONOINPUTKEY_JAGJFELKNBK_OFFSET UNITYSDK_OFFSET(0x124845D0)
#define MOLEMOLE_MONOINPUTKEY_JMPNKFCKKFG_OFFSET UNITYSDK_OFFSET(0x12485B70)
#define MOLEMOLE_MONOINPUTKEY_LOFMNKAMILC_OFFSET UNITYSDK_OFFSET(0x12483C20)
#define MOLEMOLE_MONOINPUTKEY_NDNEICHADIC_OFFSET UNITYSDK_OFFSET(0x12484A30)
#define MOLEMOLE_MONOINPUTKEY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12483B20)
#define MOLEMOLE_MONOINPUTKEY_RESETLAYOUTELEMENTIGNORE_OFFSET UNITYSDK_OFFSET(0x124841E0)
#define MOLEMOLE_MONOINPUTKEY_RESETLOGINEVENTANDTEXT_OFFSET UNITYSDK_OFFSET(0x124858D0)
#define MOLEMOLE_MONOINPUTKEY_RESETTEXTKEY_OFFSET UNITYSDK_OFFSET(0x12485680)
#define MOLEMOLE_MONOINPUTKEY_SETGENERALKEYHINTSTATE_OFFSET UNITYSDK_OFFSET(0x124847A0)
#define MOLEMOLE_MONOINPUTKEY_SETGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0x124844D0)
#define MOLEMOLE_MONOINPUTKEY_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x12484570)
#define MOLEMOLE_MONOINPUTKEY_SET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x12483C80)
#define MOLEMOLE_MONOINPUTKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x12485B20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInputKey_TypeDefinitionIndex = 77998;

	class MonoInputKey : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 _priorityLevel; // 0x18
		::MoleMole::SpecialGamepadInputHintType _specialGamepadInputHint; // 0x1C
		::MoleMole::InputLogicEventType _logicEvent; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::UI::Text* _bindedText; // 0x28
		::System::String* textKey; // 0x30
		::System::Boolean _handleInput; // 0x38
		::System::Byte _padding1[0x7];
		::UnityEngine::UI::Extension::UIButtonBase* _bindedButton; // 0x40
		::System::Boolean _hideHintWhenButtonDisable; // 0x48
		::System::Boolean _isHandleLongPress; // 0x49
		::System::Boolean _isHideHint; // 0x4A
		::System::Byte _padding2[0x1];
		::Share::ENotificationBadgeType _notificationBadgeType; // 0x4C
		::System::String* _notificationKey; // 0x50
		::System::Boolean isLockScInCn; // 0x58
		::System::Byte _padding3[0x7];
		::MoleMole::GamepadNavTargetConfig CanNavigateToModuleConfig; // 0x60
		::IJLOGHOHAGG TargetModuleHintCheckType; // 0x70
		::System::Boolean _hideHintWhenCanNotNavigateTo; // 0x74
		::System::Byte _padding4[0x3];
		::UnityEngine::UI::LayoutElement* AttachedLayoutElement; // 0x78
		::System::Boolean WorkOnAllLayoutPlatform; // 0x80
		::System::Boolean KBLJHNHFHCD; // 0x81
		::System::Boolean DCDLBHBDGBG; // 0x82
		::System::Boolean HNDJPLELBIE; // 0x83
		::System::Boolean KGCCLLLMKOD; // 0x84
		::System::Byte _padding5[0x3];
		::MoleMole::UIGeneralKeyPanelWidgetController* EKMDFOBNBNP; // 0x88
		::MoleMole::UIBaseController* GBKDDFANKNN; // 0x90
		::System::Boolean PLBJOALCEDD; // 0x98
		::System::Boolean LEGDDCGFGBD; // 0x99

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_ONENABLE_OFFSET))(this);
		}

		::System::Boolean get_IsCollected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_ISCOLLECTED_OFFSET))(this);
		}

		::System::Void set_IsCollected(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_SET_ISCOLLECTED_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_handleInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_HANDLEINPUT_OFFSET))(this);
		}

		::System::UInt32 get_priorityLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_PRIORITYLEVEL_OFFSET))(this);
		}

		::MoleMole::SpecialGamepadInputHintType get_specialGamepadInputHint()
		{
			return ((::MoleMole::SpecialGamepadInputHintType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_SPECIALGAMEPADINPUTHINT_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType get_logicEvent()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_LOGICEVENT_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UIButtonBase* get_bindedButton()
		{
			return ((::UnityEngine::UI::Extension::UIButtonBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_BINDEDBUTTON_OFFSET))(this);
		}

		::System::Boolean get_HideHintWhenButtonDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_HIDEHINTWHENBUTTONDISABLE_OFFSET))(this);
		}

		::UnityEngine::UI::Text* get_bindedText()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_BINDEDTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsHandleLongPress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_ISHANDLELONGPRESS_OFFSET))(this);
		}

		::System::Boolean get_IsHideHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_ISHIDEHINT_OFFSET))(this);
		}

		::Share::ENotificationBadgeType get_NotificationBadgeType()
		{
			return ((::Share::ENotificationBadgeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_NOTIFICATIONBADGETYPE_OFFSET))(this);
		}

		::System::String* get_NotificationKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_NOTIFICATIONKEY_OFFSET))(this);
		}

		::System::Boolean get_HideHintWhenCanNotNavigateTo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_HIDEHINTWHENCANNOTNAVIGATETO_OFFSET))(this);
		}

		::System::Boolean IsWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_ISWORKABLE_OFFSET))(this);
		}

		::System::Boolean IsConfigEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_ISCONFIGEMPTY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_INIT_OFFSET))(this);
		}

		::System::Void ResetLayoutElementIgnore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_RESETLAYOUTELEMENTIGNORE_OFFSET))(this);
		}

		::System::Void SetGeneralKeyPanel(::MoleMole::UIGeneralKeyPanelWidgetController* JOLDOMEIKEF)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralKeyPanelWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_SETGENERALKEYPANEL_OFFSET))(this, JOLDOMEIKEF);
		}

		::MoleMole::UIGeneralKeyPanelWidgetController* GetGeneralKeyPanel()
		{
			return ((::MoleMole::UIGeneralKeyPanelWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GETGENERALKEYPANEL_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean PFPJFCGFNFL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_SETINTERACTABLE_OFFSET))(this, PFPJFCGFNFL);
		}

		::System::Void SetGeneralKeyHintState(::System::Boolean JFGNALKCJDG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_SETGENERALKEYHINTSTATE_OFFSET))(this, JFGNALKCJDG);
		}

		::System::Void InitGeneralKeyPanel(::MoleMole::UIBaseController* IOGICFHBJBE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_INITGENERALKEYPANEL_OFFSET))(this, IOGICFHBJBE);
		}

		::System::Void ClearGeneralKeyPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_CLEARGENERALKEYPANEL_OFFSET))(this);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_DOCOPYRESET_OFFSET))(this);
		}

		::System::Void ResetTextKey(::System::String* MCOHLHMKLIP)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_RESETTEXTKEY_OFFSET))(this, MCOHLHMKLIP);
		}

		::System::Void ForceCreateGeneralKeyPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_FORCECREATEGENERALKEYPANEL_OFFSET))(this);
		}

		::System::Void ResetLoginEventAndText(::MoleMole::InputLogicEventType MBEHILFGMGI, ::System::String* PPCLIPANAKF)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_RESETLOGINEVENTANDTEXT_OFFSET))(this, MBEHILFGMGI, PPCLIPANAKF);
		}

		::System::Void NDNEICHADIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_NDNEICHADIC_OFFSET))(this);
		}

		::System::Void LOFMNKAMILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_LOFMNKAMILC_OFFSET))(this);
		}

		::System::Void JAGJFELKNBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_JAGJFELKNBK_OFFSET))(this);
		}

		::System::Void EBFLAKCEGCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_EBFLAKCEGCK_OFFSET))(this);
		}

		::System::Void JMPNKFCKKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_JMPNKFCKKFG_OFFSET))(this);
		}
	};
}
