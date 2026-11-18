#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class RenderTexture; }

#define OCNOCKMHBHE_PKHLKDGDCCA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6EA530)
#define OCNOCKMHBHE_PKHLKDGDCCA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OCNOCKMHBHE_PKHLKDGDCCA_TypeDefinitionIndex = 89188;

struct alignas(8) OCNOCKMHBHE_PKHLKDGDCCA
{
	::UnityEngine::RenderTexture* FJEEKLKBFHN; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::System::Action_1<::System::String*>* CAAFEGLOALC; // 0x38
	::System::Action* HGBOMLCCBEE; // 0x40
	::System::Object* KIFJPEHBMCP; // 0x48
	::System::Byte _padding0[0x10];
	::System::Int32 MDPILDGFNHN; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_PKHLKDGDCCA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_PKHLKDGDCCA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
