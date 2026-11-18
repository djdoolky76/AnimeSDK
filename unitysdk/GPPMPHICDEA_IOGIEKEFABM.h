#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/GPPMPHICDEA_MKBJGIBKKKD.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class GCIMMDDIFBJ;
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GPPMPHICDEA_IOGIEKEFABM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x743F20)
#define GPPMPHICDEA_IOGIEKEFABM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GPPMPHICDEA_IOGIEKEFABM_TypeDefinitionIndex = 42646;

struct alignas(8) GPPMPHICDEA_IOGIEKEFABM
{
	::GPPMPHICDEA_MKBJGIBKKKD OCDHDMNGJCB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> ECODFICGLGM; // 0x20
	::System::Byte _padding0[0x10];
	::System::Nullable_1<::System::Threading::CancellationTokenRegistration> KKOKPOJPOPG; // 0x38
	::System::Byte _padding1[0x18];
	::GCIMMDDIFBJ* AOKJEGNBALI; // 0x58
	::System::String* BLGNOOLDEOF; // 0x60
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x68
	::System::Int32 MDPILDGFNHN; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_IOGIEKEFABM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_IOGIEKEFABM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
