#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class LBGDLOPIIOC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LBGDLOPIIOC_BEHHMGCOLMJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AB1D0)
#define LBGDLOPIIOC_BEHHMGCOLMJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int LBGDLOPIIOC_BEHHMGCOLMJ_TypeDefinitionIndex = 79845;

struct alignas(8) LBGDLOPIIOC_BEHHMGCOLMJ
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::LBGDLOPIIOC* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGDLOPIIOC_BEHHMGCOLMJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LBGDLOPIIOC_BEHHMGCOLMJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
