#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class EPJAODADCEA;
class OOIJIDMLIAC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OOIJIDMLIAC_BKPPPLHJNGN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A4E50)
#define OOIJIDMLIAC_BKPPPLHJNGN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6C2D10)

inline static constexpr unsigned int OOIJIDMLIAC_BKPPPLHJNGN_TypeDefinitionIndex = 70887;

struct alignas(8) OOIJIDMLIAC_BKPPPLHJNGN
{
	::OOIJIDMLIAC* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::EPJAODADCEA* ONPGHHGJGDJ; // 0x28
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_BKPPPLHJNGN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_BKPPPLHJNGN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
