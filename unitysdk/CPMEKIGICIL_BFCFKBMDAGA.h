#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class CPMEKIGICIL;
class CPMEKIGICIL_FEOFHEHNIIN;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CPMEKIGICIL_BFCFKBMDAGA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x722930)
#define CPMEKIGICIL_BFCFKBMDAGA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CPMEKIGICIL_BFCFKBMDAGA_TypeDefinitionIndex = 83473;

struct alignas(8) CPMEKIGICIL_BFCFKBMDAGA
{
	::CPMEKIGICIL* KLHPEBKNIFB; // 0x10
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x20
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::CPMEKIGICIL_FEOFHEHNIIN* PGDOJBDJBOL; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMEKIGICIL_BFCFKBMDAGA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CPMEKIGICIL_BFCFKBMDAGA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
