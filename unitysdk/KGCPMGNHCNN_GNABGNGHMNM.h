#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KGCPMGNHCNN_GNABGNGHMNM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AAC80)
#define KGCPMGNHCNN_GNABGNGHMNM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KGCPMGNHCNN_GNABGNGHMNM_TypeDefinitionIndex = 72616;

struct alignas(8) KGCPMGNHCNN_GNABGNGHMNM
{
	::System::Object* KIFJPEHBMCP; // 0x10
	::System::Byte _padding0[0x18];
	::System::Object* IELMICFKAAI; // 0x30
	::System::Byte _padding1[0x18];
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x50
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Object*, ::System::Int32>> ECODFICGLGM; // 0x58
	::System::Byte _padding2[0x10];
	::System::Int32 MDPILDGFNHN; // 0x70
	::System::Int32 EIGKENIGHBG; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_GNABGNGHMNM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_GNABGNGHMNM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
