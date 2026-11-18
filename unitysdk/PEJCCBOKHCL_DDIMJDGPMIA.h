#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FPODAIHJDDC.h"
#include "unitysdk/System/ValueType.h"

class PEJCCBOKHCL;
class PEJCCBOKHCL_MDGIKLOCPJE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PEJCCBOKHCL_DDIMJDGPMIA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B8920)
#define PEJCCBOKHCL_DDIMJDGPMIA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PEJCCBOKHCL_DDIMJDGPMIA_TypeDefinitionIndex = 72579;

struct alignas(8) PEJCCBOKHCL_DDIMJDGPMIA
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::PEJCCBOKHCL_MDGIKLOCPJE* PGDOJBDJBOL; // 0x20
	::PEJCCBOKHCL* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::FPODAIHJDDC JDNCHMEAJJC; // 0x40
	::System::UInt32 LACJPGJJLCH; // 0x44
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DDIMJDGPMIA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DDIMJDGPMIA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
