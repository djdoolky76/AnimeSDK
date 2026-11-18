#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class NGBFGIJANCG;
class OMCNHOEHKPJ;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OMCNHOEHKPJ_HLJADJABFOE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x811990)
#define OMCNHOEHKPJ_HLJADJABFOE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x3C0A10)

inline static constexpr unsigned int OMCNHOEHKPJ_HLJADJABFOE_TypeDefinitionIndex = 47647;

struct alignas(8) OMCNHOEHKPJ_HLJADJABFOE
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::NGBFGIJANCG*> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::System::Runtime::CompilerServices::TaskAwaiter_1<::NGBFGIJANCG*> IELMICFKAAI; // 0x28
	::OMCNHOEHKPJ* KLHPEBKNIFB; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* LJBPECKCCEA; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCNHOEHKPJ_HLJADJABFOE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OMCNHOEHKPJ_HLJADJABFOE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
