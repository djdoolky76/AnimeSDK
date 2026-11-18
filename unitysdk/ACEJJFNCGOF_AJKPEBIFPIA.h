#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class ACEJJFNCGOF;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ACEJJFNCGOF_AJKPEBIFPIA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75B250)
#define ACEJJFNCGOF_AJKPEBIFPIA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int ACEJJFNCGOF_AJKPEBIFPIA_TypeDefinitionIndex = 89554;

struct alignas(8) ACEJJFNCGOF_AJKPEBIFPIA
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x10
	::ACEJJFNCGOF* KLHPEBKNIFB; // 0x30
	::System::Object* IELMICFKAAI; // 0x38
	::System::Byte _padding0[0x8];
	::System::Int32 MDPILDGFNHN; // 0x48
	::System::Boolean FNJGHFOCCIB; // 0x4C
	::System::Boolean EGEGIMGMJHN; // 0x4D

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_AJKPEBIFPIA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_AJKPEBIFPIA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
