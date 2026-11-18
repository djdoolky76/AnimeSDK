#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class AGMKENNHHHN_HEABNIODKDD;
class AGMKENNHHHN_PGGOOOCLPJI;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AGMKENNHHHN_HEABNIODKDD_BDPIKBLGLBA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79D5C0)
#define AGMKENNHHHN_HEABNIODKDD_BDPIKBLGLBA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AGMKENNHHHN_HEABNIODKDD_BDPIKBLGLBA_TypeDefinitionIndex = 82465;

struct alignas(8) AGMKENNHHHN_HEABNIODKDD_BDPIKBLGLBA
{
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::AGMKENNHHHN_PGGOOOCLPJI* PGDOJBDJBOL; // 0x28
	::AGMKENNHHHN_HEABNIODKDD* KLHPEBKNIFB; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKENNHHHN_HEABNIODKDD_BDPIKBLGLBA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AGMKENNHHHN_HEABNIODKDD_BDPIKBLGLBA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
