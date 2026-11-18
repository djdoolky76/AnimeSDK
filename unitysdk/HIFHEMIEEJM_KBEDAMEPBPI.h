#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class COCJHGGDBCA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HIFHEMIEEJM_KBEDAMEPBPI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B3E80)
#define HIFHEMIEEJM_KBEDAMEPBPI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HIFHEMIEEJM_KBEDAMEPBPI_TypeDefinitionIndex = 70034;

struct alignas(8) HIFHEMIEEJM_KBEDAMEPBPI
{
	::COCJHGGDBCA* FMKAIDDPLFP; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30
	::System::Single DDEHHNFDAHA; // 0x34

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFHEMIEEJM_KBEDAMEPBPI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HIFHEMIEEJM_KBEDAMEPBPI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
