#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFEIPKBDEMM_MKBEAGOEMBN.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CFEIPKBDEMM_IOFICKPPADK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E9FC0)
#define CFEIPKBDEMM_IOFICKPPADK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CFEIPKBDEMM_IOFICKPPADK_TypeDefinitionIndex = 71749;

struct alignas(4) CFEIPKBDEMM_IOFICKPPADK
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::CFEIPKBDEMM_MKBEAGOEMBN EIIFNIBBJHP; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0xC8
	::System::Int32 MDPILDGFNHN; // 0xD0

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEIPKBDEMM_IOFICKPPADK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CFEIPKBDEMM_IOFICKPPADK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
