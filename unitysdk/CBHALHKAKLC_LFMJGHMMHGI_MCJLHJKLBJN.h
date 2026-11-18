#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class CBHALHKAKLC_LFMJGHMMHGI;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CBHALHKAKLC_LFMJGHMMHGI_MCJLHJKLBJN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x74C3D0)
#define CBHALHKAKLC_LFMJGHMMHGI_MCJLHJKLBJN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CBHALHKAKLC_LFMJGHMMHGI_MCJLHJKLBJN_TypeDefinitionIndex = 55876;

struct alignas(8) CBHALHKAKLC_LFMJGHMMHGI_MCJLHJKLBJN
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x20
	::CBHALHKAKLC_LFMJGHMMHGI* KLHPEBKNIFB; // 0x28
	::System::UInt64 MLBKJDGPNHI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_LFMJGHMMHGI_MCJLHJKLBJN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CBHALHKAKLC_LFMJGHMMHGI_MCJLHJKLBJN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
