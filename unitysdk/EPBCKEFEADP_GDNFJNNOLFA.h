#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class EPBCKEFEADP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EPBCKEFEADP_GDNFJNNOLFA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7259C0)
#define EPBCKEFEADP_GDNFJNNOLFA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EPBCKEFEADP_GDNFJNNOLFA_TypeDefinitionIndex = 89997;

struct alignas(8) EPBCKEFEADP_GDNFJNNOLFA
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x30
	::EPBCKEFEADP* KLHPEBKNIFB; // 0x38
	::UnityEngine::Vector3Int CMFHBLMALBN; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_GDNFJNNOLFA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EPBCKEFEADP_GDNFJNNOLFA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
