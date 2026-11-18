#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class IAPCANOLBEE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IAPCANOLBEE_GAMMJBOIKFD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79F4B0)
#define IAPCANOLBEE_GAMMJBOIKFD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IAPCANOLBEE_GAMMJBOIKFD_TypeDefinitionIndex = 76411;

struct alignas(8) IAPCANOLBEE_GAMMJBOIKFD
{
	::IAPCANOLBEE* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAPCANOLBEE_GAMMJBOIKFD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IAPCANOLBEE_GAMMJBOIKFD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
