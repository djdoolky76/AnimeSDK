#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class BJBICPOFAJN;
class EADLNAAMFFE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define BJBICPOFAJN_LBNFLGIMPIA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78F750)
#define BJBICPOFAJN_LBNFLGIMPIA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int BJBICPOFAJN_LBNFLGIMPIA_TypeDefinitionIndex = 68923;

struct alignas(8) BJBICPOFAJN_LBNFLGIMPIA
{
	::BJBICPOFAJN* KLHPEBKNIFB; // 0x10
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x18
	::EADLNAAMFFE* BDAJIGIOAMM; // 0x20
	::System::Threading::CancellationTokenSource* MJKDCNCONFK; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBICPOFAJN_LBNFLGIMPIA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + BJBICPOFAJN_LBNFLGIMPIA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
