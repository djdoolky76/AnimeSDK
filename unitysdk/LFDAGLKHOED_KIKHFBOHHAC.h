#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class LFDAGLKHOED;
class LFDAGLKHOED_BDABFFHPKPL;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LFDAGLKHOED_KIKHFBOHHAC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7CC2D0)
#define LFDAGLKHOED_KIKHFBOHHAC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int LFDAGLKHOED_KIKHFBOHHAC_TypeDefinitionIndex = 53716;

struct alignas(8) LFDAGLKHOED_KIKHFBOHHAC
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Object* GHANCJDIDBC; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::LFDAGLKHOED* KLHPEBKNIFB; // 0x30
	::LFDAGLKHOED_BDABFFHPKPL* PGDOJBDJBOL; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_KIKHFBOHHAC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LFDAGLKHOED_KIKHFBOHHAC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
