#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_GET_CURRENTNONPARENTTASKINDEX_OFFSET UNITYSDK_OFFSET(0x1FC11DB0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_GET_CURRENTNONPARENTTASK_OFFSET UNITYSDK_OFFSET(0x1FC11DF0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_GET_LASTNONPARENTTASKINFO_INDEX_OFFSET UNITYSDK_OFFSET(0x1FC11EA0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_GET_LASTNONPARENTTASKINFO_NAME_OFFSET UNITYSDK_OFFSET(0x1FC11E80)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_GET_LASTNONPARENTTASKSTATUS_OFFSET UNITYSDK_OFFSET(0x1FC11E60)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_GET_LASTNONPARENTTASK_OFFSET UNITYSDK_OFFSET(0x1FC11DD0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FC11EC0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_SET_CURRENTNONPARENTTASKINDEX_OFFSET UNITYSDK_OFFSET(0x1FC11DC0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_SET_CURRENTNONPARENTTASK_OFFSET UNITYSDK_OFFSET(0x1FC11E00)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_SET_LASTNONPARENTTASKINFO_INDEX_OFFSET UNITYSDK_OFFSET(0x1FC11EB0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_SET_LASTNONPARENTTASKINFO_NAME_OFFSET UNITYSDK_OFFSET(0x1FC11E90)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_SET_LASTNONPARENTTASKSTATUS_OFFSET UNITYSDK_OFFSET(0x1FC11E70)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_SET_LASTNONPARENTTASK_OFFSET UNITYSDK_OFFSET(0x1FC11DE0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC12380)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager_BehaviorTree_TypeDefinitionIndex = 33406;

	class BehaviorManager_BehaviorTree : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::Task*>* taskList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* conditionalReevaluateMap; // 0x18
		::BehaviorDesigner::Runtime::Tasks::Task* _lastNonParentTask_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* childConditionalIndex; // 0x28
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* childrenIndex; // 0x30
		::BehaviorDesigner::Runtime::Behavior* behavior; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* relativeChildIndex; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* parentIndex; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* parentCompositeIndex; // 0x50
		::BehaviorDesigner::Runtime::Tasks::Task* _currentNonParentTask; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* parentReevaluate; // 0x60
		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::TaskStatus>* interruptionTaskStatus; // 0x68
		::System::Collections::Generic::List_1<::BehaviorDesigner::Runtime::Tasks::TaskStatus>* nonInstantTaskStatus; // 0x70
		::System::String* _LastNonParentTaskInfo_Name_k__BackingField; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* interruptionIndex; // 0x80
		::System::Collections::Generic::List_1<::System::Object*>* conditionalReevaluate; // 0x88
		::System::Collections::Generic::List_1<::System::Collections::Generic::Stack_1<::System::Int32>*>* activeStack; // 0x90
		::System::String* errorState; // 0x98
		::System::Int32 stepTag; // 0xA0
		::System::Int32 executionCount; // 0xA4
		::System::Boolean destroyBehavior; // 0xA8
		::System::Byte _padding0[0x3];
		::System::Int32 _currentNonParentTaskIndex_k__BackingField; // 0xAC
		::System::Int32 _LastNonParentTaskInfo_Index_k__BackingField; // 0xB0
		::BehaviorDesigner::Runtime::Tasks::TaskStatus _LastNonParentTaskStatus_k__BackingField; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_currentNonParentTaskIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_GET_CURRENTNONPARENTTASKINDEX_OFFSET))(this);
		}

		::System::Void set_currentNonParentTaskIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_SET_CURRENTNONPARENTTASKINDEX_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::Tasks::Task* get_lastNonParentTask()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_GET_LASTNONPARENTTASK_OFFSET))(this);
		}

		::System::Void set_lastNonParentTask(::BehaviorDesigner::Runtime::Tasks::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_SET_LASTNONPARENTTASK_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::Tasks::Task* get_currentNonParentTask()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_GET_CURRENTNONPARENTTASK_OFFSET))(this);
		}

		::System::Void set_currentNonParentTask(::BehaviorDesigner::Runtime::Tasks::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_SET_CURRENTNONPARENTTASK_OFFSET))(this, value);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus get_LastNonParentTaskStatus()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_GET_LASTNONPARENTTASKSTATUS_OFFSET))(this);
		}

		::System::Void set_LastNonParentTaskStatus(::BehaviorDesigner::Runtime::Tasks::TaskStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_SET_LASTNONPARENTTASKSTATUS_OFFSET))(this, value);
		}

		::System::String* get_LastNonParentTaskInfo_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_GET_LASTNONPARENTTASKINFO_NAME_OFFSET))(this);
		}

		::System::Void set_LastNonParentTaskInfo_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_SET_LASTNONPARENTTASKINFO_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_LastNonParentTaskInfo_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_GET_LASTNONPARENTTASKINFO_INDEX_OFFSET))(this);
		}

		::System::Void set_LastNonParentTaskInfo_Index(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_SET_LASTNONPARENTTASKINFO_INDEX_OFFSET))(this, value);
		}

		::System::Void Initialize(::BehaviorDesigner::Runtime::Behavior* b)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORTREE_INITIALIZE_OFFSET))(this, b);
		}
	};
}
