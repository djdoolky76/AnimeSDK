#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class IEDHKGPALKM;
class IEDHKGPALKM_BEMMMLBIKCK;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IEDHKGPALKM_INKJHCKKEIP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5B4B80)
#define IEDHKGPALKM_INKJHCKKEIP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IEDHKGPALKM_INKJHCKKEIP_TypeDefinitionIndex = 89873;

struct alignas(8) IEDHKGPALKM_INKJHCKKEIP
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::IEDHKGPALKM_BEMMMLBIKCK* PGDOJBDJBOL; // 0x20
	::IEDHKGPALKM* KLHPEBKNIFB; // 0x28
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x38
	::System::Byte _padding0[0x10];
	::System::UInt32 OBGKMIPAAGL; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_INKJHCKKEIP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_INKJHCKKEIP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
