#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class JDDKPKONMAL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define JDDKPKONMAL_CEGICGIKBHK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x786290)
#define JDDKPKONMAL_CEGICGIKBHK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JDDKPKONMAL_CEGICGIKBHK_TypeDefinitionIndex = 55014;

struct alignas(8) JDDKPKONMAL_CEGICGIKBHK
{
	::JDDKPKONMAL* KLHPEBKNIFB; // 0x10
	::System::Threading::CancellationTokenSource* JHEAOGOHIAL; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Single JABKCLKHHLP; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x44
	::System::Single JMBBLJOCOBF; // 0x48
	::System::Single FNIOPKPHDEH; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDKPKONMAL_CEGICGIKBHK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JDDKPKONMAL_CEGICGIKBHK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
