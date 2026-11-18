#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class EADLNAAMFFE;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define BAJBDJANHAA_IFFAJPOGANP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x747940)
#define BAJBDJANHAA_IFFAJPOGANP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int BAJBDJANHAA_IFFAJPOGANP_TypeDefinitionIndex = 56300;

struct alignas(8) BAJBDJANHAA_IFFAJPOGANP
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Collections::Generic::IEnumerator_1<::EADLNAAMFFE*>* GHANCJDIDBC; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x38
	::System::Collections::Generic::IEnumerable_1<::EADLNAAMFFE*>* BNBGIFONPGI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJBDJANHAA_IFFAJPOGANP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + BAJBDJANHAA_IFFAJPOGANP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
