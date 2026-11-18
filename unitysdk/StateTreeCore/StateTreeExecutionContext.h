#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeEvent.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionFrame.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionPriority.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionSource.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/NativeList_1.h"
#include "unitysdk/UnrealTypes/NativeStructList_1.h"
#include "unitysdk/UnrealTypes/RawPtr_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/StateTreeCore/CompactStateTreeState.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext___c__DisplayClass50_0.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionState.h"
#include "unitysdk/StateTreeCore/StateTreeTemporaryInstanceData.h"
#include "unitysdk/UnrealTypes/FInstancedPropertyBag.h"
#include "unitysdk/UnrealTypes/FInstancedStruct.h"
#include "unitysdk/UnrealTypes/FInstancedStructContainer.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"
#include "unitysdk/UnrealTypes/NativeListView_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyNativeListView_1.h"

namespace StateTreeCore { class StateTree; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define STATETREECORE_STATETREEEXECUTIONCONTEXT_ADDTEMPORARYINSTANCE_OFFSET UNITYSDK_OFFSET(0x965650)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_APPENDINSTANCESTRUCT_OFFSET UNITYSDK_OFFSET(0x1F2EBE40)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_COPYBATCHONACTIVEINSTANCES_OFFSET UNITYSDK_OFFSET(0x9657D0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_COPYBATCHWITHVALIDATION_OFFSET UNITYSDK_OFFSET(0x965810)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_DEBUGGETSTATEPATH_OFFSET UNITYSDK_OFFSET(0x965860)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x965130)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x965390)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x965380)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_FORMATINDENTSTRING_OFFSET UNITYSDK_OFFSET(0x1F2EF0C0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GETDATAVIEWORTEMPORARY_OFFSET UNITYSDK_OFFSET(0x965610)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GETDATAVIEW_1_OFFSET UNITYSDK_OFFSET(0x1F2ED8B0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GETDATAVIEW_OFFSET UNITYSDK_OFFSET(0x9654E0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GETSAFESTATENAME_OFFSET UNITYSDK_OFFSET(0x1F2EEE80)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GETSTATEFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x964F80)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GETSTATESTATUSSTRING_OFFSET UNITYSDK_OFFSET(0x1F2EFC10)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GETSTATETREERUNSTATUS_OFFSET UNITYSDK_OFFSET(0x9651F0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_CURRENTLYPROCESSEDFRAME_OFFSET UNITYSDK_OFFSET(0x964F70)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_CURRENTLYPROCESSEDPARENTFRAME_OFFSET UNITYSDK_OFFSET(0x7DB740)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_CURRENTLYPROCESSEDSTATE_OFFSET UNITYSDK_OFFSET(0x964F60)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_INSTANCEDATA_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x964D30)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_LOGINSTANCEID_OFFSET UNITYSDK_OFFSET(0x964E70)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_STATEPATH_OFFSET UNITYSDK_OFFSET(0x1F2EF0E0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_STATETREE_OFFSET UNITYSDK_OFFSET(0x964E80)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_HASEVENTTOPROCESS_OFFSET UNITYSDK_OFFSET(0x9654D0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_ISHANDLESOURCEVALID_OFFSET UNITYSDK_OFFSET(0x9655E0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_MEMSWAP_OFFSET UNITYSDK_OFFSET(0x1F2EC090)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_SETCONTEXTDATABYNAME_OFFSET UNITYSDK_OFFSET(0x9651C0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_SETGLOBALPARAMETERS_OFFSET UNITYSDK_OFFSET(0x965850)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_SETUPNEXTTRANSITION_OFFSET UNITYSDK_OFFSET(0x9653D0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_STARTGLOBALTASKS_OFFSET UNITYSDK_OFFSET(0x965330)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_STARTTEMPORARYGLOBALTASKS_OFFSET UNITYSDK_OFFSET(0x3B9490)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_STATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x965370)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_STOPGLOBALTASKS_OFFSET UNITYSDK_OFFSET(0x965340)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_STOPTEMPORARYGLOBALTASKS_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_TESTALLCONDITIONS_OFFSET UNITYSDK_OFFSET(0x9654C0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_TICKGLOBALTASKS_OFFSET UNITYSDK_OFFSET(0x965350)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_TICKTASKS_OFFSET UNITYSDK_OFFSET(0x965360)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT_UPDATEINSTANCEDATA_OFFSET UNITYSDK_OFFSET(0x9653A0)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x965120)
#define STATETREECORE_STATETREEEXECUTIONCONTEXT__UPDATEINSTANCEDATA_G__FINDINSTANCETEMPDATA_50_0_OFFSET UNITYSDK_OFFSET(0x1F2EBB30)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExecutionContext_TypeDefinitionIndex = 30968;

	struct alignas(8) StateTreeExecutionContext
	{
		static ::System::Text::StringBuilder** StaticGet__statePath()
		{
			return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(StateTreeExecutionContext_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 MaxIterations = 0x5; // 0x0
		// static const ::System::Int32 MaxExecutionFrames = 0x8; // 0x0
		// static const ::System::Int32 MaxConditionIndent = 0x4; // 0x0
		// static const ::System::Int32 DebugIndentSize = 0x4; // 0x0
		::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*> _rootStateTree; // 0x10
		::UnrealTypes::RawPtr_1<::StateTreeCore::StateTreeInstanceData> _instanceData; // 0x18
		::UnrealTypes::NativeList_1<::StateTreeCore::StateTreeDataView> _contextAndExternalDataViews; // 0x20
		::System::Byte _padding0[0x10];
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeEvent> _eventToProcess; // 0x38
		::System::Byte _padding1[0x10];
		::UnrealTypes::NativeList_1<::System::ValueTuple_2<::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*>, ::System::UInt16>> _collectedExternalCache; // 0x50
		::System::Byte _padding2[0x10];
		::System::Boolean _isActiveExternalDataCollected; // 0x68
		::System::Byte _padding3[0x7];
		::StateTreeCore::StateTreeTransitionResult _nextTransition; // 0x70
		::StateTreeCore::StateTreeTransitionSource _nextTransitionSource; // 0xA0
		::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> _currentlyProcessedParentFrame; // 0xA8
		::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> _currentlyProcessedFrame; // 0xB0
		::UnrealTypes::RawPtr_1<::StateTreeCore::StateTreeInstanceData> _currentlyProcessedSharedInstanceData; // 0xB8
		::StateTreeCore::StateTreeStateHandle _currentlyProcessedState; // 0xC0
		::StateTreeCore::StateTreeDataHandle _currentNodeDataHandle; // 0xC2
		::StateTreeCore::StateTreeDataView _currentNodeInstanceData; // 0xC8

		::System::Void _ctor(::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*> stateTree, ::UnrealTypes::RawPtr_1<::StateTreeCore::StateTreeInstanceData> instanceData, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::StateTreeCore::StateTree*>, ::UnrealTypes::RawPtr_1<::StateTreeCore::StateTreeInstanceData>, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT__CTOR_OFFSET))(this, stateTree, instanceData, allocator);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_ISVALID_OFFSET))(this);
		}

		::System::Int32 get_LogInstanceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_LOGINSTANCEID_OFFSET))(this);
		}

		::StateTreeCore::StateTree* get_StateTree()
		{
			return ((::StateTreeCore::StateTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_STATETREE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeInstanceData& get_InstanceData()
		{
			return ((::StateTreeCore::StateTreeInstanceData&(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_INSTANCEDATA_OFFSET))(this);
		}

		::StateTreeCore::StateTreeStateHandle get_CurrentlyProcessedState()
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_CURRENTLYPROCESSEDSTATE_OFFSET))(this);
		}

		::StateTreeCore::StateTreeExecutionFrame& get_CurrentlyProcessedFrame()
		{
			return ((::StateTreeCore::StateTreeExecutionFrame&(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_CURRENTLYPROCESSEDFRAME_OFFSET))(this);
		}

		::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> get_CurrentlyProcessedParentFrame()
		{
			return ((::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_CURRENTLYPROCESSEDPARENTFRAME_OFFSET))(this);
		}

		::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::CompactStateTreeState> GetStateFromHandle(::StateTreeCore::StateTreeStateHandle stateHandle)
		{
			return ((::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::CompactStateTreeState>(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GETSTATEFROMHANDLE_OFFSET))(this, stateHandle);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Boolean SetContextDataByName(::Foundation::Unreal::FName name, ::StateTreeCore::StateTreeDataView dataView)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FName, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_SETCONTEXTDATABYNAME_OFFSET))(this, name, dataView);
		}

		::StateTreeCore::StateTreeRunStatus GetStateTreeRunStatus()
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GETSTATETREERUNSTATUS_OFFSET))(this);
		}

		::StateTreeCore::StateTreeRunStatus StartGlobalTasks(::System::UInt16& outLastInitializedTaskIndex)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::System::UInt16&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_STARTGLOBALTASKS_OFFSET))(this, outLastInitializedTaskIndex);
		}

		::System::Void StopGlobalTasks(::StateTreeCore::StateTreeRunStatus completionStatus, ::System::UInt16 lastInitializedTaskIndex)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeRunStatus, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_STOPGLOBALTASKS_OFFSET))(this, completionStatus, lastInitializedTaskIndex);
		}

		::StateTreeCore::StateTreeRunStatus StartTemporaryGlobalTasks(::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> currentParentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_STARTTEMPORARYGLOBALTASKS_OFFSET))(this, currentParentFrame, currentFrame);
		}

		::System::Void StopTemporaryGlobalTasks(::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeTemporaryInstanceData> tempInstances)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeTemporaryInstanceData>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_STOPTEMPORARYGLOBALTASKS_OFFSET))(this, tempInstances);
		}

		::StateTreeCore::StateTreeRunStatus TickGlobalTasks(::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_TICKGLOBALTASKS_OFFSET))(this, deltaTime);
		}

		::StateTreeCore::StateTreeRunStatus TickTasks(::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_TICKTASKS_OFFSET))(this, deltaTime);
		}

		::System::Void StateCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_STATECOMPLETED_OFFSET))(this);
		}

		::System::Void ExitState(::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_EXITSTATE_OFFSET))(this, transition);
		}

		::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_ENTERSTATE_OFFSET))(this, transition);
		}

		::System::Void UpdateInstanceData(::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExecutionFrame> currentActiveFrames, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeExecutionFrame> nextActiveFrames)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExecutionFrame>, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeExecutionFrame>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_UPDATEINSTANCEDATA_OFFSET))(this, currentActiveFrames, nextActiveFrames);
		}

		static ::System::Void AppendInstanceStruct(::UnrealTypes::FInstancedStructContainer& container, ::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::FReadOnlyStructView> inStructs, ::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::RawPtr_1<::UnrealTypes::FInstancedStruct>> inInstancesToMove)
		{
			return ((::System::Void(*)(::UnrealTypes::FInstancedStructContainer&, ::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::FReadOnlyStructView>, ::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::RawPtr_1<::UnrealTypes::FInstancedStruct>>))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_APPENDINSTANCESTRUCT_OFFSET))(container, inStructs, inInstancesToMove);
		}

		static ::System::Void MemSwap(::PVOID destination, ::PVOID source, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_MEMSWAP_OFFSET))(destination, source, size);
		}

		::System::Void SetupNextTransition(::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::StateTreeCore::StateTreeStateHandle nextState, ::StateTreeCore::StateTreeTransitionPriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeStateHandle, ::StateTreeCore::StateTreeTransitionPriority))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_SETUPNEXTTRANSITION_OFFSET))(this, currentFrame, nextState, priority);
		}

		::System::Boolean TestAllConditions(::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> currentParentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::System::Int32 conditionsOffset, ::System::Int32 conditionsNum)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_TESTALLCONDITIONS_OFFSET))(this, currentParentFrame, currentFrame, conditionsOffset, conditionsNum);
		}

		::System::Boolean HasEventToProcess(::Foundation::Unreal::FGameplayTag& tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_HASEVENTTOPROCESS_OFFSET))(this, tag);
		}

		::StateTreeCore::StateTreeDataView GetDataView(::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> parentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::StateTreeCore::StateTreeDataHandle handle)
		{
			return ((::StateTreeCore::StateTreeDataView(*)(::PVOID, ::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GETDATAVIEW_OFFSET))(this, parentFrame, currentFrame, handle);
		}

		static ::StateTreeCore::StateTreeDataView GetDataView_1(::StateTreeCore::StateTreeInstanceData& instanceData, ::UnrealTypes::RawPtr_1<::StateTreeCore::StateTreeInstanceData> currentlyProcessedSharedInstanceData, ::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> parentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView> contextAndExternalDataViews, ::StateTreeCore::StateTreeDataHandle handle)
		{
			return ((::StateTreeCore::StateTreeDataView(*)(::StateTreeCore::StateTreeInstanceData&, ::UnrealTypes::RawPtr_1<::StateTreeCore::StateTreeInstanceData>, ::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView>, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GETDATAVIEW_1_OFFSET))(instanceData, currentlyProcessedSharedInstanceData, parentFrame, currentFrame, contextAndExternalDataViews, handle);
		}

		::System::Boolean IsHandleSourceValid(::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> parentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::StateTreeCore::StateTreeDataHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_ISHANDLESOURCEVALID_OFFSET))(this, parentFrame, currentFrame, handle);
		}

		::StateTreeCore::StateTreeDataView GetDataViewOrTemporary(::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> parentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::StateTreeCore::StateTreeDataHandle handle)
		{
			return ((::StateTreeCore::StateTreeDataView(*)(::PVOID, ::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GETDATAVIEWORTEMPORARY_OFFSET))(this, parentFrame, currentFrame, handle);
		}

		::StateTreeCore::StateTreeDataView AddTemporaryInstance(::StateTreeCore::StateTreeExecutionFrame& frame, ::System::UInt16 ownerNodeIndex, ::StateTreeCore::StateTreeDataHandle dataHandle, ::UnrealTypes::FReadOnlyStructView newInstanceData)
		{
			return ((::StateTreeCore::StateTreeDataView(*)(::PVOID, ::StateTreeCore::StateTreeExecutionFrame&, ::System::UInt16, ::StateTreeCore::StateTreeDataHandle, ::UnrealTypes::FReadOnlyStructView))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_ADDTEMPORARYINSTANCE_OFFSET))(this, frame, ownerNodeIndex, dataHandle, newInstanceData);
		}

		::System::Boolean CopyBatchOnActiveInstances(::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> parentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::StateTreeCore::StateTreeDataView targetView, ::System::UInt16 bindingsBatch)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeDataView, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_COPYBATCHONACTIVEINSTANCES_OFFSET))(this, parentFrame, currentFrame, targetView, bindingsBatch);
		}

		::System::Boolean CopyBatchWithValidation(::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame> parentFrame, ::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::StateTreeCore::StateTreeDataView targetView, ::System::UInt16 bindingsBatch)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreeExecutionFrame>, ::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeDataView, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_COPYBATCHWITHVALIDATION_OFFSET))(this, parentFrame, currentFrame, targetView, bindingsBatch);
		}

		::System::Boolean SetGlobalParameters(::UnrealTypes::FInstancedPropertyBag& parameters)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FInstancedPropertyBag&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_SETGLOBALPARAMETERS_OFFSET))(this, parameters);
		}

		static ::System::String* GetSafeStateName(::StateTreeCore::StateTreeExecutionFrame& currentFrame, ::StateTreeCore::StateTreeStateHandle state)
		{
			return ((::System::String*(*)(::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GETSAFESTATENAME_OFFSET))(currentFrame, state);
		}

		static ::System::String* FormatIndentString(::System::Int32 index)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_FORMATINDENTSTRING_OFFSET))(index);
		}

		static ::System::Text::StringBuilder* get_StatePath()
		{
			return ((::System::Text::StringBuilder*(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GET_STATEPATH_OFFSET))();
		}

		::System::String* DebugGetStatePath(::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExecutionFrame> activeFrames, ::System::Int32 currentFrameIndex, ::System::Int32 activeStateIndex)
		{
			return ((::System::String*(*)(::PVOID, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExecutionFrame>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_DEBUGGETSTATEPATH_OFFSET))(this, activeFrames, currentFrameIndex, activeStateIndex);
		}

		static ::System::String* GetStateStatusString(::StateTreeCore::StateTreeExecutionState& execState)
		{
			return ((::System::String*(*)(::StateTreeCore::StateTreeExecutionState&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT_GETSTATESTATUSSTRING_OFFSET))(execState);
		}

		static ::UnrealTypes::RawPtr_1<::UnrealTypes::FInstancedStruct> _UpdateInstanceData_g__FindInstanceTempData_50_0(::StateTreeCore::StateTreeExecutionFrame& frame, ::StateTreeCore::StateTreeDataHandle dataHandle, ::StateTreeCore::StateTreeExecutionContext___c__DisplayClass50_0& param_2)
		{
			return ((::UnrealTypes::RawPtr_1<::UnrealTypes::FInstancedStruct>(*)(::StateTreeCore::StateTreeExecutionFrame&, ::StateTreeCore::StateTreeDataHandle, ::StateTreeCore::StateTreeExecutionContext___c__DisplayClass50_0&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXECUTIONCONTEXT__UPDATEINSTANCEDATA_G__FINDINSTANCETEMPDATA_50_0_OFFSET))(frame, dataHandle, param_2);
		}
	};
}
