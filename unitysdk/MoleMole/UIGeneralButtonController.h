#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEOOCBFJOOH.h"
#include "unitysdk/MoleMole/UIMonoController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/OIOMFDOEHLH.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class NotificationBadgeEx; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_ADDJUMPCLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x180434E0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_BINDREDSIGN_OFFSET UNITYSDK_OFFSET(0x18041E70)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_BINDVIEWCALLBACK_OFFSET UNITYSDK_OFFSET(0x18042960)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETBUTTONSTATEINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x18041BB0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETBUTTONSTATETEXTKEY_OFFSET UNITYSDK_OFFSET(0x180417E0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x18041CA0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETEFFECTENABLED_OFFSET UNITYSDK_OFFSET(0x18043490)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETTEXT_OFFSET UNITYSDK_OFFSET(0x18043430)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x180426C0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_REBINDVIEWCALLBACKADVANCE_OFFSET UNITYSDK_OFFSET(0x18042760)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_REMOVECLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x180428B0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1802CF70)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATEINTERACTABLE_1_OFFSET UNITYSDK_OFFSET(0x18041B60)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATEINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x180418D0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATETEXTKEY_1_OFFSET UNITYSDK_OFFSET(0x18041790)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATETEXTKEY_OFFSET UNITYSDK_OFFSET(0x1802AE30)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATE_1_OFFSET UNITYSDK_OFFSET(0x1802D100)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x18041CF0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETEFFECTENABLED_OFFSET UNITYSDK_OFFSET(0x17FFDB00)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x180419D0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETKEY_1_OFFSET UNITYSDK_OFFSET(0x180438C0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETKEY_OFFSET UNITYSDK_OFFSET(0x18043870)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETLOCK_OFFSET UNITYSDK_OFFSET(0x180426F0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x18042F70)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXTKEY_1_OFFSET UNITYSDK_OFFSET(0x180429F0)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXTKEY_OFFSET UNITYSDK_OFFSET(0x18041230)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x18042000)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x18041E10)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER_TRIGGERBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x18043750)
#define MOLEMOLE_UIGENERALBUTTONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18043920)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralButtonController_TypeDefinitionIndex = 39643;

	class UIGeneralButtonController : public ::MoleMole::UIMonoController
	{
	public:
		::UnityEngine::Transform* LockRoot; // 0x80
		::UnityEngine::UI::Extension::UIButtonEx* button; // 0x88
		::UnityEngine::UI::Extension::UILocalizationText* buttonText; // 0x90
		::UnityEngine::UI::Extension::UILocalizationText* buttonEffectText; // 0x98
		::System::Boolean effectOn; // 0xA0
		::System::Byte _padding0[0x7];
		::UnityEngine::UI::Extension::UILocalizationText* buttonTextGrey; // 0xA8
		::UnityEngine::UI::Extension::UILocalizationText* buttonTextWhite; // 0xB0
		::UnityEngine::RectTransform* arrowBg; // 0xB8
		::UnityEngine::RectTransform* grayBg; // 0xC0
		::MoleMole::NotificationBadgeEx* RedSign; // 0xC8
		::CEOOCBFJOOH _buttonState; // 0xD0
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::Dictionary_2<::CEOOCBFJOOH, ::System::String*>* _buttonStateTextKeys; // 0xD8
		::System::Collections::Generic::Dictionary_2<::CEOOCBFJOOH, ::System::Boolean>* _buttonStateInteractable; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetButtonStateTextKey(::CEOOCBFJOOH state, ::System::String* textKey)
		{
			return ((::System::Void(*)(::PVOID, ::CEOOCBFJOOH, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATETEXTKEY_OFFSET))(this, state, textKey);
		}

		::System::Void SetButtonStateTextKey_1(::System::Collections::Generic::Dictionary_2<::CEOOCBFJOOH, ::System::String*>* stateTextKeys)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::CEOOCBFJOOH, ::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATETEXTKEY_1_OFFSET))(this, stateTextKeys);
		}

		::System::String* GetButtonStateTextKey(::CEOOCBFJOOH state)
		{
			return ((::System::String*(*)(::PVOID, ::CEOOCBFJOOH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETBUTTONSTATETEXTKEY_OFFSET))(this, state);
		}

		::System::Void SetButtonStateInteractable(::CEOOCBFJOOH state, ::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::CEOOCBFJOOH, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATEINTERACTABLE_OFFSET))(this, state, interactable);
		}

		::System::Void SetButtonStateInteractable_1(::System::Collections::Generic::Dictionary_2<::CEOOCBFJOOH, ::System::Boolean>* stateInteractable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::CEOOCBFJOOH, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATEINTERACTABLE_1_OFFSET))(this, stateInteractable);
		}

		::System::Boolean GetButtonStateInteractable(::CEOOCBFJOOH state)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEOOCBFJOOH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETBUTTONSTATEINTERACTABLE_OFFSET))(this, state);
		}

		::CEOOCBFJOOH GetButtonState()
		{
			return ((::CEOOCBFJOOH(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETBUTTONSTATE_OFFSET))(this);
		}

		::System::Void SetButtonState(::OIOMFDOEHLH param)
		{
			return ((::System::Void(*)(::PVOID, ::OIOMFDOEHLH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATE_OFFSET))(this, param);
		}

		::System::Void BindRedSign(::Share::ENotificationBadgeType redType)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_BINDREDSIGN_OFFSET))(this, redType);
		}

		::System::Void SetButtonState_1(::CEOOCBFJOOH state, ::System::String* textStr)
		{
			return ((::System::Void(*)(::PVOID, ::CEOOCBFJOOH, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETBUTTONSTATE_1_OFFSET))(this, state, textStr);
		}

		::System::Boolean get_interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Void SafeSetActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SAFESETACTIVE_OFFSET))(this, value);
		}

		::System::Void SetLock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETLOCK_OFFSET))(this, value);
		}

		::System::Void RebindViewCallbackAdvance(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_REBINDVIEWCALLBACKADVANCE_OFFSET))(this, callback);
		}

		::System::Void BindViewCallback(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_BINDVIEWCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RemoveClickListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_REMOVECLICKLISTENER_OFFSET))(this);
		}

		::System::Void SetText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXT_OFFSET))(this, text);
		}

		::System::Void SetTextKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXTKEY_OFFSET))(this, key);
		}

		::System::Void SetTextKey_1(::System::String* key, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXTKEY_1_OFFSET))(this, key, args);
		}

		::System::Void SetTextColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETTEXTCOLOR_OFFSET))(this, color);
		}

		::System::String* GetText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETTEXT_OFFSET))(this);
		}

		::System::Void SetEffectEnabled(::System::Boolean on)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETEFFECTENABLED_OFFSET))(this, on);
		}

		::System::Boolean GetEffectEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_GETEFFECTENABLED_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void AddJumpClickListener(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_ADDJUMPCLICKLISTENER_OFFSET))(this, callback);
		}

		::System::Boolean TriggerButtonClick(::System::Boolean isSkipCDCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_TRIGGERBUTTONCLICK_OFFSET))(this, isSkipCDCheck);
		}

		::System::Void SetKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETKEY_OFFSET))(this, key);
		}

		::System::Void SetKey_1(::System::String* key, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALBUTTONCONTROLLER_SETKEY_1_OFFSET))(this, key, args);
		}
	};
}
