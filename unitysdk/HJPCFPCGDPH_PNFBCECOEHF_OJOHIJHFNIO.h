#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class HJPCFPCGDPH_PNFBCECOEHF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HJPCFPCGDPH_PNFBCECOEHF_OJOHIJHFNIO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B1280)
#define HJPCFPCGDPH_PNFBCECOEHF_OJOHIJHFNIO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HJPCFPCGDPH_PNFBCECOEHF_OJOHIJHFNIO_TypeDefinitionIndex = 56977;

struct alignas(8) HJPCFPCGDPH_PNFBCECOEHF_OJOHIJHFNIO
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::HJPCFPCGDPH_PNFBCECOEHF* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_PNFBCECOEHF_OJOHIJHFNIO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_PNFBCECOEHF_OJOHIJHFNIO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
