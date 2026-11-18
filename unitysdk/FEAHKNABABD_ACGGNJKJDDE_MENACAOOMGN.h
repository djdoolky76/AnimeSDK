#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class FEAHKNABABD_ACGGNJKJDDE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FEAHKNABABD_ACGGNJKJDDE_MENACAOOMGN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x77C210)
#define FEAHKNABABD_ACGGNJKJDDE_MENACAOOMGN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FEAHKNABABD_ACGGNJKJDDE_MENACAOOMGN_TypeDefinitionIndex = 48280;

struct alignas(8) FEAHKNABABD_ACGGNJKJDDE_MENACAOOMGN
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::System::Threading::CancellationToken MPPGOFIIMEM; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::FEAHKNABABD_ACGGNJKJDDE* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEAHKNABABD_ACGGNJKJDDE_MENACAOOMGN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FEAHKNABABD_ACGGNJKJDDE_MENACAOOMGN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
