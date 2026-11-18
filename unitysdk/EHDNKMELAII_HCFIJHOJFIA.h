#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class EHDNKMELAII;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EHDNKMELAII_HCFIJHOJFIA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x654AA0)
#define EHDNKMELAII_HCFIJHOJFIA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EHDNKMELAII_HCFIJHOJFIA_TypeDefinitionIndex = 71388;

struct alignas(8) EHDNKMELAII_HCFIJHOJFIA
{
	::System::Threading::CancellationToken MPPGOFIIMEM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::EHDNKMELAII* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDNKMELAII_HCFIJHOJFIA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EHDNKMELAII_HCFIJHOJFIA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
