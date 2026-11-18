#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class ELCIGKLDNCF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ELCIGKLDNCF_EHAKJBDJCDM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A1980)
#define ELCIGKLDNCF_EHAKJBDJCDM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ELCIGKLDNCF_EHAKJBDJCDM_TypeDefinitionIndex = 53121;

struct alignas(8) ELCIGKLDNCF_EHAKJBDJCDM
{
	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* JOIMFGHMOBJ; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::ELCIGKLDNCF* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_EHAKJBDJCDM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_EHAKJBDJCDM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
