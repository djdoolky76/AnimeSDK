#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FBMFHPMONGC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define FBMFHPMONGC_JCNEHJFDGPI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6BF410)
#define FBMFHPMONGC_JCNEHJFDGPI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_JCNEHJFDGPI_TypeDefinitionIndex = 50500;

struct alignas(8) FBMFHPMONGC_JCNEHJFDGPI
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Threading::CancellationTokenSource* MPPGOFIIMEM; // 0x38
	::System::Boolean KNJOFCCMBDB; // 0x40
	::System::Boolean ANICFFFFLKK; // 0x41
	::System::Boolean GDNECMBHKND; // 0x42
	::System::Boolean NELCEOFGEFI; // 0x43
	::System::Int32 MDPILDGFNHN; // 0x44
	::System::Int32 NPAKMAGBOCH; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_JCNEHJFDGPI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_JCNEHJFDGPI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
