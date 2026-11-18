#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/MLGOKCHMCPO.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class DGNJFMLPEPN;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DGNJFMLPEPN_FEKPLIILBOC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7EEA10)
#define DGNJFMLPEPN_FEKPLIILBOC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DGNJFMLPEPN_FEKPLIILBOC_TypeDefinitionIndex = 73039;

struct alignas(8) DGNJFMLPEPN_FEKPLIILBOC
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x20
	::DGNJFMLPEPN* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x34
	::System::Single MNDBCGMJPAI; // 0x38
	::MLGOKCHMCPO NGIMPFDABMF; // 0x3C
	::System::Single LDPAJLOPMCA; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_FEKPLIILBOC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DGNJFMLPEPN_FEKPLIILBOC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
