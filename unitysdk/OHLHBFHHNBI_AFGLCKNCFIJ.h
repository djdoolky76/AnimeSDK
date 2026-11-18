#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/System/ValueType.h"

class FLBAEFPLHOF;
class KEJNHMJNNCF;
class OHLHBFHHNBI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OHLHBFHHNBI_AFGLCKNCFIJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5FAD40)
#define OHLHBFHHNBI_AFGLCKNCFIJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OHLHBFHHNBI_AFGLCKNCFIJ_TypeDefinitionIndex = 38597;

struct alignas(8) OHLHBFHHNBI_AFGLCKNCFIJ
{
	::System::Threading::CancellationToken PKCGIBKFENJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::KEJNHMJNNCF*>* JEACJHBJBNF; // 0x18
	::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter KIFJPEHBMCP; // 0x20
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::FLBAEFPLHOF*, ::System::Boolean>>* BIGEGEGENGK; // 0x30
	::System::Collections::Generic::List_1<::System::ValueTuple_4<::FLBAEFPLHOF*, ::System::Int64, ::System::Int64, ::System::Int64>>* ELKCMANOMEN; // 0x38
	::OHLHBFHHNBI* KLHPEBKNIFB; // 0x40
	::Il2CppArray<::GPNHHGBPCGM>* EPGINCMMGJC; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58
	::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter IELMICFKAAI; // 0x5C
	::System::Boolean IIHMILEICKE; // 0x5D

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_AFGLCKNCFIJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_AFGLCKNCFIJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
