#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class DHPBHHKHIGO;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DHPBHHKHIGO_LLFDNDAGFND_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E00A0)
#define DHPBHHKHIGO_LLFDNDAGFND_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DHPBHHKHIGO_LLFDNDAGFND_TypeDefinitionIndex = 91670;

struct alignas(8) DHPBHHKHIGO_LLFDNDAGFND
{
	::DHPBHHKHIGO* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_LLFDNDAGFND_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DHPBHHKHIGO_LLFDNDAGFND_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
