#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PMGMBGFOFKG___C_MDFBJFKKEPI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x81CEA0)
#define PMGMBGFOFKG___C_MDFBJFKKEPI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PMGMBGFOFKG___c_MDFBJFKKEPI_TypeDefinitionIndex = 65870;

struct alignas(4) PMGMBGFOFKG___c_MDFBJFKKEPI
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG___C_MDFBJFKKEPI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PMGMBGFOFKG___C_MDFBJFKKEPI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
