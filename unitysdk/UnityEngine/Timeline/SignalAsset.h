#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class SignalAsset; }

#define UNITYENGINE_TIMELINE_SIGNALASSET_ADD_ONENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D6ED240)
#define UNITYENGINE_TIMELINE_SIGNALASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ED3D0)
#define UNITYENGINE_TIMELINE_SIGNALASSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D6ED3A0)
#define UNITYENGINE_TIMELINE_SIGNALASSET_REMOVE_ONENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D6ED2F0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalAsset_TypeDefinitionIndex = 39762;

	class SignalAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::Action_1<::UnityEngine::Timeline::SignalAsset*>** StaticGet_OnEnableCallback()
		{
			return (::System::Action_1<::UnityEngine::Timeline::SignalAsset*>**)UnitySDK::FromName("UnityEngine.Timeline", "SignalAsset")->GetStaticField(0x3E5B0);
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
