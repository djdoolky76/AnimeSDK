#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NNMNNHJODEO_LLPDJMKGOKA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5FEBC0)
#define NNMNNHJODEO_LLPDJMKGOKA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NNMNNHJODEO_LLPDJMKGOKA_TypeDefinitionIndex = 48636;

struct alignas(8) NNMNNHJODEO_LLPDJMKGOKA
{
	::System::String* BDEEGKPMMBO; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30
	::System::Int32 JOFGIANGHMK; // 0x34
	::System::Boolean GDNECMBHKND; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 LBPBANPFBHE; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMNNHJODEO_LLPDJMKGOKA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NNMNNHJODEO_LLPDJMKGOKA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
