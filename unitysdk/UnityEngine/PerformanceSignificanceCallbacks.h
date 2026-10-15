#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONLARGEOBJECTALLOCED_OFFSET UNITYSDK_OFFSET(0x1F40A870)
#define UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONPARTICLESYSTEMPREWARMHITCH_OFFSET UNITYSDK_OFFSET(0x1F40A840)
#define UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONSTATSCOLLECTFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x1F40A8A0)

namespace UnityEngine
{
	class PerformanceSignificanceCallbacks : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_OnParticleSystemPrewarmHitchEvent()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine", "PerformanceSignificanceCallbacks")->GetStaticField(0x127F0);
		}

		static ::System::Action** StaticGet_OnStatsCollectFrameInfoEvent()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine", "PerformanceSignificanceCallbacks")->GetStaticField(0x127F8);
		}

		static ::System::Action** StaticGet_OnLargeObjectAllocedEvent()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine", "PerformanceSignificanceCallbacks")->GetStaticField(0x12800);
		}

		static ::System::Void OnParticleSystemPrewarmHitch(::UnityEngine::GameObject* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONPARTICLESYSTEMPREWARMHITCH_OFFSET))(a1, a2);
		}

		static ::System::Void OnLargeObjectAlloced(::UnityEngine::GameObject* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONLARGEOBJECTALLOCED_OFFSET))(a1, a2);
		}

		static ::System::Void OnStatsCollectFrameInfo()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PERFORMANCESIGNIFICANCECALLBACKS_ONSTATSCOLLECTFRAMEINFO_OFFSET))();
		}

	};
}
