#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/Foundation/Adapter/ReadOnlyChunkListView2D_1.h"
#include "unitysdk/Foundation/Adapter/ReadOnlyChunkListView_1.h"
#include "unitysdk/Foundation/Container/NativeVector_1.h"
#include "unitysdk/Foundation/StateMachine/Parameter.h"
#include "unitysdk/Foundation/StateMachine/ParameterId.h"
#include "unitysdk/Foundation/StateMachine/StateId.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/SharedData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/SharedStateData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_StateMachineProcessor_ParallelJob_DispatchIndex.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_ADVANCEANIMATION_OFFSET UNITYSDK_OFFSET(0xF146EC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_EXECUTEWITHCONTEXT_OFFSET UNITYSDK_OFFSET(0x5D1D80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5D1D70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_GETSHAREDDATA_OFFSET UNITYSDK_OFFSET(0xF146D00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0xF146B90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0xF1471B0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_StateMachineProcessor_ParallelJob_TypeDefinitionIndex = 81163;

	struct alignas(8) AnimationSubManager_StateMachineProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_StateMachineProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x476B0);
		}
		::System::Single _deltaTime; // 0x10
		::System::Int32 _frameCount; // 0x14
		::Unity::Collections::NativeHashMap_2<::System::Object*, ::System::Single> _transitionDictionary; // 0x18
		::System::Byte _padding0[0x8];
		::System::Single _defaultTransitionTime; // 0x28
		::System::Int32 _sourceIndex; // 0x2C

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::NPCCrowd::Animation::AnimationSubManager_StateMachineProcessor_ParallelJob_DispatchIndex& dispatchIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_StateMachineProcessor_ParallelJob_DispatchIndex&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, dispatchIndex);
		}

		static ::NPCCrowd::Animation::CPUStateMachine::SharedData GetSharedData(::Foundation::Adapter::ReadOnlyChunkListView2D_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData> sharedStateDataView, ::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::CPUStateMachine::SharedData> sharedDataView, ::System::Int32 index, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>& sharedStateData)
		{
			return ((::NPCCrowd::Animation::CPUStateMachine::SharedData(*)(::Foundation::Adapter::ReadOnlyChunkListView2D_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>, ::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::CPUStateMachine::SharedData>, ::System::Int32, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_GETSHAREDDATA_OFFSET))(sharedStateDataView, sharedDataView, index, sharedStateData);
		}

		static ::System::Double AdvanceAnimation(::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& instanceData, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData& sampleData, ::System::Span_1_9011FAD97750D224<::Foundation::StateMachine::Parameter> parameters, ::System::Single deltaTime, ::System::Int32 layerIndex, ::Foundation::Container::NativeVector_1<::Foundation::StateMachine::ParameterId> normalizedTimeIds)
		{
			return ((::System::Double(*)(::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData&, ::System::Span_1_9011FAD97750D224<::Foundation::StateMachine::Parameter>, ::System::Single, ::System::Int32, ::Foundation::Container::NativeVector_1<::Foundation::StateMachine::ParameterId>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_ADVANCEANIMATION_OFFSET))(instanceData, sampleData, parameters, deltaTime, layerIndex, normalizedTimeIds);
		}

		static ::System::Boolean UpdateState(::NPCCrowd::Animation::CPUStateMachine::AnimationStateData& instanceData, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& animation, ::Foundation::StateMachine::StateId newState, ::System::Double normalizedTime, ::System::Single deltaTime, ::Foundation::Adapter::ReadOnlyChunkListView2D_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData> sharedStateDataView, ::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::CPUStateMachine::SharedData> sharedDataView)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::CPUStateMachine::AnimationStateData&, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::Foundation::StateMachine::StateId, ::System::Double, ::System::Single, ::Foundation::Adapter::ReadOnlyChunkListView2D_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>, ::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::CPUStateMachine::SharedData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_UPDATESTATE_OFFSET))(instanceData, animation, newState, normalizedTime, deltaTime, sharedStateDataView, sharedDataView);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		::System::Void ExecuteWithContext(::System::Int32 chunkIndex, ::System::Single deltaTime, ::System::Int32 frameCount, ::Unity::Collections::NativeHashMap_2<::System::Object*, ::System::Single> transitionDictionary, ::System::Single defaultTransitionTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::Unity::Collections::NativeHashMap_2<::System::Object*, ::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_STATEMACHINEPROCESSOR_PARALLELJOB_EXECUTEWITHCONTEXT_OFFSET))(this, chunkIndex, deltaTime, frameCount, transitionDictionary, defaultTransitionTime);
		}
	};
}
