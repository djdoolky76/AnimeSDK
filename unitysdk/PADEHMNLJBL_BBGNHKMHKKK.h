#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PADEHMNLJBL_HOJLCPLECGJ;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::AI { class NavMeshQueryAsyncOperation; }

#define PADEHMNLJBL_BBGNHKMHKKK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A4F20)
#define PADEHMNLJBL_BBGNHKMHKKK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PADEHMNLJBL_BBGNHKMHKKK_TypeDefinitionIndex = 86760;

struct alignas(8) PADEHMNLJBL_BBGNHKMHKKK
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::PADEHMNLJBL_HOJLCPLECGJ* PGDOJBDJBOL; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::UnityEngine::AI::NavMeshQueryAsyncOperation*> ECODFICGLGM; // 0x28
	::System::Byte _padding0[0x10];
	::System::UInt32 KGAHKGBMEAF; // 0x40
	::UnityEngine::Vector3 GOEADLFHLEJ; // 0x44
	::UnityEngine::Vector3 OIKMICDBAPP; // 0x50
	::System::Int32 FODJHLJPGOE; // 0x5C
	::System::Int32 MDPILDGFNHN; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PADEHMNLJBL_BBGNHKMHKKK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PADEHMNLJBL_BBGNHKMHKKK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
