#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class CPMEKIGICIL;
class CPMEKIGICIL_AFPHJJCPAHN;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CPMEKIGICIL_LDJAGEBNHIO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x701600)
#define CPMEKIGICIL_LDJAGEBNHIO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CPMEKIGICIL_LDJAGEBNHIO_TypeDefinitionIndex = 83477;

struct alignas(8) CPMEKIGICIL_LDJAGEBNHIO
{
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x10
	::CPMEKIGICIL_AFPHJJCPAHN* PGDOJBDJBOL; // 0x18
	::CPMEKIGICIL* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x38
	::System::Byte _padding0[0x10];
	::System::Int32 NPAKMAGBOCH; // 0x50
	::System::UInt32 DEFAKCIAKLG; // 0x54
	::System::Int32 MDPILDGFNHN; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMEKIGICIL_LDJAGEBNHIO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CPMEKIGICIL_LDJAGEBNHIO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
