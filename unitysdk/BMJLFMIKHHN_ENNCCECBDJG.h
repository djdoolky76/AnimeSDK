#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class APCKGCCCMJJ;
class BMJLFMIKHHN;
class BMJLFMIKHHN_KBHAJANCHFK;
class MAFGFDMEHOG;
namespace MoleMole { class UIBaseController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define BMJLFMIKHHN_ENNCCECBDJG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x714F70)
#define BMJLFMIKHHN_ENNCCECBDJG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int BMJLFMIKHHN_ENNCCECBDJG_TypeDefinitionIndex = 75030;

struct alignas(8) BMJLFMIKHHN_ENNCCECBDJG
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::BMJLFMIKHHN_KBHAJANCHFK* PGDOJBDJBOL; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::MoleMole::UIBaseController* LJHKADLMMMF; // 0x38
	::APCKGCCCMJJ* JGLEGKIPGKO; // 0x40
	::MAFGFDMEHOG* FMLBOLDFLKE; // 0x48
	::BMJLFMIKHHN* KLHPEBKNIFB; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58
	::System::Int32 MAEHALJGINN; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_ENNCCECBDJG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_ENNCCECBDJG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
