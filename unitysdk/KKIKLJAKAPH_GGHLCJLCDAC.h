#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KKIKLJAKAPH_GGHLCJLCDAC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7CE3C0)
#define KKIKLJAKAPH_GGHLCJLCDAC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KKIKLJAKAPH_GGHLCJLCDAC_TypeDefinitionIndex = 55563;

struct alignas(4) KKIKLJAKAPH_GGHLCJLCDAC
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x20
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x30
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_GGHLCJLCDAC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_GGHLCJLCDAC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
