#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELKNCGOJPN.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DKPPFKOEOEM_DEBBHACKANF;
class DKPPFKOEOEM_GGKACPCJOFE;
namespace MoleMole { class GameMixedModeSubSystem; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DKPPFKOEOEM_GGKACPCJOFE_HBMOMGJMNIK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x722F10)
#define DKPPFKOEOEM_GGKACPCJOFE_HBMOMGJMNIK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DKPPFKOEOEM_GGKACPCJOFE_HBMOMGJMNIK_TypeDefinitionIndex = 53224;

struct alignas(8) DKPPFKOEOEM_GGKACPCJOFE_HBMOMGJMNIK
{
	::MoleMole::GameMixedModeSubSystem* IMAMLHPOMPF; // 0x10
	::DKPPFKOEOEM_DEBBHACKANF* PGDOJBDJBOL; // 0x18
	::DKPPFKOEOEM_GGKACPCJOFE* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50
	::CELKNCGOJPN NEPOAMCKMEL; // 0x54
	::UnityEngine::Vector3 HNGOBFBGNDD; // 0x58
	::UnityEngine::Vector3 EPLDHFNGNNB; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_GGKACPCJOFE_HBMOMGJMNIK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_GGKACPCJOFE_HBMOMGJMNIK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
