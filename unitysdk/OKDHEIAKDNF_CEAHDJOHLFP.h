#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class OKDHEIAKDNF;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OKDHEIAKDNF_CEAHDJOHLFP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A4BC0)
#define OKDHEIAKDNF_CEAHDJOHLFP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OKDHEIAKDNF_CEAHDJOHLFP_TypeDefinitionIndex = 77351;

struct alignas(8) OKDHEIAKDNF_CEAHDJOHLFP
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::System::Object* KIFJPEHBMCP; // 0x30
	::System::Byte _padding0[0x8];
	::OKDHEIAKDNF* KLHPEBKNIFB; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDHEIAKDNF_CEAHDJOHLFP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OKDHEIAKDNF_CEAHDJOHLFP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
