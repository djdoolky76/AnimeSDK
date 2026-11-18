#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class GNACLIIBMED;
class GNACLIIBMED_OLBODNHHENC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GNACLIIBMED_NMPFDPGEODA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x776750)
#define GNACLIIBMED_NMPFDPGEODA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GNACLIIBMED_NMPFDPGEODA_TypeDefinitionIndex = 40197;

struct alignas(8) GNACLIIBMED_NMPFDPGEODA
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::GNACLIIBMED_OLBODNHHENC* PGDOJBDJBOL; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::GNACLIIBMED* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_NMPFDPGEODA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GNACLIIBMED_NMPFDPGEODA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
