#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }
namespace System::Threading::Tasks { class Task; }

#define HMDAHKKHLJA_CKLFKGGBKHD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79F370)
#define HMDAHKKHLJA_CKLFKGGBKHD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x596080)

inline static constexpr unsigned int HMDAHKKHLJA_CKLFKGGBKHD_TypeDefinitionIndex = 85921;

struct alignas(8) HMDAHKKHLJA_CKLFKGGBKHD
{
	::System::Action_1<::System::Boolean>* EJGDHCIBCJH; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter KIFJPEHBMCP; // 0x18
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x20
	::System::Threading::CancellationTokenSource* NOGBEONIBDC; // 0x40
	::System::Threading::CancellationTokenSource* JJOLBBDMLOG; // 0x48
	::System::Threading::Tasks::Task* CACOEKHPELE; // 0x50
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*> IELMICFKAAI; // 0x58
	::System::Threading::Tasks::Task* KKCKMNJGOKK; // 0x60
	::System::TimeSpan DBOOIOLEPOJ; // 0x68
	::System::Int32 MDPILDGFNHN; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMDAHKKHLJA_CKLFKGGBKHD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HMDAHKKHLJA_CKLFKGGBKHD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
