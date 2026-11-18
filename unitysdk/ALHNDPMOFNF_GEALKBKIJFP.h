#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class ALHNDPMOFNF;
class ALHNDPMOFNF_OGGDBJGOLDG;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ALHNDPMOFNF_GEALKBKIJFP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x726380)
#define ALHNDPMOFNF_GEALKBKIJFP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ALHNDPMOFNF_GEALKBKIJFP_TypeDefinitionIndex = 86720;

struct alignas(8) ALHNDPMOFNF_GEALKBKIJFP
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::ALHNDPMOFNF* KLHPEBKNIFB; // 0x18
	::System::Threading::CancellationToken HMABLPPEECL; // 0x20
	::ALHNDPMOFNF_OGGDBJGOLDG* PLBPGCMKNCL; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_GEALKBKIJFP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_GEALKBKIJFP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
