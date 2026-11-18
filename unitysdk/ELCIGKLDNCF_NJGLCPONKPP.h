#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class ELCIGKLDNCF;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ELCIGKLDNCF_NJGLCPONKPP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x654D20)
#define ELCIGKLDNCF_NJGLCPONKPP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ELCIGKLDNCF_NJGLCPONKPP_TypeDefinitionIndex = 53124;

struct alignas(8) ELCIGKLDNCF_NJGLCPONKPP
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::MoleMole::HollowChessboard::HollowEntity* BIAPIALNCLC; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::ELCIGKLDNCF* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40
	::MoleMole::HollowChessboard::HollowCell NHJFCNOFCEK; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_NJGLCPONKPP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_NJGLCPONKPP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
