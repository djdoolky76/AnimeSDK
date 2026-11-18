#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animation; }

#define GPPMPHICDEA_LMKHNCKMJMK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B0E10)
#define GPPMPHICDEA_LMKHNCKMJMK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GPPMPHICDEA_LMKHNCKMJMK_TypeDefinitionIndex = 42649;

struct alignas(8) GPPMPHICDEA_LMKHNCKMJMK
{
	::System::Threading::CancellationToken MJKDCNCONFK; // 0x10
	::System::String* BLGNOOLDEOF; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> ECODFICGLGM; // 0x30
	::System::Byte _padding0[0x10];
	::UnityEngine::Animation* AOKJEGNBALI; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_LMKHNCKMJMK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_LMKHNCKMJMK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
