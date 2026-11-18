#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LAAJGBGPKAI_GFOFPHNAIIM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78CE40)
#define LAAJGBGPKAI_GFOFPHNAIIM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6C2D10)

inline static constexpr unsigned int LAAJGBGPKAI_GFOFPHNAIIM_TypeDefinitionIndex = 84454;

struct alignas(8) LAAJGBGPKAI_GFOFPHNAIIM
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Action* NPFIONPDFED; // 0x20
	::System::String* MCOHLHMKLIP; // 0x28
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAJGBGPKAI_GFOFPHNAIIM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LAAJGBGPKAI_GFOFPHNAIIM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
