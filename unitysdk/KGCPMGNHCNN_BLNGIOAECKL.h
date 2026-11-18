#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KGCPMGNHCNN_BLNGIOAECKL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B0230)
#define KGCPMGNHCNN_BLNGIOAECKL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KGCPMGNHCNN_BLNGIOAECKL_TypeDefinitionIndex = 72608;

struct alignas(8) KGCPMGNHCNN_BLNGIOAECKL
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x18];
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* BPGPPMDMKEK; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OEGEAFMAFBI; // 0x38
	::System::String* NFLDEIEOEOB; // 0x40
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Boolean, ::System::String*>> ECODFICGLGM; // 0x50
	::System::Byte _padding1[0x18];
	::System::Int32 MDPILDGFNHN; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_BLNGIOAECKL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KGCPMGNHCNN_BLNGIOAECKL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
