#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Playables { class INotification; }
namespace UnityEngine::Timeline { class SignalAsset; }
namespace UnityEngine::Timeline { class SignalReceiver_EventKeyValue; }

#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_ADDEMPTYREACTION_OFFSET UNITYSDK_OFFSET(0x20642460)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_ADDREACTION_OFFSET UNITYSDK_OFFSET(0x20642110)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_CHANGEREACTIONATINDEX_OFFSET UNITYSDK_OFFSET(0x20642D00)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_CHANGESIGNALATINDEX_OFFSET UNITYSDK_OFFSET(0x20642840)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_COUNT_OFFSET UNITYSDK_OFFSET(0x20642810)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_CTOR_OFFSET UNITYSDK_OFFSET(0x20642F20)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREACTIONATINDEX_OFFSET UNITYSDK_OFFSET(0x20642DB0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREACTION_OFFSET UNITYSDK_OFFSET(0x206427D0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREGISTEREDSIGNALS_OFFSET UNITYSDK_OFFSET(0x206427B0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETSIGNALASSETATINDEX_OFFSET UNITYSDK_OFFSET(0x20642E60)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20642F10)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_ONNOTIFY_OFFSET UNITYSDK_OFFSET(0x20641F90)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_REMOVEATINDEX_OFFSET UNITYSDK_OFFSET(0x20642A60)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_REMOVE_OFFSET UNITYSDK_OFFSET(0x206425C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalReceiver_TypeDefinitionIndex = 39764;

	class SignalReceiver : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Timeline::SignalReceiver_EventKeyValue* m_Events; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_CTOR_OFFSET))(this);
		}

		::System::Void OnNotify(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::INotification* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::INotification*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_ONNOTIFY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddReaction(::UnityEngine::Timeline::SignalAsset* a1, ::UnityEngine::Events::UnityEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::SignalAsset*, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_ADDREACTION_OFFSET))(this, a1, a2);
		}

		::System::Int32 AddEmptyReaction(::UnityEngine::Events::UnityEvent* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_ADDEMPTYREACTION_OFFSET))(this, a1);
		}

		::System::Void Remove(::UnityEngine::Timeline::SignalAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::SignalAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_REMOVE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::SignalAsset*>* GetRegisteredSignals()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::SignalAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREGISTEREDSIGNALS_OFFSET))(this);
		}

		::UnityEngine::Events::UnityEvent* GetReaction(::UnityEngine::Timeline::SignalAsset* a1)
		{
			return ((::UnityEngine::Events::UnityEvent*(*)(::PVOID, ::UnityEngine::Timeline::SignalAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREACTION_OFFSET))(this, a1);
		}

		::System::Int32 Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_COUNT_OFFSET))(this);
		}

		::System::Void ChangeSignalAtIndex(::System::Int32 a1, ::UnityEngine::Timeline::SignalAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Timeline::SignalAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_CHANGESIGNALATINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveAtIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_REMOVEATINDEX_OFFSET))(this, a1);
		}

		::System::Void ChangeReactionAtIndex(::System::Int32 a1, ::UnityEngine::Events::UnityEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_CHANGEREACTIONATINDEX_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Events::UnityEvent* GetReactionAtIndex(::System::Int32 a1)
		{
			return ((::UnityEngine::Events::UnityEvent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREACTIONATINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::SignalAsset* GetSignalAssetAtIndex(::System::Int32 a1)
		{
			return ((::UnityEngine::Timeline::SignalAsset*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETSIGNALASSETATINDEX_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_ONENABLE_OFFSET))(this);
		}

	};
}
