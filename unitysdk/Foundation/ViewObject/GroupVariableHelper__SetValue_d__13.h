#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class BIJIGJPHCED;
namespace Foundation::ViewObject { class GroupVariableHelper; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__SETVALUE_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A9B40)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__SETVALUE_D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper__SetValue_d__13_TypeDefinitionIndex = 41718;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	struct alignas(8) GroupVariableHelper__SetValue_d__13
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Foundation::ViewObject::GroupVariableHelper* __4__this; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x28
		::System::Byte _padding0[0x10];
		::System::ValueTuple_2<::System::UInt32, ::System::String*> key; // 0x40
		::System::Byte _padding1[0x8];
		::System::Object* __u__2; // 0x50
		::System::Byte _padding2[0x8];
		::BIJIGJPHCED* reason; // 0x60
		::System::Int32 value; // 0x68
		::System::Int32 __1__state; // 0x6C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__SETVALUE_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER__SETVALUE_D__13_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
