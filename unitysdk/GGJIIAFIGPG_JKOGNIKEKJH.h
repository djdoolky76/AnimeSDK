#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class GGJIIAFIGPG;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GGJIIAFIGPG_JKOGNIKEKJH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x743950)
#define GGJIIAFIGPG_JKOGNIKEKJH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x743960)

inline static constexpr unsigned int GGJIIAFIGPG_JKOGNIKEKJH_TypeDefinitionIndex = 60146;

struct alignas(8) GGJIIAFIGPG_JKOGNIKEKJH
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Object* GHANCJDIDBC; // 0x20
	::System::Byte _padding0[0x10];
	::GGJIIAFIGPG* KLHPEBKNIFB; // 0x38
	::System::Action* LOJFLJJAKFJ; // 0x40
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJIIAFIGPG_JKOGNIKEKJH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GGJIIAFIGPG_JKOGNIKEKJH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
