#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace Foundation::ViewObject { class GroupVariableHelper; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PULL_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A9B30)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PULL_D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper__Pull_d__12_TypeDefinitionIndex = 41714;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
	struct alignas(8) GroupVariableHelper__Pull_d__12
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::System::Object* __u__1; // 0x20
		::System::Byte _padding0[0x10];
		::Foundation::ViewObject::GroupVariableHelper* __4__this; // 0x38
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* resultTcs; // 0x40
		::System::UInt32 groupID; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PULL_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__PULL_D__12_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
