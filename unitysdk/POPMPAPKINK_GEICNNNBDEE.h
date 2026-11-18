#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class PNJDGHBEMLK;
class POPMPAPKINK;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define POPMPAPKINK_GEICNNNBDEE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x821440)
#define POPMPAPKINK_GEICNNNBDEE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int POPMPAPKINK_GEICNNNBDEE_TypeDefinitionIndex = 88713;

struct alignas(8) POPMPAPKINK_GEICNNNBDEE
{
	::PNJDGHBEMLK* HBOFGCAIDPJ; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::POPMPAPKINK* KLHPEBKNIFB; // 0x38
	::MoleMole::Config::ConfigHollowChessboard_ChessEffectBigTVSwitchRunContext* FELAABILMEN; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPMPAPKINK_GEICNNNBDEE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + POPMPAPKINK_GEICNNNBDEE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
