#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class EHDNKMELAII;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EHDNKMELAII_OPIPLALCNLE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5F14A0)
#define EHDNKMELAII_OPIPLALCNLE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EHDNKMELAII_OPIPLALCNLE_TypeDefinitionIndex = 71391;

struct alignas(8) EHDNKMELAII_OPIPLALCNLE
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::EHDNKMELAII* KLHPEBKNIFB; // 0x20
	::System::Threading::CancellationToken MPPGOFIIMEM; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Int32 KMFFBAEIOIA; // 0x40
	::System::Boolean HOFNECHLPLH; // 0x44
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDNKMELAII_OPIPLALCNLE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EHDNKMELAII_OPIPLALCNLE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
