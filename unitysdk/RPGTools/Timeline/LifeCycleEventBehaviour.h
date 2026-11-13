#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class OLBKHCNLBGJ;
namespace RPGTools::Timeline { class LifeCycleEventArgument; }
namespace System { class Object; }
namespace UnityEngine { class Renderer; }

#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C744C40)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1C744C30)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1C744AE0)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1C7442A0)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1C744B60)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1C744A50)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR__ONGRAPHSTOP_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C744C90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LifeCycleEventBehaviour_TypeDefinitionIndex = 49180;

	class LifeCycleEventBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::LifeCycleEventArgument* Argument; // 0x10
		::UnityEngine::Renderer* _Renderer; // 0x18
		::OLBKHCNLBGJ* _Argument; // 0x20
		static ::System::Int32* StaticGet_ShadowThreshold()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline", "LifeCycleEventBehaviour")->GetStaticField(0xA20);
		}

		static ::System::Int32* StaticGet_EyeShadowColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline", "LifeCycleEventBehaviour")->GetStaticField(0xA24);
		}

		static ::System::Int32* StaticGet_ShadowColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline", "LifeCycleEventBehaviour")->GetStaticField(0xA28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_CCTOR_OFFSET))();
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void _OnGraphStop_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR__ONGRAPHSTOP_B__9_0_OFFSET))(this);
		}

	};
}
