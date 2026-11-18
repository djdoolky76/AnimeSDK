#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class PNJDGHBEMLK;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PNJDGHBEMLK_JKGIMMIBECD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x81CEC0)
#define PNJDGHBEMLK_JKGIMMIBECD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PNJDGHBEMLK_JKGIMMIBECD_TypeDefinitionIndex = 64957;

struct alignas(8) PNJDGHBEMLK_JKGIMMIBECD
{
	::PNJDGHBEMLK* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::MoleMole::IVideoPlayer* NEPAOLIPEFN; // 0x38
	::System::Action* DMPEOJCCCLO; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_JKGIMMIBECD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_JKGIMMIBECD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
