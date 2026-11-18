#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Composite.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedInt; }

#define MOLEMOLE_NAPREPEATER_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x11947570)
#define MOLEMOLE_NAPREPEATER_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x119474B0)
#define MOLEMOLE_NAPREPEATER_DECORATE_OFFSET UNITYSDK_OFFSET(0x119478F0)
#define MOLEMOLE_NAPREPEATER_FINALOVERRIDE_OFFSET UNITYSDK_OFFSET(0x119478A0)
#define MOLEMOLE_NAPREPEATER_MAXCHILDREN_OFFSET UNITYSDK_OFFSET(0x119475E0)
#define MOLEMOLE_NAPREPEATER_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x11947630)
#define MOLEMOLE_NAPREPEATER_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x119477F0)
#define MOLEMOLE_NAPREPEATER_ONEND_OFFSET UNITYSDK_OFFSET(0x11947850)
#define MOLEMOLE_NAPREPEATER_ONSTART_OFFSET UNITYSDK_OFFSET(0x11947500)
#define MOLEMOLE_NAPREPEATER__CTOR_OFFSET UNITYSDK_OFFSET(0x11947940)
#define MOLEMOLE_NAPREPEATER___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x119479F0)
#define MOLEMOLE_NAPREPEATER___BASE_CURRENTCHILDINDEX_OFFSET UNITYSDK_OFFSET(0x11947A80)
#define MOLEMOLE_NAPREPEATER___BASE_DECORATE_OFFSET UNITYSDK_OFFSET(0x11947B10)
#define MOLEMOLE_NAPREPEATER___BASE_FINALOVERRIDE_OFFSET UNITYSDK_OFFSET(0x11947BA0)
#define MOLEMOLE_NAPREPEATER___BASE_MAXCHILDREN_OFFSET UNITYSDK_OFFSET(0x11947C30)
#define MOLEMOLE_NAPREPEATER___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x11947CC0)
#define MOLEMOLE_NAPREPEATER___BASE_ONCONDITIONALABORT_OFFSET UNITYSDK_OFFSET(0x11947D50)
#define MOLEMOLE_NAPREPEATER___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x11947DE0)
#define MOLEMOLE_NAPREPEATER___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x11947E70)

namespace MoleMole
{
	inline static constexpr unsigned int NapRepeater_TypeDefinitionIndex = 48187;

	class NapRepeater : public ::BehaviorDesigner::Runtime::Tasks::Composite
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* endOnFailure; // 0x60
		::BehaviorDesigner::Runtime::SharedInt* count; // 0x68
		::BehaviorDesigner::Runtime::SharedBool* repeatForever; // 0x70
		::System::Int32 executionCount; // 0x78
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x7C
		::System::Int32 currentChildIndex; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER__CTOR_OFFSET))(this);
		}

		::System::Int32 CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_ONSTART_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 MaxChildren()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_MAXCHILDREN_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnConditionalAbort(::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_ONCONDITIONALABORT_OFFSET))(this, childIndex);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_ONEND_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus FinalOverride(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_FINALOVERRIDE_OFFSET))(this, status);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus Decorate(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER_DECORATE_OFFSET))(this, status);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Int32 __base_CurrentChildIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_CURRENTCHILDINDEX_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_Decorate(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_DECORATE_OFFSET))(this, P0);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_FinalOverride(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_FINALOVERRIDE_OFFSET))(this, P0);
		}

		::System::Int32 __base_MaxChildren()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_MAXCHILDREN_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnConditionalAbort(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_ONCONDITIONALABORT_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPREPEATER___BASE_ONSTART_OFFSET))(this);
		}
	};
}
