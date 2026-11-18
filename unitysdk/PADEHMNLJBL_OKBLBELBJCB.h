#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PADEHMNLJBL_OKBLBELBJCB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x778DA0)
#define PADEHMNLJBL_OKBLBELBJCB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PADEHMNLJBL_OKBLBELBJCB_TypeDefinitionIndex = 86757;

struct alignas(8) PADEHMNLJBL_OKBLBELBJCB
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Object*, ::System::Int32>> ECODFICGLGM; // 0x28
	::System::Byte _padding1[0x10];
	::UnityEngine::Vector3 GOEADLFHLEJ; // 0x40
	::System::Int32 FODJHLJPGOE; // 0x4C
	::System::Int32 MHBFBJGEOOD; // 0x50
	::UnityEngine::Vector3 OIKMICDBAPP; // 0x54
	::UnityEngine::AI::NavMeshHit IBGIKDINNAD; // 0x60
	::System::Int32 MDPILDGFNHN; // 0x84

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADEHMNLJBL_OKBLBELBJCB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PADEHMNLJBL_OKBLBELBJCB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
