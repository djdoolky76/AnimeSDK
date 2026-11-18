#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AHOEKPGNCED_OLMLBELPGMN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7857F0)
#define AHOEKPGNCED_OLMLBELPGMN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AHOEKPGNCED_OLMLBELPGMN_TypeDefinitionIndex = 53471;

struct alignas(8) AHOEKPGNCED_OLMLBELPGMN
{
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x10
	::System::Object* IELMICFKAAI; // 0x18
	::System::Byte _padding0[0x18];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Object*, ::System::Object*>> ECODFICGLGM; // 0x38
	::System::Byte _padding1[0x18];
	::System::Int32 MDPILDGFNHN; // 0x58
	::System::Int32 EIGKENIGHBG; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHOEKPGNCED_OLMLBELPGMN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AHOEKPGNCED_OLMLBELPGMN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
