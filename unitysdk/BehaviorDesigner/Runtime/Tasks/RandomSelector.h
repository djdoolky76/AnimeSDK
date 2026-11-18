#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1FC142F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1FC142A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1FC14010)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1FC14350)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1FC143C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONEND_OFFSET UNITYSDK_OFFSET(0x1FC14430)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1FC14490)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONSTART_OFFSET UNITYSDK_OFFSET(0x1FC140D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_SHUFFLECHILDEN_OFFSET UNITYSDK_OFFSET(0x1FC14120)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC144E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1FC14610)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x1FC146A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1FC14730)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1FC147C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x1FC14850)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1FC148E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1FC14970)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1FC14A00)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int RandomSelector_TypeDefinitionIndex = 33535;

	class RandomSelector : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* childIndexList; // 0x60
		::System::Collections::Generic::Stack_1<::System::Int32>* childrenExecutionOrder; // 0x68
		::System::Int32 seed; // 0x70
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x74
		::System::Boolean useSeed; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONSTART_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONEND_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_ONRESET_OFFSET))(this);
		}

		::System::Void ShuffleChilden()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR_SHUFFLECHILDEN_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RANDOMSELECTOR___BASE_ONSTART_OFFSET))(this);
		}
	};
}
