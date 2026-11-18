#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class KOPLGEFDECB;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KOPLGEFDECB_CBPAFNJOHME_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E1BF0)
#define KOPLGEFDECB_CBPAFNJOHME_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x3C0A10)

inline static constexpr unsigned int KOPLGEFDECB_CBPAFNJOHME_TypeDefinitionIndex = 80620;

struct alignas(8) KOPLGEFDECB_CBPAFNJOHME
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::KOPLGEFDECB* KLHPEBKNIFB; // 0x28
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Boolean> IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPLGEFDECB_CBPAFNJOHME_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KOPLGEFDECB_CBPAFNJOHME_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
