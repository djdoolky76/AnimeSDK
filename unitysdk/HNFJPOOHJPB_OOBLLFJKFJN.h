#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HNFJPOOHJPB_OOBLLFJKFJN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F0DC0)
#define HNFJPOOHJPB_OOBLLFJKFJN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HNFJPOOHJPB_OOBLLFJKFJN_TypeDefinitionIndex = 52695;

struct alignas(4) HNFJPOOHJPB_OOBLLFJKFJN
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x20
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x30
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_OOBLLFJKFJN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HNFJPOOHJPB_OOBLLFJKFJN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
