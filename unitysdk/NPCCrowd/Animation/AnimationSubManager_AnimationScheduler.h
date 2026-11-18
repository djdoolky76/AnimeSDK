#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_PhaseEvent.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Animation { class AnimationSubManager; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ADDDEPENDENCY_1_OFFSET UNITYSDK_OFFSET(0xEE96A90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_BEGINFRAME_OFFSET UNITYSDK_OFFSET(0xEE96250)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ENDFRAME_OFFSET UNITYSDK_OFFSET(0xEE96900)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ENSUREOPERATIONBUFFEREMPTY_OFFSET UNITYSDK_OFFSET(0xEE96550)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ENSUREOPERATIONBUFFER_OFFSET UNITYSDK_OFFSET(0xEE963D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_FORCECOMPLETEALL_OFFSET UNITYSDK_OFFSET(0xEE96950)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_GETMAXPHASEEVENTNODEINDEX_OFFSET UNITYSDK_OFFSET(0xEE96BF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_GETMINPHASEEVENTNODEINDEX_OFFSET UNITYSDK_OFFSET(0xEE96B60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_GETPHASEEVENTNODEINDEX_OFFSET UNITYSDK_OFFSET(0xEE96B50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_INITIALIZEPHASEEVENT_OFFSET UNITYSDK_OFFSET(0xEE96160)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULE_OFFSET UNITYSDK_OFFSET(0xEE96740)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER__CCTOR_OFFSET UNITYSDK_OFFSET(0xEE96C80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER__CTOR_OFFSET UNITYSDK_OFFSET(0xEE960E0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_TypeDefinitionIndex = 81181;

	class AnimationSubManager_AnimationScheduler : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_NodeIndexGenerator()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AnimationScheduler_TypeDefinitionIndex)->GetStaticField(0x142A0);
		}
		// static const ::System::Int32 MaxNodeNum = 0x40; // 0x0
		// static const ::System::Int32 MaxEventNum = 0xA; // 0x0
		// static const ::System::Int32 MaxProcessorNum = 0x36; // 0x0
		::Il2CppArray<::System::Object*>* _processors; // 0x10
		::Il2CppArray<::System::Object*>* _nodes; // 0x18
		::Il2CppArray<::Unity::Jobs::JobHandle>* _jobHandles; // 0x20
		::Il2CppArray<::System::Object*>* _operationBuffers; // 0x28
		::System::Int32 _operationBufferIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER__CCTOR_OFFSET))();
		}

		::System::Void BeginFrame(::NPCCrowd::Animation::AnimationSubManager* manager, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_BEGINFRAME_OFFSET))(this, manager, deltaTime);
		}

		::System::Void Schedule(::NPCCrowd::Animation::AnimationSubManager* manager, ::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase phase)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*, ::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULE_OFFSET))(this, manager, phase);
		}

		::System::Void EndFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ENDFRAME_OFFSET))(this);
		}

		::System::Void ForceCompleteAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_FORCECOMPLETEALL_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* EnsureOperationBuffer()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ENSUREOPERATIONBUFFER_OFFSET))(this);
		}

		static ::System::Void InitializePhaseEvent(::Il2CppArray<::System::Object*>* nodes)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_INITIALIZEPHASEEVENT_OFFSET))(nodes);
		}

		static ::System::Void AddDependency_1(::Il2CppArray<::System::Object*>* nodes, ::System::Int32 index, ::System::Int32 dependentOn)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ADDDEPENDENCY_1_OFFSET))(nodes, index, dependentOn);
		}

		static ::System::Int32 GetPhaseEventNodeIndex(::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_PhaseEvent evt)
		{
			return ((::System::Int32(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_PhaseEvent))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_GETPHASEEVENTNODEINDEX_OFFSET))(evt);
		}

		static ::System::Int32 GetMinPhaseEventNodeIndex(::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase minPhase)
		{
			return ((::System::Int32(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_GETMINPHASEEVENTNODEINDEX_OFFSET))(minPhase);
		}

		static ::System::Int32 GetMaxPhaseEventNodeIndex(::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase maxPhase)
		{
			return ((::System::Int32(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_GETMAXPHASEEVENTNODEINDEX_OFFSET))(maxPhase);
		}

		::System::Void EnsureOperationBufferEmpty(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_ENSUREOPERATIONBUFFEREMPTY_OFFSET))(this, manager);
		}
	};
}
