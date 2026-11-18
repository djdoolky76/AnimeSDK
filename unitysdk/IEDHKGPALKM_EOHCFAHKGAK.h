#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class HBIJLOJMCIP;
class IEDHKGPALKM;
class IEDHKGPALKM_PFKBLKOGILM;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IEDHKGPALKM_EOHCFAHKGAK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x778E50)
#define IEDHKGPALKM_EOHCFAHKGAK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IEDHKGPALKM_EOHCFAHKGAK_TypeDefinitionIndex = 89861;

struct alignas(8) IEDHKGPALKM_EOHCFAHKGAK
{
	::IEDHKGPALKM* KLHPEBKNIFB; // 0x10
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x18
	::IEDHKGPALKM_PFKBLKOGILM* PGDOJBDJBOL; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::HBIJLOJMCIP*> ECODFICGLGM; // 0x28
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x40
	::System::Single KOIJDEHLKCO; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_EOHCFAHKGAK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_EOHCFAHKGAK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
