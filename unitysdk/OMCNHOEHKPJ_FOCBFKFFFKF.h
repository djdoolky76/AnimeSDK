#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class DONKLFMCKMN;
class OMCNHOEHKPJ;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class DOABAAHLOML_1;

#define OMCNHOEHKPJ_FOCBFKFFFKF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B8790)
#define OMCNHOEHKPJ_FOCBFKFFFKF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x3C0A10)

inline static constexpr unsigned int OMCNHOEHKPJ_FOCBFKFFFKF_TypeDefinitionIndex = 47645;

struct alignas(8) OMCNHOEHKPJ_FOCBFKFFFKF
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::DOABAAHLOML_1<::DONKLFMCKMN*>*> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::OMCNHOEHKPJ* KLHPEBKNIFB; // 0x28
	::System::Runtime::CompilerServices::TaskAwaiter_1<::DOABAAHLOML_1<::DONKLFMCKMN*>*> IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCNHOEHKPJ_FOCBFKFFFKF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OMCNHOEHKPJ_FOCBFKFFFKF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
