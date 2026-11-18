#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class AGBFEJMILMI;
class FBAMLABJMKF;
class NAAFMIMIPCF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AGBFEJMILMI_IENBILEHHIH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7060E0)
#define AGBFEJMILMI_IENBILEHHIH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AGBFEJMILMI_IENBILEHHIH_TypeDefinitionIndex = 73244;

struct alignas(8) AGBFEJMILMI_IENBILEHHIH
{
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x10
	::FBAMLABJMKF* AKCCBOJKOJL; // 0x18
	::NAAFMIMIPCF* FHHHKKGLDGG; // 0x20
	::AGBFEJMILMI* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBFEJMILMI_IENBILEHHIH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AGBFEJMILMI_IENBILEHHIH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
