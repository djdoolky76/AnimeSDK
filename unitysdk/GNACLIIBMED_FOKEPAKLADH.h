#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class GNACLIIBMED;
class GNACLIIBMED_OAHDHPBADON;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GNACLIIBMED_FOKEPAKLADH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x722350)
#define GNACLIIBMED_FOKEPAKLADH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GNACLIIBMED_FOKEPAKLADH_TypeDefinitionIndex = 40196;

struct alignas(8) GNACLIIBMED_FOKEPAKLADH
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::GNACLIIBMED_OAHDHPBADON* PGDOJBDJBOL; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::GNACLIIBMED* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNACLIIBMED_FOKEPAKLADH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GNACLIIBMED_FOKEPAKLADH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
