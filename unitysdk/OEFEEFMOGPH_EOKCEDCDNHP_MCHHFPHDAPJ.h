#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class OEFEEFMOGPH_EOKCEDCDNHP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OEFEEFMOGPH_EOKCEDCDNHP_MCHHFPHDAPJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6EA540)
#define OEFEEFMOGPH_EOKCEDCDNHP_MCHHFPHDAPJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OEFEEFMOGPH_EOKCEDCDNHP_MCHHFPHDAPJ_TypeDefinitionIndex = 49744;

struct alignas(8) OEFEEFMOGPH_EOKCEDCDNHP_MCHHFPHDAPJ
{
	::OEFEEFMOGPH_EOKCEDCDNHP* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_EOKCEDCDNHP_MCHHFPHDAPJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_EOKCEDCDNHP_MCHHFPHDAPJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
