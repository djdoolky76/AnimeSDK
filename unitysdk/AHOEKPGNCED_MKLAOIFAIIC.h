#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class AHOEKPGNCED;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AHOEKPGNCED_MKLAOIFAIIC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B8FA0)
#define AHOEKPGNCED_MKLAOIFAIIC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AHOEKPGNCED_MKLAOIFAIIC_TypeDefinitionIndex = 53464;

struct alignas(8) AHOEKPGNCED_MKLAOIFAIIC
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x10];
	::AHOEKPGNCED* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Object*, ::System::Collections::Generic::List_1<::System::Object*>*>> ECODFICGLGM; // 0x30
	::System::Byte _padding1[0x18];
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x50
	::System::Object* KIFJPEHBMCP; // 0x58
	::System::Byte _padding2[0x18];
	::System::Int32 MDPILDGFNHN; // 0x78
	::System::Int32 EIGKENIGHBG; // 0x7C
	::System::Int32 LHEEINPNGOO; // 0x80

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOEKPGNCED_MKLAOIFAIIC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AHOEKPGNCED_MKLAOIFAIIC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
