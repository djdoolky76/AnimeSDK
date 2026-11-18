#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class GDBADFKOFFG_ELHCAMGBOHB;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GDBADFKOFFG_ELHCAMGBOHB_BNGCCGAKMDK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B0950)
#define GDBADFKOFFG_ELHCAMGBOHB_BNGCCGAKMDK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B0120)

inline static constexpr unsigned int GDBADFKOFFG_ELHCAMGBOHB_BNGCCGAKMDK_TypeDefinitionIndex = 74136;

struct alignas(8) GDBADFKOFFG_ELHCAMGBOHB_BNGCCGAKMDK
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::GDBADFKOFFG_ELHCAMGBOHB* KLHPEBKNIFB; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_ELHCAMGBOHB_BNGCCGAKMDK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GDBADFKOFFG_ELHCAMGBOHB_BNGCCGAKMDK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
