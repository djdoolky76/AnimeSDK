#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIStateCtrlStatus.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class EJGIMKACABB;
class EKOGCACGADH;
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client { class UIStateCtrl_UIStateCtrlInternalAccessor; }
namespace RPG::Client::UI::UIStateCtrl { class StateData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_UISTATECTRL_COMPLETECURRENTSTATEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xEEB57F0)
#define RPG_CLIENT_UISTATECTRL_CTOR_OFFSET UNITYSDK_OFFSET(0xEEB64E0)
#define RPG_CLIENT_UISTATECTRL_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xEEB6410)
#define RPG_CLIENT_UISTATECTRL_GET_INTERNALACCESSOR_OFFSET UNITYSDK_OFFSET(0xEEB6470)
#define RPG_CLIENT_UISTATECTRL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEEB6120)
#define RPG_CLIENT_UISTATECTRL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xEEB5EF0)
#define RPG_CLIENT_UISTATECTRL_PAUSE_OFFSET UNITYSDK_OFFSET(0xEEB5B40)
#define RPG_CLIENT_UISTATECTRL_PLAYSTATE_OFFSET UNITYSDK_OFFSET(0xEEB54B0)
#define RPG_CLIENT_UISTATECTRL_RESUME_OFFSET UNITYSDK_OFFSET(0xEEB5E50)
#define RPG_CLIENT_UISTATECTRL_UPDATE_OFFSET UNITYSDK_OFFSET(0xEEB60D0)
#define RPG_CLIENT_UISTATECTRL__FORCECOMPLETECURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xEEB58D0)
#define RPG_CLIENT_UISTATECTRL__GETCURRENTSTATEACTIONSSTATUS_OFFSET UNITYSDK_OFFSET(0xEEB5380)
#define RPG_CLIENT_UISTATECTRL__GETSTATEDATABYSTATENAME_OFFSET UNITYSDK_OFFSET(0xEEB62A0)
#define RPG_CLIENT_UISTATECTRL__INITSTATEDATAS_OFFSET UNITYSDK_OFFSET(0xEEB5FD0)
#define RPG_CLIENT_UISTATECTRL__NOTIFYPLAYINGASYNCACTIONS_OFFSET UNITYSDK_OFFSET(0xEEB5BE0)
#define RPG_CLIENT_UISTATECTRL__PLAYSTATEINTERNAL_OFFSET UNITYSDK_OFFSET(0xEEB5570)
#define RPG_CLIENT_UISTATECTRL__SETPARENT_OFFSET UNITYSDK_OFFSET(0xEEB6220)
#define RPG_CLIENT_UISTATECTRL__STARTSTATE_OFFSET UNITYSDK_OFFSET(0xEEB4E00)
#define RPG_CLIENT_UISTATECTRL__TICKSTATE_OFFSET UNITYSDK_OFFSET(0xEEB4FB0)
#define RPG_CLIENT_UISTATECTRL__TICK_OFFSET UNITYSDK_OFFSET(0xEEB4EA0)
#define RPG_CLIENT_UISTATECTRL__TRYUPDATESTATUSOFCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xEEB5300)

namespace RPG::Client
{
	inline static constexpr unsigned int UIStateCtrl_TypeDefinitionIndex = 71067;

	class UIStateCtrl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::StateData*>* _StateDatas; // 0x18
		::EJGIMKACABB* _Context; // 0x20
		::System::Boolean _Inited; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::Client::UIStateCtrl_UIStateCtrlInternalAccessor* _internalAccessor; // 0x30
		::EKOGCACGADH* _assetLoader; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_CTOR_OFFSET))(this);
		}

		::System::Void _StartState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__STARTSTATE_OFFSET))(this);
		}

		::System::Void _Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__TICK_OFFSET))(this, a1);
		}

		::System::Void _TickState(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__TICKSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::UIStateCtrlStatus _GetCurrentStateActionsStatus()
		{
			return ((::RPG::Client::UIStateCtrlStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__GETCURRENTSTATEACTIONSSTATUS_OFFSET))(this);
		}

		::System::Void PlayState(::System::String* a1, ::System::Boolean a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_PLAYSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CompleteCurrentStateImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_COMPLETECURRENTSTATEIMMEDIATELY_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_RESUME_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_ONDESTROY_OFFSET))(this);
		}

		::System::Void _InitStateDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__INITSTATEDATAS_OFFSET))(this);
		}

		::System::Void _SetParent(::RPG::Client::UIStateCtrl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIStateCtrl*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__SETPARENT_OFFSET))(this, a1);
		}

		::System::Void _NotifyPlayingAsyncActions(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__NOTIFYPLAYINGASYNCACTIONS_OFFSET))(this, a1);
		}

		::System::Void _PlayStateInternal(::System::String* a1, ::System::Boolean a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__PLAYSTATEINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::UI::UIStateCtrl::StateData* _GetStateDataByStateName(::System::String* a1)
		{
			return ((::RPG::Client::UI::UIStateCtrl::StateData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__GETSTATEDATABYSTATENAME_OFFSET))(this, a1);
		}

		::System::Void _TryUpdateStatusOfCurrentState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__TRYUPDATESTATUSOFCURRENTSTATE_OFFSET))(this);
		}

		::System::Void _ForceCompleteCurrentState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL__FORCECOMPLETECURRENTSTATE_OFFSET))(this);
		}

		::System::String* get_CurrentState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_GET_CURRENTSTATE_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl_UIStateCtrlInternalAccessor* get_InternalAccessor()
		{
			return ((::RPG::Client::UIStateCtrl_UIStateCtrlInternalAccessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISTATECTRL_GET_INTERNALACCESSOR_OFFSET))(this);
		}

	};
}
