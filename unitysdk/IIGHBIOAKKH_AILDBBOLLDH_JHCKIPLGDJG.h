#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class IIGHBIOAKKH_AILDBBOLLDH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IIGHBIOAKKH_AILDBBOLLDH_JHCKIPLGDJG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x790820)
#define IIGHBIOAKKH_AILDBBOLLDH_JHCKIPLGDJG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IIGHBIOAKKH_AILDBBOLLDH_JHCKIPLGDJG_TypeDefinitionIndex = 40025;

struct alignas(8) IIGHBIOAKKH_AILDBBOLLDH_JHCKIPLGDJG
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::IIGHBIOAKKH_AILDBBOLLDH* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH_JHCKIPLGDJG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH_JHCKIPLGDJG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
