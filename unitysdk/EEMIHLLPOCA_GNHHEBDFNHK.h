#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class EEMIHLLPOCA;
class FBAMLABJMKF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EEMIHLLPOCA_GNHHEBDFNHK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x741100)
#define EEMIHLLPOCA_GNHHEBDFNHK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EEMIHLLPOCA_GNHHEBDFNHK_TypeDefinitionIndex = 52134;

struct alignas(8) EEMIHLLPOCA_GNHHEBDFNHK
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::FBAMLABJMKF* LDCELDCPBMG; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::EEMIHLLPOCA* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_GNHHEBDFNHK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_GNHHEBDFNHK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
