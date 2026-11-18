#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

class ONONAAMMEIB;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ONONAAMMEIB_FMCKBNPNAJD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x718690)
#define ONONAAMMEIB_FMCKBNPNAJD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ONONAAMMEIB_FMCKBNPNAJD_TypeDefinitionIndex = 81427;

struct alignas(8) ONONAAMMEIB_FMCKBNPNAJD
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA; // 0x20
	::ONONAAMMEIB* KLHPEBKNIFB; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONONAAMMEIB_FMCKBNPNAJD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ONONAAMMEIB_FMCKBNPNAJD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
