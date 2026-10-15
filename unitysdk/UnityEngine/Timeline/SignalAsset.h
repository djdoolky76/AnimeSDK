#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Action; }
namespace UnityEngine::Timeline { class SignalAsset; }

#define UNITYENGINE_TIMELINE_SIGNALASSET_ADD_ONENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x1F390F70)
#define UNITYENGINE_TIMELINE_SIGNALASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1F391100)
#define UNITYENGINE_TIMELINE_SIGNALASSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F3910D0)
#define UNITYENGINE_TIMELINE_SIGNALASSET_REMOVE_ONENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x1F391020)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalAsset_TypeDefinitionIndex = 38833;

	class SignalAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::Action** StaticGet_OnEnableCallback()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine.Timeline", "SignalAsset")->GetStaticField(0x4C2D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnEnableCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_ADD_ONENABLECALLBACK_OFFSET))(a1);
		}

		static ::System::Void remove_OnEnableCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_REMOVE_ONENABLECALLBACK_OFFSET))(a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_ONENABLE_OFFSET))(this);
		}

	};
}
