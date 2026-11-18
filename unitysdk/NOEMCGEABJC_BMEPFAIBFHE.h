#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class DONKLFMCKMN;
class NOEMCGEABJC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class DOABAAHLOML_1;

#define NOEMCGEABJC_BMEPFAIBFHE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70CC10)
#define NOEMCGEABJC_BMEPFAIBFHE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x596080)

inline static constexpr unsigned int NOEMCGEABJC_BMEPFAIBFHE_TypeDefinitionIndex = 41595;

struct alignas(8) NOEMCGEABJC_BMEPFAIBFHE
{
	::System::Collections::Generic::List_1<::System::String*>* COLIEPMFNNJ; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::DOABAAHLOML_1<::DONKLFMCKMN*>*> IELMICFKAAI; // 0x18
	::NOEMCGEABJC* KLHPEBKNIFB; // 0x20
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::System::String*>*> ECODFICGLGM; // 0x28
	::System::Byte _padding0[0x10];
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEMCGEABJC_BMEPFAIBFHE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NOEMCGEABJC_BMEPFAIBFHE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
