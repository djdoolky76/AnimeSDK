#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class BIJIGJPHCED;
class IHNJCJPPBIH;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace Foundation::ViewObject { class GroupVariableHelper; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PUSH_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7600D0)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PUSH_D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper__Push_d__15_TypeDefinitionIndex = 41716;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
	struct alignas(8) GroupVariableHelper__Push_d__15
	{
		::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IHNJCJPPBIH*>*>* resultTcs; // 0x10
		::BIJIGJPHCED* reason; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::Foundation::ViewObject::GroupVariableHelper* __4__this; // 0x30
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x38
		::System::Object* __8__1; // 0x48
		::System::Int32 __1__state; // 0x50
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PUSH_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PUSH_D__15_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
