#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AKFCOMPHBLJ_DMJLHGOHGKE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x726370)
#define AKFCOMPHBLJ_DMJLHGOHGKE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AKFCOMPHBLJ_DMJLHGOHGKE_TypeDefinitionIndex = 77064;

struct alignas(4) AKFCOMPHBLJ_DMJLHGOHGKE
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::System::Boolean HAPIHACMGPE; // 0x20
	::System::Byte _padding0[0x3];
	::System::Single FNIOPKPHDEH; // 0x24
	::System::Int32 MDPILDGFNHN; // 0x28
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x2C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_DMJLHGOHGKE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_DMJLHGOHGKE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
