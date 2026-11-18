#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class OEFEEFMOGPH_FPBACLMPFCP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OEFEEFMOGPH_FPBACLMPFCP_PBEDDBFPJFA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x67F170)
#define OEFEEFMOGPH_FPBACLMPFCP_PBEDDBFPJFA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OEFEEFMOGPH_FPBACLMPFCP_PBEDDBFPJFA_TypeDefinitionIndex = 49756;

struct alignas(8) OEFEEFMOGPH_FPBACLMPFCP_PBEDDBFPJFA
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::OEFEEFMOGPH_FPBACLMPFCP* KLHPEBKNIFB; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_FPBACLMPFCP_PBEDDBFPJFA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_FPBACLMPFCP_PBEDDBFPJFA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
