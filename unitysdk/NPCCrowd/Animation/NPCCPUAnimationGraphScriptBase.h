#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationPlayableOutput.h"
#include "unitysdk/UnityEngine/Playables/DirectorUpdateMode.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class Animator; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPTBASE_DESTROY_OFFSET UNITYSDK_OFFSET(0xE0D07A0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPTBASE_GETBISCREATED_OFFSET UNITYSDK_OFFSET(0xE0D0640)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPTBASE_GETGRAPH_OFFSET UNITYSDK_OFFSET(0xE0D0690)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPTBASE_PAUSEGRAPH_OFFSET UNITYSDK_OFFSET(0xE0D0740)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPTBASE_PLAYGRAPH_OFFSET UNITYSDK_OFFSET(0xE0D06E0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xE0D0810)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimationGraphScriptBase_TypeDefinitionIndex = 92425;

	class NPCCPUAnimationGraphScriptBase : public ::System::Object
	{
	public:
		::UnityEngine::Animator* animator; // 0x10
		::UnityEngine::Animations::AnimationPlayableOutput playableOutput; // 0x18
		::UnityEngine::Playables::DirectorUpdateMode updateMode; // 0x28
		::System::Boolean bIsPlaying; // 0x2C
		::System::Boolean bIsCreated; // 0x2D
		::System::Byte _padding0[0x2];
		::UnityEngine::Playables::PlayableGraph playableGraph; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPTBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean& GetbIsCreated()
		{
			return ((::System::Boolean&(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPTBASE_GETBISCREATED_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableGraph& GetGraph()
		{
			return ((::UnityEngine::Playables::PlayableGraph&(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPTBASE_GETGRAPH_OFFSET))(this);
		}

		::System::Void PlayGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPTBASE_PLAYGRAPH_OFFSET))(this);
		}

		::System::Void PauseGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPTBASE_PAUSEGRAPH_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHSCRIPTBASE_DESTROY_OFFSET))(this);
		}
	};
}
