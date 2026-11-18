#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KGCPMGNHCNN_BOKFBIIELHK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x74D9E0)
#define KGCPMGNHCNN_BOKFBIIELHK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KGCPMGNHCNN_BOKFBIIELHK_TypeDefinitionIndex = 72619;

struct alignas(8) KGCPMGNHCNN_BOKFBIIELHK
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x18];
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Object*, ::Newtonsoft::Json::Linq::JToken*>> ECODFICGLGM; // 0x38
	::System::Byte _padding1[0x18];
	::System::Int32 CMJLFAIMHLE; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x5C
	::System::Int32 EIGKENIGHBG; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_BOKFBIIELHK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_BOKFBIIELHK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
