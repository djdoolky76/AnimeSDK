#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABJMPKENACD_JHLFACFNHCA.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class ABJMPKENACD_GHGOFOLFFAG;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_GHGOFOLFFAG_KANKBMBPAKG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x730B40)
#define ABJMPKENACD_GHGOFOLFFAG_KANKBMBPAKG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_GHGOFOLFFAG_KANKBMBPAKG_TypeDefinitionIndex = 88626;

struct alignas(8) ABJMPKENACD_GHGOFOLFFAG_KANKBMBPAKG
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::ABJMPKENACD_GHGOFOLFFAG* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38
	::ABJMPKENACD_JHLFACFNHCA IGAAKDOIPNN; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_GHGOFOLFFAG_KANKBMBPAKG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_GHGOFOLFFAG_KANKBMBPAKG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
