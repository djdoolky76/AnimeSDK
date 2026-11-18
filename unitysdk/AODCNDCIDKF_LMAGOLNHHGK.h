#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class AODCNDCIDKF;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AODCNDCIDKF_LMAGOLNHHGK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7263E0)
#define AODCNDCIDKF_LMAGOLNHHGK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int AODCNDCIDKF_LMAGOLNHHGK_TypeDefinitionIndex = 79592;

struct alignas(8) AODCNDCIDKF_LMAGOLNHHGK
{
	::AODCNDCIDKF* KLHPEBKNIFB; // 0x10
	::System::String* EGFBFJEENBI; // 0x18
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::String*> ECODFICGLGM; // 0x20
	::System::Byte _padding0[0x10];
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x38
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> IELMICFKAAI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_LMAGOLNHHGK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AODCNDCIDKF_LMAGOLNHHGK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
