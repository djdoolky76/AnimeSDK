#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class FNCHNNGGCFP;
class OMCNHOEHKPJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class DOABAAHLOML_1;

#define OMCNHOEHKPJ_JBDIAJPIBOB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x794ED0)
#define OMCNHOEHKPJ_JBDIAJPIBOB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x596080)

inline static constexpr unsigned int OMCNHOEHKPJ_JBDIAJPIBOB_TypeDefinitionIndex = 47646;

struct alignas(8) OMCNHOEHKPJ_JBDIAJPIBOB
{
	::System::Collections::Generic::HashSet_1<::System::String*>* DCKLNFBPDKN; // 0x10
	::OMCNHOEHKPJ* KLHPEBKNIFB; // 0x18
	::System::Runtime::CompilerServices::TaskAwaiter_1<::DOABAAHLOML_1<::FNCHNNGGCFP*>*> IELMICFKAAI; // 0x20
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::DOABAAHLOML_1<::FNCHNNGGCFP*>*> ECODFICGLGM; // 0x28
	::System::Byte _padding0[0x10];
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCNHOEHKPJ_JBDIAJPIBOB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OMCNHOEHKPJ_JBDIAJPIBOB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
