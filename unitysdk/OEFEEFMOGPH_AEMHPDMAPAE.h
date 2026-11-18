#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class OEFEEFMOGPH;
class OEFEEFMOGPH_MBGEICPACFF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OEFEEFMOGPH_AEMHPDMAPAE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5933D0)
#define OEFEEFMOGPH_AEMHPDMAPAE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OEFEEFMOGPH_AEMHPDMAPAE_TypeDefinitionIndex = 49751;

struct alignas(8) OEFEEFMOGPH_AEMHPDMAPAE
{
	::OEFEEFMOGPH_MBGEICPACFF* PGDOJBDJBOL; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::OEFEEFMOGPH* KLHPEBKNIFB; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_AEMHPDMAPAE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_AEMHPDMAPAE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
