#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class GNACLIIBMED;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Transform; }

#define GNACLIIBMED_LKKAOBMMPCE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B33F0)
#define GNACLIIBMED_LKKAOBMMPCE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GNACLIIBMED_LKKAOBMMPCE_TypeDefinitionIndex = 40203;

struct alignas(8) GNACLIIBMED_LKKAOBMMPCE
{
	::UnityEngine::Transform* KJKMJAHEFPI; // 0x10
	::GNACLIIBMED* KLHPEBKNIFB; // 0x18
	::System::Object* IELMICFKAAI; // 0x20
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_LKKAOBMMPCE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GNACLIIBMED_LKKAOBMMPCE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
