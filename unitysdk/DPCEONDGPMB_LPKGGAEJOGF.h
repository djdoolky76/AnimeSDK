#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DPCEONDGPMB_LPKGGAEJOGF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x633CF0)
#define DPCEONDGPMB_LPKGGAEJOGF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DPCEONDGPMB_LPKGGAEJOGF_TypeDefinitionIndex = 91694;

struct alignas(8) DPCEONDGPMB_LPKGGAEJOGF
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::System::Object* IELMICFKAAI; // 0x20
	::System::Byte _padding0[0x18];
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCEONDGPMB_LPKGGAEJOGF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DPCEONDGPMB_LPKGGAEJOGF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
