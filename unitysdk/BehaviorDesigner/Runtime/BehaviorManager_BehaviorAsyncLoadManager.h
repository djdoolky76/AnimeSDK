#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorAsyncLoadItem; }
namespace BehaviorDesigner::Runtime::Tasks { class GameObjectGetter; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Func_6; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Text { class StringBuilder; }
namespace System::Threading::Tasks { class Task; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_CREATTASKWORK_OFFSET UNITYSDK_OFFSET(0x1EAF8500)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EAF8170)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_FOREGROUNDTICK_OFFSET UNITYSDK_OFFSET(0x1EAF8600)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_GET_DEBUGCURPENDINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1EAF8210)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_GET_DEBUGCURWORKINGTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1EAF8200)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_GET_DEBUGISVALIDTASK_OFFSET UNITYSDK_OFFSET(0x1EAF8220)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_GET_PENDINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1EAF8230)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_PREPARESUBTREELOADINGREQUEST_OFFSET UNITYSDK_OFFSET(0x1EAF91B0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_PUSHLOADINGREQUEST_OFFSET UNITYSDK_OFFSET(0x1EAF8280)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF9990)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF7F90)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER__NOTIFYONELOADITEM_OFFSET UNITYSDK_OFFSET(0x1EAF9010)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER__TASKPROCESSIMPL_OFFSET UNITYSDK_OFFSET(0x1EAF93E0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER__TASKPROCESS_OFFSET UNITYSDK_OFFSET(0x1EAF92D0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager_BehaviorAsyncLoadManager_TypeDefinitionIndex = 33400;

	class BehaviorManager_BehaviorAsyncLoadManager : public ::System::Object
	{
	public:
		static ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadManager** StaticGet_s_lazyInstance()
		{
			return (::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadManager**)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_BehaviorAsyncLoadManager_TypeDefinitionIndex)->GetStaticField(0x29F60);
		}
		static ::System::Int32* StaticGet_s_SharedWorkerCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_BehaviorAsyncLoadManager_TypeDefinitionIndex)->GetStaticField(0x8670);
		}
		// static const ::System::Int32 _MAX_WORKER_COUNT = 0x1; // 0x0
		// static const ::System::Int32 _MAX_THREAD_COUNT_ONE_WORKER = 0x1; // 0x0
		::System::Collections::Concurrent::ConcurrentQueue_1<::System::Object*>* _subTreeQueue; // 0x10
		::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::System::Object*>* _delayFinishedLoadItems; // 0x18
		::System::Threading::Tasks::Task* processTask; // 0x20
		::System::Collections::Concurrent::ConcurrentQueue_1<::System::Object*>* _pendingQueue; // 0x28
		::System::Func_6<::BehaviorDesigner::Runtime::Behavior*, ::UnityEngine::GameObject*, ::System::String*, ::UnityEngine::Transform*, ::BehaviorDesigner::Runtime::Tasks::GameObjectGetter*, ::System::Object*>* loadFunc; // 0x30
		::System::Object* _lockObj; // 0x38
		::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem* _lastItem; // 0x40
		::System::Collections::Concurrent::ConcurrentQueue_1<::System::Object*>* _finishQueue; // 0x48
		::System::Text::StringBuilder* errorWriteInfo; // 0x50
		::System::Boolean _isValidTask; // 0x58
		::System::Byte _padding0[0x3];
		::System::Single _foregroundTime; // 0x5C
		::System::Int32 _curPendingCount; // 0x60
		::System::Int32 _curWorkingThreadCount; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Int32 get_DebugCurWorkingThreadCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_GET_DEBUGCURWORKINGTHREADCOUNT_OFFSET))(this);
		}

		::System::Int32 get_DebugCurPendingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_GET_DEBUGCURPENDINGCOUNT_OFFSET))(this);
		}

		::System::Boolean get_DebugIsValidTask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_GET_DEBUGISVALIDTASK_OFFSET))(this);
		}

		::System::Int32 get_PendingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_GET_PENDINGCOUNT_OFFSET))(this);
		}

		::System::Void PushLoadingRequest(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem* loadItem)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_PUSHLOADINGREQUEST_OFFSET))(this, loadItem);
		}

		::System::Void ForegroundTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_FOREGROUNDTICK_OFFSET))(this);
		}

		::System::Void PrepareSubTreeLoadingRequest(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem* loadItem)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_PREPARESUBTREELOADINGREQUEST_OFFSET))(this, loadItem);
		}

		::System::Void _NotifyOneLoadItem(::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem* loadItem)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorAsyncLoadItem*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER__NOTIFYONELOADITEM_OFFSET))(this, loadItem);
		}

		::System::Void CreatTaskWork()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER_CREATTASKWORK_OFFSET))(this);
		}

		::System::Void _TaskProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER__TASKPROCESS_OFFSET))(this);
		}

		::System::Void _TaskProcessImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORASYNCLOADMANAGER__TASKPROCESSIMPL_OFFSET))(this);
		}
	};
}
