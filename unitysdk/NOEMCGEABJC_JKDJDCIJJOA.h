#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class NGBFGIJANCG;
class NOEMCGEABJC;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NOEMCGEABJC_JKDJDCIJJOA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5A6C30)
#define NOEMCGEABJC_JKDJDCIJJOA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int NOEMCGEABJC_JKDJDCIJJOA_TypeDefinitionIndex = 41594;

struct alignas(8) NOEMCGEABJC_JKDJDCIJJOA
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::NGBFGIJANCG*> IELMICFKAAI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* LJBPECKCCEA; // 0x18
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ECODFICGLGM; // 0x20
	::NOEMCGEABJC* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEMCGEABJC_JKDJDCIJJOA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NOEMCGEABJC_JKDJDCIJJOA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
