#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class IMDBPIOBKMI;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IMDBPIOBKMI_JCMMKLEKLLI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E7D90)
#define IMDBPIOBKMI_JCMMKLEKLLI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IMDBPIOBKMI_JCMMKLEKLLI_TypeDefinitionIndex = 60443;

struct alignas(8) IMDBPIOBKMI_JCMMKLEKLLI
{
	::IMDBPIOBKMI* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::System::Object* IELMICFKAAI; // 0x28
	::System::Byte _padding0[0x8];
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMDBPIOBKMI_JCMMKLEKLLI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IMDBPIOBKMI_JCMMKLEKLLI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
