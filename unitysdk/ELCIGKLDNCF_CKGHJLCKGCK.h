#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class ELCIGKLDNCF;
class PNJDGHBEMLK;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ELCIGKLDNCF_CKGHJLCKGCK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6AE120)
#define ELCIGKLDNCF_CKGHJLCKGCK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ELCIGKLDNCF_CKGHJLCKGCK_TypeDefinitionIndex = 53127;

struct alignas(8) ELCIGKLDNCF_CKGHJLCKGCK
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::ELCIGKLDNCF* KLHPEBKNIFB; // 0x20
	::MoleMole::HollowChessboard::HollowEntity* BIAPIALNCLC; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::System::Collections::Generic::List_1<::PNJDGHBEMLK*>* GGAOGDJOEAG; // 0x40
	::MoleMole::HollowChessboard::HollowCell NHJFCNOFCEK; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_CKGHJLCKGCK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_CKGHJLCKGCK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
