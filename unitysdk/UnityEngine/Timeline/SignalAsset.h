#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class SignalAsset; }

#define UNITYENGINE_TIMELINE_SIGNALASSET_ADD_ONENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x20641D10)
#define UNITYENGINE_TIMELINE_SIGNALASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x20641EA0)
#define UNITYENGINE_TIMELINE_SIGNALASSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20641E70)
#define UNITYENGINE_TIMELINE_SIGNALASSET_REMOVE_ONENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x20641DC0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalAsset_TypeDefinitionIndex = 39762;

	class SignalAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::Action_1<::UnityEngine::Timeline::SignalAsset*>** StaticGet_OnEnableCallback()
		{
			return (::System::Action_1<::UnityEngine::Timeline::SignalAsset*>**)UnitySDK::FromName("UnityEngine.Timeline", "SignalAsset")->GetStaticField(0x41370);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_ADD_ONENABLECALLBACK_OFFSET))(a1);
		}

		static ::System::Void remove_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_REMOVE_ONENABLECALLBACK_OFFSET))(a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_ONENABLE_OFFSET))(this);
		}

	};
}
