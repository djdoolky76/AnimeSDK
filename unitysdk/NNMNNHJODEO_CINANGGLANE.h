#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NNMNNHJODEO_CINANGGLANE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5A47B0)
#define NNMNNHJODEO_CINANGGLANE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NNMNNHJODEO_CINANGGLANE_TypeDefinitionIndex = 48637;

struct alignas(4) NNMNNHJODEO_CINANGGLANE
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x20
	::System::Int32 JOFGIANGHMK; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x2C
	::System::Boolean GDNECMBHKND; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMNNHJODEO_CINANGGLANE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NNMNNHJODEO_CINANGGLANE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
