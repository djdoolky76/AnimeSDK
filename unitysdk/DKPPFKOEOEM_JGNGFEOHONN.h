#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DKPPFKOEOEM_JGNGFEOHONN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7436B0)
#define DKPPFKOEOEM_JGNGFEOHONN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DKPPFKOEOEM_JGNGFEOHONN_TypeDefinitionIndex = 53226;

struct alignas(4) DKPPFKOEOEM_JGNGFEOHONN
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Boolean CLOBDLBOLLP; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_JGNGFEOHONN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_JGNGFEOHONN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
