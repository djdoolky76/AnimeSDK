#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class PMGMBGFOFKG_DAPIPFNMFCL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PMGMBGFOFKG_DAPIPFNMFCL_GJICHLEEFJB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x81CEB0)
#define PMGMBGFOFKG_DAPIPFNMFCL_GJICHLEEFJB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PMGMBGFOFKG_DAPIPFNMFCL_GJICHLEEFJB_TypeDefinitionIndex = 65873;

struct alignas(8) PMGMBGFOFKG_DAPIPFNMFCL_GJICHLEEFJB
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::PMGMBGFOFKG_DAPIPFNMFCL* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_DAPIPFNMFCL_GJICHLEEFJB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_DAPIPFNMFCL_GJICHLEEFJB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
