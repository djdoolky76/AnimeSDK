#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JKLLGBHAIPP___C_GHLPDFHOFBM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AA380)
#define JKLLGBHAIPP___C_GHLPDFHOFBM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JKLLGBHAIPP___c_GHLPDFHOFBM_TypeDefinitionIndex = 56644;

struct alignas(4) JKLLGBHAIPP___c_GHLPDFHOFBM
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP___C_GHLPDFHOFBM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JKLLGBHAIPP___C_GHLPDFHOFBM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
