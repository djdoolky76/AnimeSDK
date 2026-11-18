#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KDMOOELMMAP_IPGABHBABJB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6EBA90)
#define KDMOOELMMAP_IPGABHBABJB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KDMOOELMMAP_IPGABHBABJB_TypeDefinitionIndex = 76167;

struct alignas(4) KDMOOELMMAP_IPGABHBABJB
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x20
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x28
	::System::Int32 LCHGINFEKCG; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x3C
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOELMMAP_IPGABHBABJB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KDMOOELMMAP_IPGABHBABJB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
