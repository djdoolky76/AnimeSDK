#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/GPPMPHICDEA_MKBJGIBKKKD.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animation; }

#define GPPMPHICDEA_JAAGHALMAGD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C6AF0)
#define GPPMPHICDEA_JAAGHALMAGD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GPPMPHICDEA_JAAGHALMAGD_TypeDefinitionIndex = 42626;

struct alignas(8) GPPMPHICDEA_JAAGHALMAGD
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Nullable_1<::System::Threading::CancellationTokenRegistration> KKOKPOJPOPG; // 0x20
	::System::Byte _padding0[0x18];
	::System::String* BLGNOOLDEOF; // 0x40
	::GPPMPHICDEA_MKBJGIBKKKD OCDHDMNGJCB; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> ECODFICGLGM; // 0x58
	::System::Byte _padding1[0x10];
	::UnityEngine::Animation* AOKJEGNBALI; // 0x70
	::System::Int32 MDPILDGFNHN; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_JAAGHALMAGD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_JAAGHALMAGD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
