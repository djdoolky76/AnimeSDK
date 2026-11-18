#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class BMJLFMIKHHN;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define BMJLFMIKHHN_PODEEMGLBFI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78F760)
#define BMJLFMIKHHN_PODEEMGLBFI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int BMJLFMIKHHN_PODEEMGLBFI_TypeDefinitionIndex = 75031;

struct alignas(8) BMJLFMIKHHN_PODEEMGLBFI
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::BMJLFMIKHHN* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_PODEEMGLBFI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_PODEEMGLBFI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
