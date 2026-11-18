#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/CoroutineIterator.h"
#include "unitysdk/Spine/Unity/UpdateTiming.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/Spine/Unity/SkeletonUpdateSystem_SkeletonUpdateRange.h"

namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine::Unity { class ISkeletonRenderer; }
namespace Spine::Unity { class SkeletonAnimationBase; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class AutoResetEvent; }
namespace System::Threading { class ManualResetEventSlim; }
namespace UnityEngine { class Object; }
template <typename T> class LockFreeWorkStealingWorkerPool_1;

#define SPINE_UNITY_SKELETONUPDATESYSTEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FD02060)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_DEFERREDLOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1FD02C10)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1FD03920)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_FLUSHSKELETONANIMATIONLISTMODIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1FD04F80)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_FLUSHSKELETONRENDERERLISTMODIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1FD05E40)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_GET_GROUPANIMATIONBYSKELETONTYPE_OFFSET UNITYSDK_OFFSET(0x1FD02DE0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_GET_GROUPRENDERERSBYSKELETONTYPE_OFFSET UNITYSDK_OFFSET(0x1FD02DC0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1FD01CC0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_GET_MAINTHREADUPDATECALLBACKS_OFFSET UNITYSDK_OFFSET(0x1FD02DA0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_GET_USEDTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1FD02D50)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_LATEUPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x1FD03990)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_LATEUPDATESKELETONSASYNCIMPL_OFFSET UNITYSDK_OFFSET(0x1FD06570)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_LATEUPDATESKELETONSASYNC_OFFSET UNITYSDK_OFFSET(0x1FD05960)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_LATEUPDATESKELETONSSYNCHRONOUS_OFFSET UNITYSDK_OFFSET(0x1FD05A50)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1FD03950)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_LOGWORKERTHREADEXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x1FD05BA0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_MAINTHREADAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1FD04EF0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_MAINTHREADBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1FD04660)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_MAINTHREADPREPARELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1FD05810)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FD02440)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_PARTITIONTASKS_OFFSET UNITYSDK_OFFSET(0x1FD04320)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_REGISTERFORUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1FD02FA0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_REGISTERFORUPDATE_OFFSET UNITYSDK_OFFSET(0x1FD02DF0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_SET_GROUPANIMATIONBYSKELETONTYPE_OFFSET UNITYSDK_OFFSET(0x1FD02DD0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_SET_GROUPRENDERERSBYSKELETONTYPE_OFFSET UNITYSDK_OFFSET(0x1FD02DB0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_SET_MAINTHREADUPDATECALLBACKS_OFFSET UNITYSDK_OFFSET(0x1FD02D90)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_SET_USEDTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1FD02D70)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_SKELETONSORTCOMPARER_1_OFFSET UNITYSDK_OFFSET(0x1FD02900)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_SKELETONSORTCOMPARER_OFFSET UNITYSDK_OFFSET(0x1FD024F0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_UNREGISTERFROMUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1FD03100)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_UNREGISTERFROMUPDATE_OFFSET UNITYSDK_OFFSET(0x1FD02EE0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATEASYNCSPLITMAINTHREADCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1FD04970)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATEASYNCTHREADEDCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1FD046F0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x1FD03270)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATESKELETONSASYNCIMPL_OFFSET UNITYSDK_OFFSET(0x1FD06020)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATESKELETONSASYNCSPLITIMPL_OFFSET UNITYSDK_OFFSET(0x1FD06240)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATESKELETONSASYNCSPLIT_OFFSET UNITYSDK_OFFSET(0x1FD05480)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATESKELETONSASYNC_OFFSET UNITYSDK_OFFSET(0x1FD051A0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATESKELETONSMAINTHREADSPLIT_OFFSET UNITYSDK_OFFSET(0x1FD05550)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATESKELETONSSYNCHRONOUS_OFFSET UNITYSDK_OFFSET(0x1FD05290)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FD03240)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_VOLATILEREAD_OFFSET UNITYSDK_OFFSET(0x1FD02D80)
#define SPINE_UNITY_SKELETONUPDATESYSTEM_WAITFORTHREADUPDATETASKS_OFFSET UNITYSDK_OFFSET(0x1FD05330)
#define SPINE_UNITY_SKELETONUPDATESYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD06BE0)
#define SPINE_UNITY_SKELETONUPDATESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD068A0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonUpdateSystem_TypeDefinitionIndex = 38212;

	class SkeletonUpdateSystem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action_2<::System::Object*, ::System::Int32>** StaticGet_cachedUpdateSkeletonsAsyncSplitImpl()
		{
			return (::System::Action_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SkeletonUpdateSystem_TypeDefinitionIndex)->GetStaticField(0x2DC80);
		}
		static ::Spine::Unity::SkeletonUpdateSystem** StaticGet_singletonInstance()
		{
			return (::Spine::Unity::SkeletonUpdateSystem**)Il2CppClass::FromTypeDefinitionIndex(SkeletonUpdateSystem_TypeDefinitionIndex)->GetStaticField(0x2DC88);
		}
		static ::System::Comparison_1<::Spine::Unity::SkeletonAnimationBase*>** StaticGet_SkeletonAnimationComparer()
		{
			return (::System::Comparison_1<::Spine::Unity::SkeletonAnimationBase*>**)Il2CppClass::FromTypeDefinitionIndex(SkeletonUpdateSystem_TypeDefinitionIndex)->GetStaticField(0x2DC90);
		}
		static ::System::Action_2<::System::Object*, ::System::Int32>** StaticGet_cachedLateUpdateSkeletonsAsyncImpl()
		{
			return (::System::Action_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SkeletonUpdateSystem_TypeDefinitionIndex)->GetStaticField(0x2DC98);
		}
		static ::System::Comparison_1<::Spine::Unity::ISkeletonRenderer*>** StaticGet_SkeletonRendererComparer()
		{
			return (::System::Comparison_1<::Spine::Unity::ISkeletonRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(SkeletonUpdateSystem_TypeDefinitionIndex)->GetStaticField(0x2DCA0);
		}
		static ::System::Action_2<::System::Object*, ::System::Int32>** StaticGet_cachedUpdateSkeletonsAsyncImpl()
		{
			return (::System::Action_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SkeletonUpdateSystem_TypeDefinitionIndex)->GetStaticField(0x2DCA8);
		}
		// static const ::System::Int32 TimeoutIterationCount = 0x2710; // 0x0
		::System::Int32 UpdateChunksPerThread; // 0x18
		::System::Int32 LateUpdateChunksPerThread; // 0x1C
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>* skeletonAnimationsUpdate; // 0x20
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>* skeletonAnimationsFixedUpdate; // 0x28
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>* skeletonAnimationsLateUpdate; // 0x30
		::System::Collections::Generic::List_1<::Spine::Unity::ISkeletonRenderer*>* skeletonRenderers; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* skeletonAnimationModifications; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* skeletonRendererModifications; // 0x48
		::System::Boolean isProcessingAnimations; // 0x50
		::System::Boolean isProcessingRenderers; // 0x51
		::System::Byte _padding0[0x6];
		::Il2CppArray<::System::Object*>* genericSkeletonTasks; // 0x58
		::LockFreeWorkStealingWorkerPool_1<::System::Object*>* workerPool; // 0x60
		::Spine::ExposedList_1<::System::Object*>* taskPartitionsUpdate; // 0x68
		::Spine::ExposedList_1<::System::Object*>* taskPartitionsLateUpdate; // 0x70
		::System::Collections::Generic::List_1<::System::Threading::ManualResetEventSlim*>* updateDone; // 0x78
		::System::Collections::Generic::List_1<::System::Threading::ManualResetEventSlim*>* lateUpdateDone; // 0x80
		::Il2CppArray<::System::Int32>* skeletonsLateUpdatedAtTask; // 0x88
		::Il2CppArray<::System::Int32>* mainThreadProcessedAtTask; // 0x90
		::System::Threading::AutoResetEvent* lateUpdateWorkAvailable; // 0x98
		::Il2CppArray<::System::Exception*>* exceptions; // 0xA0
		::Il2CppArray<::UnityEngine::Object*>* exceptionObjects; // 0xA8
		::System::Int32 numExceptionsSet; // 0xB0
		::System::Int32 usedThreadCount; // 0xB4
		::System::Boolean mainThreadUpdateCallbacks; // 0xB8
		::System::Byte _padding1[0x7];
		::Il2CppArray<::Spine::Unity::CoroutineIterator>* splitUpdateMethod; // 0xC0
		::System::Boolean sortSkeletonRenderers; // 0xC8
		::System::Boolean sortSkeletonAnimations; // 0xC9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM__CCTOR_OFFSET))();
		}

		static ::Spine::Unity::SkeletonUpdateSystem* get_Instance()
		{
			return ((::Spine::Unity::SkeletonUpdateSystem*(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_GET_INSTANCE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_ONDESTROY_OFFSET))(this);
		}

		static ::System::Int32 SkeletonSortComparer(::Spine::Unity::ISkeletonRenderer* first, ::Spine::Unity::ISkeletonRenderer* second)
		{
			return ((::System::Int32(*)(::Spine::Unity::ISkeletonRenderer*, ::Spine::Unity::ISkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_SKELETONSORTCOMPARER_OFFSET))(first, second);
		}

		static ::System::Int32 SkeletonSortComparer_1(::Spine::Unity::SkeletonAnimationBase* first, ::Spine::Unity::SkeletonAnimationBase* second)
		{
			return ((::System::Int32(*)(::Spine::Unity::SkeletonAnimationBase*, ::Spine::Unity::SkeletonAnimationBase*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_SKELETONSORTCOMPARER_1_OFFSET))(first, second);
		}

		::System::Void DeferredLogException(::System::Exception* exc, ::UnityEngine::Object* context, ::System::Int32 threadIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::UnityEngine::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_DEFERREDLOGEXCEPTION_OFFSET))(this, exc, context, threadIndex);
		}

		::System::Int32 get_UsedThreadCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_GET_USEDTHREADCOUNT_OFFSET))(this);
		}

		::System::Void set_UsedThreadCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_SET_USEDTHREADCOUNT_OFFSET))(this, value);
		}

		static ::System::Int32 VolatileRead(::System::Int32& location)
		{
			return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_VOLATILEREAD_OFFSET))(location);
		}

		::System::Void set_MainThreadUpdateCallbacks(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_SET_MAINTHREADUPDATECALLBACKS_OFFSET))(this, value);
		}

		::System::Boolean get_MainThreadUpdateCallbacks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_GET_MAINTHREADUPDATECALLBACKS_OFFSET))(this);
		}

		::System::Void set_GroupRenderersBySkeletonType(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_SET_GROUPRENDERERSBYSKELETONTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_GroupRenderersBySkeletonType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_GET_GROUPRENDERERSBYSKELETONTYPE_OFFSET))(this);
		}

		::System::Void set_GroupAnimationBySkeletonType(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_SET_GROUPANIMATIONBYSKELETONTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_GroupAnimationBySkeletonType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_GET_GROUPANIMATIONBYSKELETONTYPE_OFFSET))(this);
		}

		::System::Void RegisterForUpdate(::Spine::Unity::UpdateTiming updateTiming, ::Spine::Unity::SkeletonAnimationBase* skeletonAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateTiming, ::Spine::Unity::SkeletonAnimationBase*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_REGISTERFORUPDATE_OFFSET))(this, updateTiming, skeletonAnimation);
		}

		::System::Void UnregisterFromUpdate(::Spine::Unity::UpdateTiming updateTiming, ::Spine::Unity::SkeletonAnimationBase* skeletonAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateTiming, ::Spine::Unity::SkeletonAnimationBase*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_UNREGISTERFROMUPDATE_OFFSET))(this, updateTiming, skeletonAnimation);
		}

		::System::Void RegisterForUpdate_1(::Spine::Unity::ISkeletonRenderer* renderer)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_REGISTERFORUPDATE_1_OFFSET))(this, renderer);
		}

		::System::Void UnregisterFromUpdate_1(::Spine::Unity::ISkeletonRenderer* renderer)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_UNREGISTERFROMUPDATE_1_OFFSET))(this, renderer);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_LATEUPDATE_OFFSET))(this);
		}

		::System::Void UpdateAsync(::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>* skeletons, ::Spine::Unity::UpdateTiming updateTiming)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>*, ::Spine::Unity::UpdateTiming))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATEASYNC_OFFSET))(this, skeletons, updateTiming);
		}

		::System::Void PartitionTasks(::Spine::ExposedList_1<::System::Object*>*& taskPartitions, ::System::Int32& outAsyncEndExclusive, ::System::Int32 tasksPerThread, ::System::Int32 skeletonCount, ::System::Int32 numAsyncThreads, ::System::Int32 numAvailableThreads)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::System::Object*>*&, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_PARTITIONTASKS_OFFSET))(this, taskPartitions, outAsyncEndExclusive, tasksPerThread, skeletonCount, numAsyncThreads, numAvailableThreads);
		}

		::System::Void UpdateAsyncThreadedCallbacks(::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>* skeletons, ::Spine::Unity::UpdateTiming timing, ::Spine::ExposedList_1<::System::Object*>* asyncTaskPartitions, ::System::Int32 numAsyncThreads, ::System::Int32 skeletonEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>*, ::Spine::Unity::UpdateTiming, ::Spine::ExposedList_1<::System::Object*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATEASYNCTHREADEDCALLBACKS_OFFSET))(this, skeletons, timing, asyncTaskPartitions, numAsyncThreads, skeletonEnd);
		}

		::System::Void UpdateAsyncSplitMainThreadCallbacks(::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>* skeletons, ::Spine::Unity::UpdateTiming timing, ::Spine::ExposedList_1<::System::Object*>* asyncTaskPartitions, ::System::Int32 numAsyncThreads, ::System::Int32 skeletonEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>*, ::Spine::Unity::UpdateTiming, ::Spine::ExposedList_1<::System::Object*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATEASYNCSPLITMAINTHREADCALLBACKS_OFFSET))(this, skeletons, timing, asyncTaskPartitions, numAsyncThreads, skeletonEnd);
		}

		::System::Void MainThreadBeforeUpdate(::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>* skeletons, ::System::Int32 skeletonEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_MAINTHREADBEFOREUPDATE_OFFSET))(this, skeletons, skeletonEnd);
		}

		::System::Void MainThreadAfterUpdate(::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>* skeletons, ::System::Int32 skeletonEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_MAINTHREADAFTERUPDATE_OFFSET))(this, skeletons, skeletonEnd);
		}

		::System::Void LateUpdateAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_LATEUPDATEASYNC_OFFSET))(this);
		}

		::System::Void MainThreadPrepareLateUpdate(::System::Int32 endIndexThreaded)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_MAINTHREADPREPARELATEUPDATE_OFFSET))(this, endIndexThreaded);
		}

		::System::Void WaitForThreadUpdateTasks(::System::Int32 numAsyncTasks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_WAITFORTHREADUPDATETASKS_OFFSET))(this, numAsyncTasks);
		}

		::System::Void LogWorkerThreadExceptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_LOGWORKERTHREADEXCEPTIONS_OFFSET))(this);
		}

		::System::Void FlushSkeletonRendererListModifications()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_FLUSHSKELETONRENDERERLISTMODIFICATIONS_OFFSET))(this);
		}

		::System::Void FlushSkeletonAnimationListModifications()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_FLUSHSKELETONANIMATIONLISTMODIFICATIONS_OFFSET))(this);
		}

		::System::Void UpdateSkeletonsAsync(::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange range, ::System::Int32 threadIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATESKELETONSASYNC_OFFSET))(this, range, threadIndex);
		}

		static ::System::Void UpdateSkeletonsAsyncImpl(::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange range, ::System::Int32 threadIndex)
		{
			return ((::System::Void(*)(::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATESKELETONSASYNCIMPL_OFFSET))(range, threadIndex);
		}

		::System::Void UpdateSkeletonsAsyncSplit(::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange range, ::System::Int32 threadIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATESKELETONSASYNCSPLIT_OFFSET))(this, range, threadIndex);
		}

		static ::System::Void UpdateSkeletonsAsyncSplitImpl(::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange range, ::System::Int32 threadIndex)
		{
			return ((::System::Void(*)(::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATESKELETONSASYNCSPLITIMPL_OFFSET))(range, threadIndex);
		}

		::System::Boolean UpdateSkeletonsMainThreadSplit(::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>* skeletons, ::System::Int32 endIndexThreaded, ::System::Int32 frameCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATESKELETONSMAINTHREADSPLIT_OFFSET))(this, skeletons, endIndexThreaded, frameCount);
		}

		::System::Void UpdateSkeletonsSynchronous(::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>* skeletons, ::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange range)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Spine::Unity::SkeletonAnimationBase*>*, ::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_UPDATESKELETONSSYNCHRONOUS_OFFSET))(this, skeletons, range);
		}

		::System::Void LateUpdateSkeletonsAsync(::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange range, ::System::Int32 threadIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_LATEUPDATESKELETONSASYNC_OFFSET))(this, range, threadIndex);
		}

		static ::System::Void LateUpdateSkeletonsAsyncImpl(::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange range, ::System::Int32 threadIndex)
		{
			return ((::System::Void(*)(::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_LATEUPDATESKELETONSASYNCIMPL_OFFSET))(range, threadIndex);
		}

		::System::Void LateUpdateSkeletonsSynchronous(::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange range)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonUpdateSystem_SkeletonUpdateRange))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONUPDATESYSTEM_LATEUPDATESKELETONSSYNCHRONOUS_OFFSET))(this, range);
		}
	};
}
