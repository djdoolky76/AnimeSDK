#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HLPONKGFMCA_NMMGOFNHOKF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7962A0)
#define HLPONKGFMCA_NMMGOFNHOKF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HLPONKGFMCA_NMMGOFNHOKF_TypeDefinitionIndex = 52895;

struct alignas(4) HLPONKGFMCA_NMMGOFNHOKF
{
	::HOCDHMEPPEG MMCKPLBLCIL; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x40
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLPONKGFMCA_NMMGOFNHOKF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HLPONKGFMCA_NMMGOFNHOKF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
