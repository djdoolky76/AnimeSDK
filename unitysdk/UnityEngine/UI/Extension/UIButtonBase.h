#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Button.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityEvent; }

#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BF50560)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_CANCELPENDINGPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1BF50E50)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_CHECKCOLDDOWN_OFFSET UNITYSDK_OFFSET(0x1BF510C0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_CHECKPROTECT_OFFSET UNITYSDK_OFFSET(0x1BF519D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_CLEARSTATICSTATEONSUBSYSTEMREGISTRATION_OFFSET UNITYSDK_OFFSET(0x1BF4FBF0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_GET_CANINTERACTFORMONOINPUTKEY_OFFSET UNITYSDK_OFFSET(0x1BF4FBD0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_GET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x1BF4FBB0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_HANDLEPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1BF51930)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_HANDLEPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1BF51980)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ISINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1BF509C0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_MAYINTERACT_OFFSET UNITYSDK_OFFSET(0x1BF50890)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1BF4FC30)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1BF4FF60)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BF505D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1BF50230)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x1BF50500)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1BF514D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1BF512B0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1BF51570)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1BF51660)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1BF513D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1BF517F0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1BF51750)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1BF51890)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1BF518E0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1BF517A0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_PASSCLICKPRECHECK_OFFSET UNITYSDK_OFFSET(0x1BF51B80)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETCANTCLICKWHENHASDRAGED_OFFSET UNITYSDK_OFFSET(0x1BF4FF00)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETCLICKPRECHECK_OFFSET UNITYSDK_OFFSET(0x1BF51380)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETGAMEPADMODULELOSTFOCUSSTATE_OFFSET UNITYSDK_OFFSET(0x1BF50740)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETPOINTERDOWNINNER_OFFSET UNITYSDK_OFFSET(0x1BF50C10)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETPOINTERUPINNER_OFFSET UNITYSDK_OFFSET(0x1BF50E00)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SET_CANINTERACTFORMONOINPUTKEY_OFFSET UNITYSDK_OFFSET(0x1BF4FBE0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x1BF4FBC0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SIMULATEPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1BF50EA0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SIMULATEPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1BF50A60)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SIMULATEPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1BF50C70)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_TRIGGERPRESSEDUP_OFFSET UNITYSDK_OFFSET(0x1BF51B40)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF51C10)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BF51CE0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ISINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1BF51CF0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BF51DA0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1BF51DB0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1BF51E60)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1BF51E70)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1BF51E80)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1BF51E90)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonBase_TypeDefinitionIndex = 47504;

	class UIButtonBase : public ::UnityEngine::UI::Button
	{
	public:
		static ::System::Single* StaticGet__lastPressStamp()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIButtonBase_TypeDefinitionIndex)->GetStaticField(0x132A0);
		}
		// static const ::System::String* LostFocusAnimBoolParams; // 0x0
		::UnityEngine::Events::UnityEvent* clickedEvent; // 0x100
		::System::Boolean _CanInteract_k__BackingField; // 0x108
		::System::Boolean _CanInteractForMonoInputKey_k__BackingField; // 0x109
		::System::Boolean isClickProtect; // 0x10A
		::System::Boolean immediatelyDrag; // 0x10B
		::System::Boolean _isPointerDown; // 0x10C
		::System::Boolean _canClick; // 0x10D
		::System::Boolean _isLostFocus; // 0x10E
		::System::Byte _padding0[0x1];
		::System::Func_1<::System::Boolean>* _clickPreCheck; // 0x110
		::System::Boolean IgnoreFading; // 0x118
		::System::Boolean DisableDragPass; // 0x119

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_GET_CANINTERACT_OFFSET))(this);
		}

		::System::Void set_CanInteract(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SET_CANINTERACT_OFFSET))(this, value);
		}

		::System::Boolean get_CanInteractForMonoInputKey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_GET_CANINTERACTFORMONOINPUTKEY_OFFSET))(this);
		}

		::System::Void set_CanInteractForMonoInputKey(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SET_CANINTERACTFORMONOINPUTKEY_OFFSET))(this, value);
		}

		static ::System::Void ClearStaticStateOnSubsystemRegistration()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_CLEARSTATICSTATEONSUBSYSTEMREGISTRATION_OFFSET))();
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void SetCantClickWhenHasDraged(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETCANTCLICKWHENHASDRAGED_OFFSET))(this, eventData);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, eventData);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONENABLE_OFFSET))(this);
		}

		::System::Boolean MayInteract(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_MAYINTERACT_OFFSET))(this, eventData);
		}

		::System::Boolean SimulatePointerDown(::System::Boolean isSkipCDCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SIMULATEPOINTERDOWN_OFFSET))(this, isSkipCDCheck);
		}

		::System::Boolean SimulatePointerUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SIMULATEPOINTERUP_OFFSET))(this);
		}

		::System::Void CancelPendingPointerClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_CANCELPENDINGPOINTERCLICK_OFFSET))(this);
		}

		::System::Boolean SimulatePointerClick(::System::Boolean isSkipCDCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SIMULATEPOINTERCLICK_OFFSET))(this, isSkipCDCheck);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void SetClickPreCheck(::System::Func_1<::System::Boolean>* checkCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETCLICKPRECHECK_OFFSET))(this, checkCB);
		}

		::System::Boolean IsInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ISINTERACTABLE_OFFSET))(this);
		}

		::System::Void SetPointerDownInner(::System::Boolean isPointerDown)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETPOINTERDOWNINNER_OFFSET))(this, isPointerDown);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void SetPointerUpInner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETPOINTERUPINNER_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void SetGamepadModuleLostFocusState(::System::Boolean isLostFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_SETGAMEPADMODULELOSTFOCUSSTATE_OFFSET))(this, isLostFocus);
		}

		::System::Void OnRawPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnRawPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void OnRawPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnRawPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void OnRawPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_ONRAWPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_HANDLEPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_HANDLEPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Boolean CheckColdDown(::System::Boolean isSkipCDCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_CHECKCOLDDOWN_OFFSET))(this, isSkipCDCheck);
		}

		static ::System::Boolean CheckProtect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_CHECKPROTECT_OFFSET))();
		}

		::System::Void TriggerPressedUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_TRIGGERPRESSEDUP_OFFSET))(this);
		}

		::System::Boolean PassClickPreCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE_PASSCLICKPRECHECK_OFFSET))(this);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_AWAKE_OFFSET))(this);
		}

		::System::Boolean __base_IsInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ISINTERACTABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnPointerClick(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERCLICK_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERDOWN_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERENTER_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTEREXIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONBASE___BASE_ONPOINTERUP_OFFSET))(this, P0);
		}
	};
}
