#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class IDDCGJELPAB;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IDDCGJELPAB_KACBJCDBDNK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7596C0)
#define IDDCGJELPAB_KACBJCDBDNK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IDDCGJELPAB_KACBJCDBDNK_TypeDefinitionIndex = 53209;

struct alignas(8) IDDCGJELPAB_KACBJCDBDNK
{
	::IDDCGJELPAB* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDCGJELPAB_KACBJCDBDNK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IDDCGJELPAB_KACBJCDBDNK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
