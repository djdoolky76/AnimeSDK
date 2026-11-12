#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class OLBKHCNLBGJ;
namespace RPGTools::Timeline { class LifeCycleEventArgument; }
namespace System { class Object; }
namespace UnityEngine { class Renderer; }

#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_CCTOR_OFFSET UNITYSDK_OFFSET(0xF3E02D0)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xF3E02C0)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xF3E0170)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xF3DF930)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xF3E01F0)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xF3E00E0)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTBEHAVIOUR__ONGRAPHSTOP_B__9_0_OFFSET UNITYSDK_OFFSET(0xF3E0320)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LifeCycleEventBehaviour_TypeDefinitionIndex = 49180;

	class LifeCycleEventBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::LifeCycleEventArgument* Argument; // 0x10
		::UnityEngine::Renderer* _Renderer; // 0x18
		::OLBKHCNLBGJ* _Argument; // 0x20
		static ::System::Int32* StaticGet_ShadowColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline", "LifeCycleEventBehaviour")->GetStaticField(0x9C0);
		}

		static ::System::Int32* StaticGet_ShadowThreshold()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline", "LifeCycleEventBehaviour")->GetStaticField(0x9C4);
		}

		static ::System::Int32* StaticGet_EyeShadowColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools.Timeline", "LifeCycleEventBehaviour")->GetStaticField(0x9C8);
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
