#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class FBAMLABJMKF;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OMBCMMJMEFL_ADCMNLBELLF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A4DF0)
#define OMBCMMJMEFL_ADCMNLBELLF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OMBCMMJMEFL_ADCMNLBELLF_TypeDefinitionIndex = 75129;

struct alignas(8) OMBCMMJMEFL_ADCMNLBELLF
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::System::Action* NPFIONPDFED; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::FBAMLABJMKF* AKCCBOJKOJL; // 0x38
	::MoleMole::HollowChessboard::HollowEntity* BIAPIALNCLC; // 0x40
	::FBAMLABJMKF* HDEJNHDKCOO; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50
	::MoleMole::HollowChessboard::HollowCell KEPFDHANHHP; // 0x54
	::MoleMole::HollowChessboard::HollowCell ECHBPPIEIKI; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBCMMJMEFL_ADCMNLBELLF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OMBCMMJMEFL_ADCMNLBELLF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
