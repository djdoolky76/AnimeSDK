#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Diagnostics { class Stopwatch; }
namespace System::Net { class WebResponse; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HEKOPGNBKHF_NFADLFDJLLB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x610D10)
#define HEKOPGNBKHF_NFADLFDJLLB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B0120)

inline static constexpr unsigned int HEKOPGNBKHF_NFADLFDJLLB_TypeDefinitionIndex = 85178;

struct alignas(8) HEKOPGNBKHF_NFADLFDJLLB
{
	::System::String* OAMCPEJPHLP; // 0x10
	::System::Diagnostics::Stopwatch* GFMJLMEEIEN; // 0x18
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::WebResponse*> IELMICFKAAI; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 NCLPFEMNHBC; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C
	::System::Int32 HFDNIDBIDON; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_NFADLFDJLLB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HEKOPGNBKHF_NFADLFDJLLB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
