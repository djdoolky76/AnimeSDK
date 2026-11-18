#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class IIBNCFPOGDH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IIBNCFPOGDH_HJDBCEHHNLE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x772310)
#define IIBNCFPOGDH_HJDBCEHHNLE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IIBNCFPOGDH_HJDBCEHHNLE_TypeDefinitionIndex = 87267;

struct alignas(8) IIBNCFPOGDH_HJDBCEHHNLE
{
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::IIBNCFPOGDH* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40
	::System::UInt32 AELLPLBJELA; // 0x44
	::System::Boolean LBMHCGGBIMG; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBNCFPOGDH_HJDBCEHHNLE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IIBNCFPOGDH_HJDBCEHHNLE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
