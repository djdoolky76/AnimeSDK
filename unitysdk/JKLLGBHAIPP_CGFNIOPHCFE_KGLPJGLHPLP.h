#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class JKLLGBHAIPP_ADOEFAKEEEE;
class JKLLGBHAIPP_CGFNIOPHCFE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JKLLGBHAIPP_CGFNIOPHCFE_KGLPJGLHPLP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x719330)
#define JKLLGBHAIPP_CGFNIOPHCFE_KGLPJGLHPLP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JKLLGBHAIPP_CGFNIOPHCFE_KGLPJGLHPLP_TypeDefinitionIndex = 56658;

struct alignas(8) JKLLGBHAIPP_CGFNIOPHCFE_KGLPJGLHPLP
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::JKLLGBHAIPP_ADOEFAKEEEE* PGDOJBDJBOL; // 0x20
	::JKLLGBHAIPP_CGFNIOPHCFE* KLHPEBKNIFB; // 0x28
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_CGFNIOPHCFE_KGLPJGLHPLP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_CGFNIOPHCFE_KGLPJGLHPLP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
