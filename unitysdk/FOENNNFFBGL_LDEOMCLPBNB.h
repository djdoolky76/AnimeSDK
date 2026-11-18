#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FOENNNFFBGL;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FOENNNFFBGL_LDEOMCLPBNB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A9B00)
#define FOENNNFFBGL_LDEOMCLPBNB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FOENNNFFBGL_LDEOMCLPBNB_TypeDefinitionIndex = 47047;

struct alignas(8) FOENNNFFBGL_LDEOMCLPBNB
{
	::FOENNNFFBGL* KLHPEBKNIFB; // 0x10
	::System::Action* ECBDIDAFOHD; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOENNNFFBGL_LDEOMCLPBNB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FOENNNFFBGL_LDEOMCLPBNB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
