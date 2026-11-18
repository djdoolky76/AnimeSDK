#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DKPPFKOEOEM_BONOFKPEHFJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6DE700)
#define DKPPFKOEOEM_BONOFKPEHFJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DKPPFKOEOEM_BONOFKPEHFJ_TypeDefinitionIndex = 53218;

struct alignas(8) DKPPFKOEOEM_BONOFKPEHFJ
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x18];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x40
	::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter KIFJPEHBMCP; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_BONOFKPEHFJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_BONOFKPEHFJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
