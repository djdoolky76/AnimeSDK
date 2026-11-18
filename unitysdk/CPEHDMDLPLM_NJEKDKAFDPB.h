#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CPEHDMDLPLM_NJEKDKAFDPB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78DB50)
#define CPEHDMDLPLM_NJEKDKAFDPB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int CPEHDMDLPLM_NJEKDKAFDPB_TypeDefinitionIndex = 69640;

struct alignas(8) CPEHDMDLPLM_NJEKDKAFDPB
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*> IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEHDMDLPLM_NJEKDKAFDPB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CPEHDMDLPLM_NJEKDKAFDPB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
