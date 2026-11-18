#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Sirenix/Serialization/SerializationData.h"
#include "unitysdk/UnityEngine/UI/Extension/UIButtonBase.h"
#include "unitysdk/UnityEngine/UI/Extension/UIButtonEx_ButtonState.h"
#include "unitysdk/UnityEngine/UI/Extension/UIButtonEx_ClickSoundType.h"
#include "unitysdk/UnityEngine/UI/Extension/UIButtonEx_LongPressState.h"

namespace MoleMole::Config { class ConfigSoundActionIntending; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx_UIButtonExEvent; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger_ScrollCallback; }

#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ADDBUTTONCLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x1D20EE20)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_AFTERPRESSEDUPANIM_OFFSET UNITYSDK_OFFSET(0x1D20E200)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D20F180)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_CLEARPOINTERSTATE_OFFSET UNITYSDK_OFFSET(0x1D20D6A0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_DEALBUTTONEXCLICK_OFFSET UNITYSDK_OFFSET(0x1D20F3D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ENABLE_OFFSET UNITYSDK_OFFSET(0x1D20E830)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GETLONGPRESSTIME_OFFSET UNITYSDK_OFFSET(0x1D20F950)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GET_BUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x1D20C8F0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x1D20DC70)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D20DC60)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1D20CD00)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1D20C910)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1D20D4D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1D20D720)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1D20CDB0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTERDOWNACTION_OFFSET UNITYSDK_OFFSET(0x1D20DFC0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTERENTERACTION_OFFSET UNITYSDK_OFFSET(0x1D20E080)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTEREXITACTION_OFFSET UNITYSDK_OFFSET(0x1D20E0E0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTERUPACTION_OFFSET UNITYSDK_OFFSET(0x1D20E020)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D20FB50)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D20F9D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1D20D960)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D20E140)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D20E670)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1D20DA00)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDROP_OFFSET UNITYSDK_OFFSET(0x1D20D8F0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D20ECD0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1D20DAA0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1D20FED0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D20EFB0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_PLAYCLICKSOUND_OFFSET UNITYSDK_OFFSET(0x1D20F6D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_PREPARECLICKSOUND_OFFSET UNITYSDK_OFFSET(0x1D20F510)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x1D20CC60)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_REMOVEBUTTONCLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x1D20EE80)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_REMOVECLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x1D20EF10)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_RESETTRIGGER_OFFSET UNITYSDK_OFFSET(0x1D20EB00)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SELECT_OFFSET UNITYSDK_OFFSET(0x1D20E2A0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETLONGPRESSTRIGGERTIMEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1D20E5C0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETNORMALIFINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1D20DE80)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETNORMAL_OFFSET UNITYSDK_OFFSET(0x1D20DDB0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETPRESSED_OFFSET UNITYSDK_OFFSET(0x1D20DCD0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x1D20E470)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETSELECT_OFFSET UNITYSDK_OFFSET(0x1D20DEE0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SET_BUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x1D20C900)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SIRENIX_SERIALIZATION_ISUPPORTSPREFABSERIALIZATION_GET_SERIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0x1D20DB40)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SIRENIX_SERIALIZATION_ISUPPORTSPREFABSERIALIZATION_SET_SERIALIZATIONDATA_OFFSET UNITYSDK_OFFSET(0x1D20DBC0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_START_OFFSET UNITYSDK_OFFSET(0x1D20F290)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_STOPLONGPRESS_OFFSET UNITYSDK_OFFSET(0x1D20E620)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRIGGERPRESSEDUP_OFFSET UNITYSDK_OFFSET(0x1D20CFC0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTERDOWNACTION_OFFSET UNITYSDK_OFFSET(0x1D20CBC0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTERENTERACTION_OFFSET UNITYSDK_OFFSET(0x1D20D600)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTEREXITACTION_OFFSET UNITYSDK_OFFSET(0x1D20D850)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTERUPACTION_OFFSET UNITYSDK_OFFSET(0x1D20CF20)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UPDATELONGPRESSSTATE_OFFSET UNITYSDK_OFFSET(0x1D20F010)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1D210150)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX__RESETTRIGGER_G__CHECKRESET_100_0_OFFSET UNITYSDK_OFFSET(0x1D20FCD0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D210410)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_HANDLEPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1D2104D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_HANDLEPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1D210560)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1D2105F0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D210600)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D210690)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1D2106A0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D2106B0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1D2106C0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_SELECT_OFFSET UNITYSDK_OFFSET(0x1D2106D0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_START_OFFSET UNITYSDK_OFFSET(0x1D2106E0)
#define UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_TRIGGERPRESSEDUP_OFFSET UNITYSDK_OFFSET(0x1D210770)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_TypeDefinitionIndex = 48602;

	class UIButtonEx : public ::UnityEngine::UI::Extension::UIButtonBase
	{
	public:
		// static const ::System::String* SelectedAnimBoolParams; // 0x0
		::UnityEngine::UI::Extension::UIButtonEx_ButtonState _buttonState_k__BackingField; // 0x120
		::System::Boolean _isSelect; // 0x124
		::System::Byte _padding0[0x3];
		::Sirenix::Serialization::SerializationData serializationData; // 0x128
		::System::Boolean IgnoreButtonStateOnSelect; // 0x168
		::System::Boolean enableLongPressClickCheck; // 0x169
		::System::Byte _padding1[0x2];
		::System::Single longPressTriggerTime; // 0x16C
		::System::Single _longPressTriggerTimeOverride; // 0x170
		::System::Single longPressInterval; // 0x174
		::UnityEngine::UI::Extension::UIButtonEx_LongPressState _longPressState; // 0x178
		::System::Single _longPressIntervalTimer; // 0x17C
		::System::Single _longPressTimer; // 0x180
		::System::Byte _padding2[0x4];
		::System::Action_1<::UnityEngine::UI::Extension::UIButtonEx*>* beforeClickedAction; // 0x188
		::UnityEngine::Events::UnityEvent* onPointDownAction; // 0x190
		::UnityEngine::Events::UnityEvent* onPointUpAction; // 0x198
		::UnityEngine::Events::UnityEvent* onPointEnterAction; // 0x1A0
		::UnityEngine::Events::UnityEvent* onPointExitAction; // 0x1A8
		::UnityEngine::Events::UnityEvent* onDropAction; // 0x1B0
		::UnityEngine::UI::Extension::UIButtonEx_UIButtonExEvent* onPointDownActionAdvance; // 0x1B8
		::UnityEngine::UI::Extension::UIButtonEx_UIButtonExEvent* onPointUpActionAdvance; // 0x1C0
		::UnityEngine::UI::Extension::UIButtonEx_UIButtonExEvent* onPointEnterActionAdvance; // 0x1C8
		::UnityEngine::UI::Extension::UIButtonEx_UIButtonExEvent* onPointExitActionAdvance; // 0x1D0
		::UnityEngine::UI::Extension::UIButtonEx_UIButtonExEvent* OnBeginDragAction; // 0x1D8
		::UnityEngine::UI::Extension::UIButtonEx_UIButtonExEvent* OnDragAction; // 0x1E0
		::UnityEngine::UI::Extension::UIButtonEx_UIButtonExEvent* OnEndDragAction; // 0x1E8
		::System::Action_1<::System::Object*>* _onStateChange; // 0x1F0
		::System::Action_2<::System::Single, ::System::Single>* OnLongPressIntervalAction; // 0x1F8
		::UnityEngine::Events::UnityEvent* OnLongPressTriggerAction; // 0x200
		::UnityEngine::Events::UnityEvent* OnLongPressPointClickAction; // 0x208
		::UnityEngine::Events::UnityEvent* OnLongPressPointUpAction; // 0x210
		::UnityEngine::Events::UnityEvent* OnPressAction; // 0x218
		::System::Object* buttonData; // 0x220
		::System::Boolean muteClick; // 0x228
		::System::Byte _padding3[0x3];
		::System::Int32 clickSoundID; // 0x22C
		::UnityEngine::UI::Extension::UIButtonEx_ClickSoundType oriSoundType; // 0x230
		::System::Byte _padding4[0x4];
		::UnityEngine::UI::Text* text; // 0x238
		::UnityEngine::UI::Extension::UIButtonEx_ClickSoundType _curSoundType; // 0x240
		::System::Byte _padding5[0x4];
		::MoleMole::Config::ConfigSoundActionIntending* soundAction; // 0x248
		::Foundation::Coroutine::CoroutineHandle _delayPressedUpHandle; // 0x250
		::System::Byte _padding6[0x4];
		::UnityEngine::UI::Extension::UIImgEventTrigger_ScrollCallback* onScrollCallback; // 0x258

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UIButtonEx_ButtonState get_buttonState()
		{
			return ((::UnityEngine::UI::Extension::UIButtonEx_ButtonState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GET_BUTTONSTATE_OFFSET))(this);
		}

		::System::Void set_buttonState(::UnityEngine::UI::Extension::UIButtonEx_ButtonState value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonEx_ButtonState))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SET_BUTTONSTATE_OFFSET))(this, value);
		}

		::System::Boolean HandlePointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void HandlePointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTERENTER_OFFSET))(this, eventData);
		}

		::System::Void ClearPointerState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_CLEARPOINTERSTATE_OFFSET))(this);
		}

		::System::Void HandlePointerExit(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HANDLEPOINTEREXIT_OFFSET))(this, eventData);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDROP_OFFSET))(this, eventData);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONENDDRAG_OFFSET))(this, eventData);
		}

		::Sirenix::Serialization::SerializationData Sirenix_Serialization_ISupportsPrefabSerialization_get_SerializationData()
		{
			return ((::Sirenix::Serialization::SerializationData(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SIRENIX_SERIALIZATION_ISUPPORTSPREFABSERIALIZATION_GET_SERIALIZATIONDATA_OFFSET))(this);
		}

		::System::Void Sirenix_Serialization_ISupportsPrefabSerialization_set_SerializationData(::Sirenix::Serialization::SerializationData value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::SerializationData))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SIRENIX_SERIALIZATION_ISUPPORTSPREFABSERIALIZATION_SET_SERIALIZATIONDATA_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_soundGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GET_SOUNDGAMEOBJECT_OFFSET))(this);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::System::Void SetPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETPRESSED_OFFSET))(this);
		}

		::System::Void SetNormal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETNORMAL_OFFSET))(this);
		}

		::System::Void SetNormalIfInteractable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETNORMALIFINTERACTABLE_OFFSET))(this);
		}

		::System::Void SetSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETSELECT_OFFSET))(this);
		}

		::System::Void TryInvokeOnPointerDownAction(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTERDOWNACTION_OFFSET))(this, eventData);
		}

		::System::Void TryInvokeOnPointerUpAction(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTERUPACTION_OFFSET))(this, eventData);
		}

		::System::Void TryInvokeOnPointerEnterAction(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTERENTERACTION_OFFSET))(this, eventData);
		}

		::System::Void TryInvokeOnPointerExitAction(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRYINVOKEONPOINTEREXITACTION_OFFSET))(this, eventData);
		}

		::System::Boolean HasOnPointerDownAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTERDOWNACTION_OFFSET))(this);
		}

		::System::Boolean HasOnPointerUpAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTERUPACTION_OFFSET))(this);
		}

		::System::Boolean HasOnPointerEnterAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTERENTERACTION_OFFSET))(this);
		}

		::System::Boolean HasOnPointerExitAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_HASONPOINTEREXITACTION_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDESTROY_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* AfterPressedUpAnim(::System::Single length)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_AFTERPRESSEDUPANIM_OFFSET))(this, length);
		}

		::System::Void Select()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SELECT_OFFSET))(this);
		}

		::System::Void SetSelectState(::System::Boolean select)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETSELECTSTATE_OFFSET))(this, select);
		}

		::System::Void TriggerPressedUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_TRIGGERPRESSEDUP_OFFSET))(this);
		}

		::System::Void SetLongPressTriggerTimeOverride(::System::Single newTriggerTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_SETLONGPRESSTRIGGERTIMEOVERRIDE_OFFSET))(this, newTriggerTime);
		}

		::System::Void StopLongPress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_STOPLONGPRESS_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONDISABLE_OFFSET))(this);
		}

		::System::Void Enable(::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ENABLE_OFFSET))(this, v);
		}

		::System::Void AddButtonClickListener(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ADDBUTTONCLICKLISTENER_OFFSET))(this, action);
		}

		::System::Void RemoveButtonClickListener(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_REMOVEBUTTONCLICKLISTENER_OFFSET))(this, action);
		}

		::System::Void RemoveClickListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_REMOVECLICKLISTENER_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONENABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONUPDATE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_START_OFFSET))(this);
		}

		::System::Void DealButtonExClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_DEALBUTTONEXCLICK_OFFSET))(this);
		}

		::System::UInt32 PrepareClickSound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_PREPARECLICKSOUND_OFFSET))(this);
		}

		::System::Void PlayClickSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_PLAYCLICKSOUND_OFFSET))(this);
		}

		::System::Single GetLongPressTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_GETLONGPRESSTIME_OFFSET))(this);
		}

		::System::Void UpdateLongPressState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_UPDATELONGPRESSSTATE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void RefreshState(::UnityEngine::UI::Extension::UIButtonEx_ButtonState buttonState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIButtonEx_ButtonState))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_REFRESHSTATE_OFFSET))(this, buttonState);
		}

		::System::Void ResetTrigger(::System::String* curSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_RESETTRIGGER_OFFSET))(this, curSelect);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX_ONSCROLL_OFFSET))(this, eventData);
		}

		::System::Void _ResetTrigger_g__CheckReset_100_0(::System::String* triggerName, ::System::String* select)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX__RESETTRIGGER_G__CHECKRESET_100_0_OFFSET))(this, triggerName, select);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_HandlePointerClick(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_HANDLEPOINTERCLICK_OFFSET))(this, P0);
		}

		::System::Void __base_HandlePointerEnter(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_HANDLEPOINTERENTER_OFFSET))(this, P0);
		}

		::System::Void __base_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONBEGINDRAG_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONDRAG_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnEndDrag(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_ONENDDRAG_OFFSET))(this, P0);
		}

		::System::Void __base_Select()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_SELECT_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_START_OFFSET))(this);
		}

		::System::Void __base_TriggerPressedUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIBUTTONEX___BASE_TRIGGERPRESSEDUP_OFFSET))(this);
		}
	};
}
