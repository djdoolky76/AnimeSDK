#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LCGMJLFPLKE_KPCKOOAMODI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6EC810)
#define LCGMJLFPLKE_KPCKOOAMODI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int LCGMJLFPLKE_KPCKOOAMODI_TypeDefinitionIndex = 66104;

struct alignas(4) LCGMJLFPLKE_KPCKOOAMODI
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::HOCDHMEPPEG CGJOHGLPDBP; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x50
	::HOCDHMEPPEG MMCKPLBLCIL; // 0x60
	::System::Int32 MDPILDGFNHN; // 0x90

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_KPCKOOAMODI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LCGMJLFPLKE_KPCKOOAMODI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
