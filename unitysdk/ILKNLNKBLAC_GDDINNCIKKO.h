#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/ILKNLNKBLAC.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ILKNLNKBLAC_GDDINNCIKKO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E7D60)
#define ILKNLNKBLAC_GDDINNCIKKO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ILKNLNKBLAC_GDDINNCIKKO_TypeDefinitionIndex = 71487;

struct alignas(4) ILKNLNKBLAC_GDDINNCIKKO
{
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x10
	::ILKNLNKBLAC KLHPEBKNIFB; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKNLNKBLAC_GDDINNCIKKO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ILKNLNKBLAC_GDDINNCIKKO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
