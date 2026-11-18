#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationState; }

#define GPPMPHICDEA_IGMPKIDIJCB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x773130)
#define GPPMPHICDEA_IGMPKIDIJCB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GPPMPHICDEA_IGMPKIDIJCB_TypeDefinitionIndex = 42685;

struct alignas(8) GPPMPHICDEA_IGMPKIDIJCB
{
	::UnityEngine::AnimationState* IPLKCKGNABI; // 0x10
	::UnityEngine::Animation* AOKJEGNBALI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::System::String* BLGNOOLDEOF; // 0x30
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x3C
	::System::Single JNMLDLGMKAD; // 0x40
	::System::Single FBCLDGKHHDN; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_IGMPKIDIJCB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_IGMPKIDIJCB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
