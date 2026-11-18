#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class AENICMHEIBH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AENICMHEIBH_FJDFAACCJME_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7060D0)
#define AENICMHEIBH_FJDFAACCJME_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AENICMHEIBH_FJDFAACCJME_TypeDefinitionIndex = 85673;

struct alignas(8) AENICMHEIBH_FJDFAACCJME
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::AENICMHEIBH* KLHPEBKNIFB; // 0x30
	::System::Boolean DEKIJIJDFAE; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_FJDFAACCJME_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AENICMHEIBH_FJDFAACCJME_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
