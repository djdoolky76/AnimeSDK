#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class EJMGGIGAPNA;
namespace MoleMole::Config { class ConfigShootingGroundCamera; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EJMGGIGAPNA_PKKIPHGLKGG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76CDD0)
#define EJMGGIGAPNA_PKKIPHGLKGG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EJMGGIGAPNA_PKKIPHGLKGG_TypeDefinitionIndex = 40693;

struct alignas(8) EJMGGIGAPNA_PKKIPHGLKGG
{
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x10
	::MoleMole::Config::ConfigShootingGroundCamera* DFMKILICPFB; // 0x18
	::EJMGGIGAPNA* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_PKKIPHGLKGG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_PKKIPHGLKGG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
