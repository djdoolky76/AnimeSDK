#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class OKDHEIAKDNF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OKDHEIAKDNF_HBJFOMBCOGJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7787C0)
#define OKDHEIAKDNF_HBJFOMBCOGJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OKDHEIAKDNF_HBJFOMBCOGJ_TypeDefinitionIndex = 77352;

struct alignas(8) OKDHEIAKDNF_HBJFOMBCOGJ
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x38
	::OKDHEIAKDNF* KLHPEBKNIFB; // 0x40
	::System::Int32 PKNDAJMAAGA; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDHEIAKDNF_HBJFOMBCOGJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OKDHEIAKDNF_HBJFOMBCOGJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
