#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class DKPPFKOEOEM;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DKPPFKOEOEM_FNJHMFPONHJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x722F00)
#define DKPPFKOEOEM_FNJHMFPONHJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DKPPFKOEOEM_FNJHMFPONHJ_TypeDefinitionIndex = 53219;

struct alignas(8) DKPPFKOEOEM_FNJHMFPONHJ
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::DKPPFKOEOEM* KLHPEBKNIFB; // 0x30
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_FNJHMFPONHJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_FNJHMFPONHJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
