#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueType.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define KGCPMGNHCNN_AHBJPLBNADM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x750BA0)
#define KGCPMGNHCNN_AHBJPLBNADM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KGCPMGNHCNN_AHBJPLBNADM_TypeDefinitionIndex = 72621;

struct alignas(8) KGCPMGNHCNN_AHBJPLBNADM
{
	::Newtonsoft::Json::Linq::JToken* JPMGJILEHAF; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LLICLPKDLBP; // 0x18
	::System::String* OLOMNNBBHPJ; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_3<::System::Boolean, ::Newtonsoft::Json::Linq::JToken*, ::System::Int32>> ECODFICGLGM; // 0x28
	::System::Byte _padding0[0x18];
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x48
	::System::Object* IELMICFKAAI; // 0x50
	::System::Byte _padding1[0x10];
	::UnityEngine::Networking::UnityWebRequest* HEJJAEOJBOB; // 0x68
	::System::Int32 MDPILDGFNHN; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_AHBJPLBNADM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_AHBJPLBNADM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
