#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PADEHMNLJBL_HNLCFBPFKGO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6022F0)
#define PADEHMNLJBL_HNLCFBPFKGO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PADEHMNLJBL_HNLCFBPFKGO_TypeDefinitionIndex = 86764;

struct alignas(8) PADEHMNLJBL_HNLCFBPFKGO
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* KFPEMNBNOFA; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* JBPCEHMOEGP; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x48
	::System::Int32 LIMNECOMDOM; // 0x4C
	::System::Single CKIMKCEGHKD; // 0x50
	::UnityEngine::Vector3 OLKHDAAGGAA; // 0x54
	::System::Single AMDGNAMFBGF; // 0x60
	::System::Single MIMBJALLBEB; // 0x64
	::UnityEngine::Vector3 NJLNJCLGLNO; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADEHMNLJBL_HNLCFBPFKGO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PADEHMNLJBL_HNLCFBPFKGO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
