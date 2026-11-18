#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class FNCHNNGGCFP;
class NOEMCGEABJC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class DOABAAHLOML_1;

#define NOEMCGEABJC_AJHPCPIAFKM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x67CD70)
#define NOEMCGEABJC_AJHPCPIAFKM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int NOEMCGEABJC_AJHPCPIAFKM_TypeDefinitionIndex = 41597;

struct alignas(8) NOEMCGEABJC_AJHPCPIAFKM
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::DOABAAHLOML_1<::FNCHNNGGCFP*>*> IELMICFKAAI; // 0x10
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*> ECODFICGLGM; // 0x18
	::System::Byte _padding0[0x10];
	::NOEMCGEABJC* KLHPEBKNIFB; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* PPECAHOBIIK; // 0x38
	::System::Collections::Generic::HashSet_1<::System::String*>* DCKLNFBPDKN; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOEMCGEABJC_AJHPCPIAFKM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NOEMCGEABJC_AJHPCPIAFKM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
