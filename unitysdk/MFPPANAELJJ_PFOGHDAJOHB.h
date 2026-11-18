#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class MFPPANAELJJ;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MFPPANAELJJ_PFOGHDAJOHB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x773FE0)
#define MFPPANAELJJ_PFOGHDAJOHB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MFPPANAELJJ_PFOGHDAJOHB_TypeDefinitionIndex = 77768;

struct alignas(8) MFPPANAELJJ_PFOGHDAJOHB
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::MFPPANAELJJ* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPPANAELJJ_PFOGHDAJOHB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MFPPANAELJJ_PFOGHDAJOHB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
