#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class AENICMHEIBH;
class EALEKHOKAMD;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AENICMHEIBH_JPMJJLCFKMI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7857A0)
#define AENICMHEIBH_JPMJJLCFKMI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AENICMHEIBH_JPMJJLCFKMI_TypeDefinitionIndex = 85674;

struct alignas(8) AENICMHEIBH_JPMJJLCFKMI
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::EALEKHOKAMD* DFMKILICPFB; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::AENICMHEIBH* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_JPMJJLCFKMI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AENICMHEIBH_JPMJJLCFKMI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
