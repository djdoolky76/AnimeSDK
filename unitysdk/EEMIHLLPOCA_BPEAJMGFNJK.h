#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class EEMIHLLPOCA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EEMIHLLPOCA_BPEAJMGFNJK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76C2D0)
#define EEMIHLLPOCA_BPEAJMGFNJK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EEMIHLLPOCA_BPEAJMGFNJK_TypeDefinitionIndex = 52140;

struct alignas(8) EEMIHLLPOCA_BPEAJMGFNJK
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::EEMIHLLPOCA* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_BPEAJMGFNJK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_BPEAJMGFNJK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
