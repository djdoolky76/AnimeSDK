#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class GNACLIIBMED;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GNACLIIBMED_MJLJPLFIDPO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x743B30)
#define GNACLIIBMED_MJLJPLFIDPO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GNACLIIBMED_MJLJPLFIDPO_TypeDefinitionIndex = 40209;

struct alignas(8) GNACLIIBMED_MJLJPLFIDPO
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::GNACLIIBMED* KLHPEBKNIFB; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_MJLJPLFIDPO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GNACLIIBMED_MJLJPLFIDPO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
