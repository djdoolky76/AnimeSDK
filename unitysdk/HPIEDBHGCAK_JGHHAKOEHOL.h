#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/ValueType.h"

class HPIEDBHGCAK_CNFBMBJDCGM;
namespace System::IO { class Stream; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HPIEDBHGCAK_JGHHAKOEHOL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F7E50)
#define HPIEDBHGCAK_JGHHAKOEHOL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HPIEDBHGCAK_JGHHAKOEHOL_TypeDefinitionIndex = 41643;

struct alignas(8) HPIEDBHGCAK_JGHHAKOEHOL
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::IO::Stream*> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::HPIEDBHGCAK_CNFBMBJDCGM* PGDOJBDJBOL; // 0x38
	::Foundation::AssetPath CEKNHIDPNNA; // 0x40
	::Foundation::AssetRequestHandle HFALPLADIOL; // 0x50
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter KIFJPEHBMCP; // 0x70
	::System::Int32 MDPILDGFNHN; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_JGHHAKOEHOL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_JGHHAKOEHOL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
