#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class DHPBHHKHIGO;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DHPBHHKHIGO_LJMJIBKDPJK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3E3AF0)
#define DHPBHHKHIGO_LJMJIBKDPJK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DHPBHHKHIGO_LJMJIBKDPJK_TypeDefinitionIndex = 91672;

struct alignas(8) DHPBHHKHIGO_LJMJIBKDPJK
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::DHPBHHKHIGO* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x2C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_LJMJIBKDPJK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_LJMJIBKDPJK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
