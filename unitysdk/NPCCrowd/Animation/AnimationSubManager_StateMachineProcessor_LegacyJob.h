#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Adapter/ReadOnlyChunkListView2D_1.h"
#include "unitysdk/Foundation/Adapter/ReadOnlyChunkListView_1.h"
#include "unitysdk/Foundation/Container/NativeVector_1.h"
#include "unitysdk/Foundation/StateMachine/Machine.h"
#include "unitysdk/Foundation/StateMachine/Parameter.h"
#include "unitysdk/Foundation/StateMachine/ParameterId.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/SharedData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/SharedStateData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Foundation/StateMachine/StateId.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

namespace NPCCrowd::Animation { class AnimationSubManager_StateMachineArchetypeData; }
namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_ADVANCEANIMATION_OFFSET UNITYSDK_OFFSET(0x6333F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0x105F1700)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x633440)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_GETSHAREDDATA_OFFSET UNITYSDK_OFFSET(0x6333E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x6333D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x633430)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_StateMachineProcessor_LegacyJob_TypeDefinitionIndex = 81165;

	struct alignas(8) AnimationSubManager_StateMachineProcessor_LegacyJob
	{
		::Foundation::StateMachine::Machine _machine; // 0x10
		::Foundation::Adapter::ReadOnlyChunkListView2D_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData> _sharedStateData; // 0xC8
		::System::Byte _padding0[0x18];
		::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::CPUStateMachine::SharedData> _sharedData; // 0xE8
		::System::Byte _padding1[0x10];
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityId; // 0x100
		::System::Byte _padding2[0x18];
		::Foundation::Container::NativeVector_1<::Foundation::StateMachine::ParameterId> _normalizedTimeIds; // 0x120
		::System::Byte _padding3[0x8];
		::System::Single _deltaTime; // 0x130
		::System::Int32 _frameCount; // 0x134
		::NPCCrowd::Chunk::ChunkView2D_1<::Foundation::StateMachine::Parameter> _params; // 0x138
		::System::Byte _padding4[0x28];
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer> _states; // 0x168
		::System::Byte _padding5[0x18];
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> _animations; // 0x188
		::System::Byte _padding6[0x18];
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _tickData; // 0x1A8
		::System::Byte _padding7[0x18];
		::NPCCrowd::Chunk::ChunkView_1<::System::Object*> _blendingRequests; // 0x1C8
		::System::Byte _padding8[0x18];
		::Unity::Collections::NativeHashMap_2<::System::Object*, ::System::Single> _transitionDictionary; // 0x1E8
		::System::Byte _padding9[0x8];
		::System::Single _defaultTransitionTime; // 0x1F8

		static ::System::Nullable_1<::System::Object*> CreateJob(::System::Single deltaTime, ::System::Int32 frameCount, ::NPCCrowd::Animation::AnimationSubManager_StateMachineArchetypeData* stateMachine)
		{
			return ((::System::Nullable_1<::System::Object*>(*)(::System::Single, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_StateMachineArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET))(deltaTime, frameCount, stateMachine);
		}

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::NPCCrowd::Animation::CPUStateMachine::SharedData GetSharedData(::System::Int32 index, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>& sharedStateData)
		{
			return ((::NPCCrowd::Animation::CPUStateMachine::SharedData(*)(::PVOID, ::System::Int32, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_GETSHAREDDATA_OFFSET))(this, index, sharedStateData);
		}

		::System::Double AdvanceAnimation(::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& instanceData, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData& sampleData, ::System::Span_1_9011FAD97750D224<::Foundation::StateMachine::Parameter> parameters, ::System::Single deltaTime, ::System::Int32 layerIndex)
		{
			return ((::System::Double(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData&, ::System::Span_1_9011FAD97750D224<::Foundation::StateMachine::Parameter>, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_ADVANCEANIMATION_OFFSET))(this, instanceData, sampleData, parameters, deltaTime, layerIndex);
		}

		::System::Boolean UpdateState(::NPCCrowd::Animation::CPUStateMachine::AnimationStateData& instanceData, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& animation, ::Foundation::StateMachine::StateId newState, ::System::Double normalizedTime, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationStateData&, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::Foundation::StateMachine::StateId, ::System::Double, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_UPDATESTATE_OFFSET))(this, instanceData, animation, newState, normalizedTime, deltaTime);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}
	};
}
