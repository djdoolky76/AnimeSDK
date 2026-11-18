#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define KGCPMGNHCNN_LEHAMOMICBN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x750BB0)
#define KGCPMGNHCNN_LEHAMOMICBN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KGCPMGNHCNN_LEHAMOMICBN_TypeDefinitionIndex = 72615;

struct alignas(8) KGCPMGNHCNN_LEHAMOMICBN
{
	::UnityEngine::Networking::UnityWebRequest* HEJJAEOJBOB; // 0x10
	::System::Object* IELMICFKAAI; // 0x18
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Boolean, ::Newtonsoft::Json::Linq::JToken*>> ECODFICGLGM; // 0x30
	::System::Byte _padding1[0x18];
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x50
	::System::String* OLOMNNBBHPJ; // 0x58
	::Newtonsoft::Json::Linq::JToken* JPMGJILEHAF; // 0x60
	::System::Int32 MDPILDGFNHN; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_LEHAMOMICBN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_LEHAMOMICBN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
