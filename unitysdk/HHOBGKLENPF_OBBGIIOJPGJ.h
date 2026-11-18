#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HHOBGKLENPF_OBBGIIOJPGJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x748A90)
#define HHOBGKLENPF_OBBGIIOJPGJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HHOBGKLENPF_OBBGIIOJPGJ_TypeDefinitionIndex = 54306;

struct alignas(8) HHOBGKLENPF_OBBGIIOJPGJ
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Action* KKPCHLMMKDL; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 CLHLJKKAAPO; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_OBBGIIOJPGJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HHOBGKLENPF_OBBGIIOJPGJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
