#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class JKOHANLEGMK;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define JKOHANLEGMK_NJKGAHAODNH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x71FF70)
#define JKOHANLEGMK_NJKGAHAODNH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x596080)

inline static constexpr unsigned int JKOHANLEGMK_NJKGAHAODNH_TypeDefinitionIndex = 66330;

struct alignas(8) JKOHANLEGMK_NJKGAHAODNH
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x20
	::System::Threading::CancellationTokenSource* KHGFAKJKDGG; // 0x40
	::JKOHANLEGMK* KLHPEBKNIFB; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKOHANLEGMK_NJKGAHAODNH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JKOHANLEGMK_NJKGAHAODNH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
