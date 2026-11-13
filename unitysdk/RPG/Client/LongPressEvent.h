#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class LongPressEvent_PressingDownEvent; }
namespace RPG::Client { class MonoInControlEvent; }
namespace RPG::Client { class UIController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RPG_CLIENT_LONGPRESSEVENT_ADDEXITEVENT_OFFSET UNITYSDK_OFFSET(0x19456CB0)
#define RPG_CLIENT_LONGPRESSEVENT_ADDLONGCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x19456B00)
#define RPG_CLIENT_LONGPRESSEVENT_ADDOVERSHORTCLICKTIME_OFFSET UNITYSDK_OFFSET(0x19456D40)
#define RPG_CLIENT_LONGPRESSEVENT_ADDPRESSINGDOWNEVENT_OFFSET UNITYSDK_OFFSET(0x19456DD0)
#define RPG_CLIENT_LONGPRESSEVENT_ADDRELEASEEVENT_OFFSET UNITYSDK_OFFSET(0x19456C20)
#define RPG_CLIENT_LONGPRESSEVENT_ADDREPEATCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x19456B90)
#define RPG_CLIENT_LONGPRESSEVENT_ADDSHORTCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x19456A70)
#define RPG_CLIENT_LONGPRESSEVENT_ADDSHORTDOWNCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x194569E0)
#define RPG_CLIENT_LONGPRESSEVENT_CLEARALLEVENTS_OFFSET UNITYSDK_OFFSET(0x19455F60)
#define RPG_CLIENT_LONGPRESSEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x19457570)
#define RPG_CLIENT_LONGPRESSEVENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x19456470)
#define RPG_CLIENT_LONGPRESSEVENT_GETPRESSDOWNTIME_OFFSET UNITYSDK_OFFSET(0x19457200)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ISPRESSDOWN_OFFSET UNITYSDK_OFFSET(0x19457520)
#define RPG_CLIENT_LONGPRESSEVENT_GET_OFFSET UNITYSDK_OFFSET(0x19454CA0)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONEXITCOUNT_OFFSET UNITYSDK_OFFSET(0x19457440)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONLONGCLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x19457380)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONOVERSHORTCLICKTIMECOUNT_OFFSET UNITYSDK_OFFSET(0x19457480)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONPRESSINGDOWNCOUNT_OFFSET UNITYSDK_OFFSET(0x194574D0)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONRELEASECOUNT_OFFSET UNITYSDK_OFFSET(0x19457400)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONREPEATCLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x194573C0)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONSHORTCLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x19457340)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONSHORTDOWNCLICKCOUNT_OFFSET UNITYSDK_OFFSET(0x19457300)
#define RPG_CLIENT_LONGPRESSEVENT_INVOKPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x19455920)
#define RPG_CLIENT_LONGPRESSEVENT_INVOKPOINTERUPBYRESET_OFFSET UNITYSDK_OFFSET(0x19455CF0)
#define RPG_CLIENT_LONGPRESSEVENT_INVOKPOINTERUP_OFFSET UNITYSDK_OFFSET(0x19455B90)
#define RPG_CLIENT_LONGPRESSEVENT_INVOKSHORTDOWNCLICK_OFFSET UNITYSDK_OFFSET(0x194559B0)
#define RPG_CLIENT_LONGPRESSEVENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19455F10)
#define RPG_CLIENT_LONGPRESSEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x194564C0)
#define RPG_CLIENT_LONGPRESSEVENT_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x19456510)
#define RPG_CLIENT_LONGPRESSEVENT_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x194557B0)
#define RPG_CLIENT_LONGPRESSEVENT_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x19455DA0)
#define RPG_CLIENT_LONGPRESSEVENT_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x19455A20)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEEXITEVENTS_OFFSET UNITYSDK_OFFSET(0x19456830)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEEXITEVENT_OFFSET UNITYSDK_OFFSET(0x194570A0)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVELONGCLICKEVENTS_OFFSET UNITYSDK_OFFSET(0x19456680)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVELONGCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x19456F50)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEOVERSHORTCLICKTIMEEVENTS_OFFSET UNITYSDK_OFFSET(0x19456950)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEOVERSHORTCLICKTIMEEVENT_OFFSET UNITYSDK_OFFSET(0x19457110)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEPRESSINGDOWNEVENTS_OFFSET UNITYSDK_OFFSET(0x194568C0)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEPRESSINGDOWNEVENT_OFFSET UNITYSDK_OFFSET(0x19457180)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVERELEASEEVENTS_OFFSET UNITYSDK_OFFSET(0x194567A0)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVERELEASEEVENT_OFFSET UNITYSDK_OFFSET(0x19457030)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEREPEATCLICKEVENTS_OFFSET UNITYSDK_OFFSET(0x19456710)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEREPEATCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x19456FC0)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTCLICKEVENTS_OFFSET UNITYSDK_OFFSET(0x194565F0)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x19456EE0)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTDOWNCLICKEVENTS_OFFSET UNITYSDK_OFFSET(0x19456560)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTDOWNCLICKEVENT_OFFSET UNITYSDK_OFFSET(0x19456E70)
#define RPG_CLIENT_LONGPRESSEVENT_REPEATRUN_OFFSET UNITYSDK_OFFSET(0x194572B0)
#define RPG_CLIENT_LONGPRESSEVENT_RESET_OFFSET UNITYSDK_OFFSET(0x19455C80)
#define RPG_CLIENT_LONGPRESSEVENT_SETCANCELREPEATONUNFOCUSED_OFFSET UNITYSDK_OFFSET(0x19457260)
#define RPG_CLIENT_LONGPRESSEVENT_SETUPDATEENABLE_OFFSET UNITYSDK_OFFSET(0x19454D70)
#define RPG_CLIENT_LONGPRESSEVENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x19456430)
#define RPG_CLIENT_LONGPRESSEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x19454DC0)
#define RPG_CLIENT_LONGPRESSEVENT__CHECKISOTHERLONGPRESSING_OFFSET UNITYSDK_OFFSET(0x194550D0)
#define RPG_CLIENT_LONGPRESSEVENT__GETLONGPRESSPROGRESS_OFFSET UNITYSDK_OFFSET(0x194555C0)
#define RPG_CLIENT_LONGPRESSEVENT__INVOKEOVERSHORTCLICK_OFFSET UNITYSDK_OFFSET(0x194552E0)
#define RPG_CLIENT_LONGPRESSEVENT__POSTBUTTONSOUND_OFFSET UNITYSDK_OFFSET(0x19455680)
#define RPG_CLIENT_LONGPRESSEVENT__TRYSETUPLONGPRESSHINTSHOW_OFFSET UNITYSDK_OFFSET(0x19455340)

namespace RPG::Client
{
	inline static constexpr unsigned int LongPressEvent_TypeDefinitionIndex = 74645;

	class LongPressEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsUpdateEnable; // 0x18
		::System::Boolean Interactable; // 0x19
		::System::Byte _padding0[0x2];
		::System::Single ShortClickTime; // 0x1C
		::System::Single TotalTime; // 0x20
		::System::Single RepeatTime; // 0x24
		::UnityEngine::Events::UnityEvent* OnShortDownClick; // 0x28
		::UnityEngine::Events::UnityEvent* OnShortClick; // 0x30
		::UnityEngine::Events::UnityEvent* OnLongClick; // 0x38
		::UnityEngine::Events::UnityEvent* OnRepeatClick; // 0x40
		::UnityEngine::Events::UnityEvent* OnRelease; // 0x48
		::UnityEngine::Events::UnityEvent* OnExit; // 0x50
		::UnityEngine::Events::UnityEvent* OnOverShortClickTime; // 0x58
		::RPG::Client::LongPressEvent_PressingDownEvent* OnPressingDown; // 0x60
		::System::Int32 _OnShortDownClickCount; // 0x68
		::System::Int32 _OnShortClickCount; // 0x6C
		::System::Int32 _OnLongClickCount; // 0x70
		::System::Int32 _OnRepeatClickCount; // 0x74
		::System::Int32 _OnReleaseCount; // 0x78
		::System::Int32 _OnExitCount; // 0x7C
		::System::Int32 _OnPressingDownCount; // 0x80
		::System::Int32 _OnOverShortClickTimeCount; // 0x84
		::System::Boolean _IsPressDown; // 0x88
		::System::Boolean _IsLongPressInvok; // 0x89
		::System::Boolean _IsOverShortClickTime; // 0x8A
		::System::Byte _padding1[0x1];
		::System::Single _PointerDownTime; // 0x8C
		::RPG::Client::MonoInControlEvent* _MonoInControlEvent; // 0x90
		::RPG::Client::UIController* _Controller; // 0x98
		::System::Boolean _CancelRepeatOnUnfocused; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LongPressEvent* Get(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::LongPressEvent*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_OFFSET))(a1);
		}

		::System::Void SetUpdateEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_SETUPDATEENABLE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_UPDATE_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void InvokShortDownClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_INVOKSHORTDOWNCLICK_OFFSET))(this);
		}

		::System::Void InvokPointerDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_INVOKPOINTERDOWN_OFFSET))(this);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void InvokPointerUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_INVOKPOINTERUP_OFFSET))(this);
		}

		::System::Void InvokPointerUpByReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_INVOKPOINTERUPBYRESET_OFFSET))(this);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void ClearAllEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_CLEARALLEVENTS_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_RESET_OFFSET))(this);
		}

		::System::Void AddShortDownClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDSHORTDOWNCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void AddShortClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDSHORTCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void AddLongClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDLONGCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void AddRepeatClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDREPEATCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void AddReleaseEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDRELEASEEVENT_OFFSET))(this, a1);
		}

		::System::Void AddExitEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDEXITEVENT_OFFSET))(this, a1);
		}

		::System::Void AddOverShortClickTime(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDOVERSHORTCLICKTIME_OFFSET))(this, a1);
		}

		::System::Void AddPressingDownEvent(::UnityEngine::Events::UnityAction_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDPRESSINGDOWNEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveShortDownClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTDOWNCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveShortClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveLongClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVELONGCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveRepeatClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEREPEATCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveReleaseEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVERELEASEEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveExitEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEEXITEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveOverShortClickTimeEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEOVERSHORTCLICKTIMEEVENT_OFFSET))(this, a1);
		}

		::System::Void RemovePressingDownEvent(::UnityEngine::Events::UnityAction_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEPRESSINGDOWNEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveShortDownClickEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTDOWNCLICKEVENTS_OFFSET))(this);
		}

		::System::Void RemoveShortClickEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTCLICKEVENTS_OFFSET))(this);
		}

		::System::Void RemoveLongClickEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVELONGCLICKEVENTS_OFFSET))(this);
		}

		::System::Void RemoveRepeatClickEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEREPEATCLICKEVENTS_OFFSET))(this);
		}

		::System::Void RemoveReleaseEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVERELEASEEVENTS_OFFSET))(this);
		}

		::System::Void RemoveExitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEEXITEVENTS_OFFSET))(this);
		}

		::System::Void RemoveOverShortClickTimeEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEOVERSHORTCLICKTIMEEVENTS_OFFSET))(this);
		}

		::System::Void RemovePressingDownEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEPRESSINGDOWNEVENTS_OFFSET))(this);
		}

		::System::Single GetPressDownTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GETPRESSDOWNTIME_OFFSET))(this);
		}

		::System::Void SetCancelRepeatOnUnfocused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_SETCANCELREPEATONUNFOCUSED_OFFSET))(this, a1);
		}

		::System::Void RepeatRun()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REPEATRUN_OFFSET))(this);
		}

		::System::Void _PostButtonSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT__POSTBUTTONSOUND_OFFSET))(this);
		}

		::System::Void _InvokeOverShortClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT__INVOKEOVERSHORTCLICK_OFFSET))(this);
		}

		::System::Single _GetLongPressProgress(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT__GETLONGPRESSPROGRESS_OFFSET))(this, a1);
		}

		::System::Void _TrySetupLongPressHintShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT__TRYSETUPLONGPRESSHINTSHOW_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIsOtherLongPressing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT__CHECKISOTHERLONGPRESSING_OFFSET))(this);
		}

		::System::Int32 get_OnShortDownClickCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONSHORTDOWNCLICKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_OnShortClickCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONSHORTCLICKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_OnLongClickCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONLONGCLICKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_OnRepeatClickCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONREPEATCLICKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_OnReleaseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONRELEASECOUNT_OFFSET))(this);
		}

		::System::Int32 get_OnExitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONEXITCOUNT_OFFSET))(this);
		}

		::System::Int32 get_OnOverShortClickTimeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONOVERSHORTCLICKTIMECOUNT_OFFSET))(this);
		}

		::System::Int32 get_OnPressingDownCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONPRESSINGDOWNCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsPressDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ISPRESSDOWN_OFFSET))(this);
		}

	};
}
