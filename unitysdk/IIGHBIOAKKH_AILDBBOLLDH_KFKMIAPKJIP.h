#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IIGHBIOAKKH_AILDBBOLLDH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IIGHBIOAKKH_AILDBBOLLDH_KFKMIAPKJIP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7445D0)
#define IIGHBIOAKKH_AILDBBOLLDH_KFKMIAPKJIP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IIGHBIOAKKH_AILDBBOLLDH_KFKMIAPKJIP_TypeDefinitionIndex = 40027;

struct alignas(8) IIGHBIOAKKH_AILDBBOLLDH_KFKMIAPKJIP
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::IIGHBIOAKKH_AILDBBOLLDH* KLHPEBKNIFB; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x28
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x2C
	::UnityEngine::Vector3 EGMBODGPDGF; // 0x30
	::UnityEngine::Vector3 HODAIDNDKHD; // 0x3C
	::System::Single DIHGFFHKNCA; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH_KFKMIAPKJIP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IIGHBIOAKKH_AILDBBOLLDH_KFKMIAPKJIP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
