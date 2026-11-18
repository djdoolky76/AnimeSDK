#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FGECBJCAGBC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FGECBJCAGBC_BAOHEJIMABB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x745380)
#define FGECBJCAGBC_BAOHEJIMABB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FGECBJCAGBC_BAOHEJIMABB_TypeDefinitionIndex = 61901;

struct alignas(8) FGECBJCAGBC_BAOHEJIMABB
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::FGECBJCAGBC* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGECBJCAGBC_BAOHEJIMABB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FGECBJCAGBC_BAOHEJIMABB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
