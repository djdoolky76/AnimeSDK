#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class GCIMMDDIFBJ;
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GPPMPHICDEA_HBKMBPLEEHF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7711B0)
#define GPPMPHICDEA_HBKMBPLEEHF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GPPMPHICDEA_HBKMBPLEEHF_TypeDefinitionIndex = 42661;

struct alignas(8) GPPMPHICDEA_HBKMBPLEEHF
{
	::System::String* BLGNOOLDEOF; // 0x10
	::System::Threading::CancellationToken MJKDCNCONFK; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> ECODFICGLGM; // 0x30
	::System::Byte _padding0[0x10];
	::GCIMMDDIFBJ* AOKJEGNBALI; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HBKMBPLEEHF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_HBKMBPLEEHF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
