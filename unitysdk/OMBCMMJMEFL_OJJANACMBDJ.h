#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class FBAMLABJMKF;
class PNJDGHBEMLK;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OMBCMMJMEFL_OJJANACMBDJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6021A0)
#define OMBCMMJMEFL_OJJANACMBDJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OMBCMMJMEFL_OJJANACMBDJ_TypeDefinitionIndex = 75131;

struct alignas(8) OMBCMMJMEFL_OJJANACMBDJ
{
	::FBAMLABJMKF* COBEJJHGMPO; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::MoleMole::HollowChessboard::HollowEntity* BIAPIALNCLC; // 0x38
	::System::Collections::Generic::List_1<::PNJDGHBEMLK*>* GGAOGDJOEAG; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48
	::MoleMole::HollowChessboard::HollowCell PNPGJCNKMAJ; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBCMMJMEFL_OJJANACMBDJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OMBCMMJMEFL_OJJANACMBDJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
