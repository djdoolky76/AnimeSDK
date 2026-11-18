#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CPEHDMDLPLM_PALKAPJHAKK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E78E0)
#define CPEHDMDLPLM_PALKAPJHAKK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int CPEHDMDLPLM_PALKAPJHAKK_TypeDefinitionIndex = 69637;

struct alignas(8) CPEHDMDLPLM_PALKAPJHAKK
{
	::System::Collections::Generic::IEnumerable_1<::System::String*>* FPDLIIGJHKD; // 0x10
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*> ECODFICGLGM; // 0x18
	::System::Byte _padding0[0x10];
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*> IELMICFKAAI; // 0x30
	::System::String* BJCBFDEBEGN; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEHDMDLPLM_PALKAPJHAKK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CPEHDMDLPLM_PALKAPJHAKK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
