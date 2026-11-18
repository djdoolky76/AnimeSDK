#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class AGMKENNHHHN_HEABNIODKDD;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AGMKENNHHHN_HEABNIODKDD_PLDHOMBHBNF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C0B30)
#define AGMKENNHHHN_HEABNIODKDD_PLDHOMBHBNF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AGMKENNHHHN_HEABNIODKDD_PLDHOMBHBNF_TypeDefinitionIndex = 82466;

struct alignas(8) AGMKENNHHHN_HEABNIODKDD_PLDHOMBHBNF
{
	::AGMKENNHHHN_HEABNIODKDD* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKENNHHHN_HEABNIODKDD_PLDHOMBHBNF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AGMKENNHHHN_HEABNIODKDD_PLDHOMBHBNF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
