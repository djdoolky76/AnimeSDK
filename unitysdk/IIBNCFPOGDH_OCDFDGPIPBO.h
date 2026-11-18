#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class IIBNCFPOGDH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IIBNCFPOGDH_OCDFDGPIPBO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E7CD0)
#define IIBNCFPOGDH_OCDFDGPIPBO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IIBNCFPOGDH_OCDFDGPIPBO_TypeDefinitionIndex = 87263;

struct alignas(8) IIBNCFPOGDH_OCDFDGPIPBO
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x20
	::IIBNCFPOGDH* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBNCFPOGDH_OCDFDGPIPBO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IIBNCFPOGDH_OCDFDGPIPBO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
