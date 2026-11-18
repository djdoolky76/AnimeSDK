#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class MNBFJDJGPME;
class MNBFJDJGPME_IIMCMPGKLEL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MNBFJDJGPME_GMCMILMIACG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A9230)
#define MNBFJDJGPME_GMCMILMIACG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MNBFJDJGPME_GMCMILMIACG_TypeDefinitionIndex = 77715;

struct alignas(8) MNBFJDJGPME_GMCMILMIACG
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x20
	::System::Byte _padding0[0x10];
	::MNBFJDJGPME_IIMCMPGKLEL* HPNIBLHFEJE; // 0x38
	::MNBFJDJGPME* KLHPEBKNIFB; // 0x40
	::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBFJDJGPME_GMCMILMIACG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MNBFJDJGPME_GMCMILMIACG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
