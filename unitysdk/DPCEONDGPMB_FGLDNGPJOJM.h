#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DPCEONDGPMB_FGLDNGPJOJM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x723020)
#define DPCEONDGPMB_FGLDNGPJOJM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DPCEONDGPMB_FGLDNGPJOJM_TypeDefinitionIndex = 91698;

struct alignas(8) DPCEONDGPMB_FGLDNGPJOJM
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x18];
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCEONDGPMB_FGLDNGPJOJM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DPCEONDGPMB_FGLDNGPJOJM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
