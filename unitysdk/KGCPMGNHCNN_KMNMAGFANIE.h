#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KGCPMGNHCNN_KMNMAGFANIE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x753970)
#define KGCPMGNHCNN_KMNMAGFANIE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KGCPMGNHCNN_KMNMAGFANIE_TypeDefinitionIndex = 72612;

struct alignas(8) KGCPMGNHCNN_KMNMAGFANIE
{
	::System::Object* KIFJPEHBMCP; // 0x10
	::System::Byte _padding0[0x18];
	::Newtonsoft::Json::Linq::JToken* LMGKPDIHOMJ; // 0x30
	::System::Object* IELMICFKAAI; // 0x38
	::System::Byte _padding1[0x18];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Object*, ::Newtonsoft::Json::Linq::JToken*>> ECODFICGLGM; // 0x58
	::System::Byte _padding2[0x18];
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x78
	::System::Int32 MDPILDGFNHN; // 0x80
	::System::Int32 EIGKENIGHBG; // 0x84

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_KMNMAGFANIE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_KMNMAGFANIE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
