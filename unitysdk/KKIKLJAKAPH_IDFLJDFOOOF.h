#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KKIKLJAKAPH_IDFLJDFOOOF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78C280)
#define KKIKLJAKAPH_IDFLJDFOOOF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KKIKLJAKAPH_IDFLJDFOOOF_TypeDefinitionIndex = 55562;

struct alignas(4) KKIKLJAKAPH_IDFLJDFOOOF
{
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_IDFLJDFOOOF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_IDFLJDFOOOF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
