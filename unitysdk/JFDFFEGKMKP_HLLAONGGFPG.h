#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FILGGMBPDJD.h"
#include "unitysdk/System/ValueType.h"

class BFEFACBOBJM;
class DIELEFAILDG;
class JFDFFEGKMKP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JFDFFEGKMKP_HLLAONGGFPG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E87F0)
#define JFDFFEGKMKP_HLLAONGGFPG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JFDFFEGKMKP_HLLAONGGFPG_TypeDefinitionIndex = 79805;

struct alignas(8) JFDFFEGKMKP_HLLAONGGFPG
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::BFEFACBOBJM* NLKHAICJJAL; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::DIELEFAILDG* AGNGICBKLHJ; // 0x38
	::JFDFFEGKMKP* KLHPEBKNIFB; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48
	::FILGGMBPDJD FGDPOAFBDID; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDFFEGKMKP_HLLAONGGFPG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JFDFFEGKMKP_HLLAONGGFPG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
