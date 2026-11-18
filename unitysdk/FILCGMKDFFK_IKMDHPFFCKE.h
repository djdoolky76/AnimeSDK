#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class FILCGMKDFFK;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FILCGMKDFFK_IKMDHPFFCKE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A96B0)
#define FILCGMKDFFK_IKMDHPFFCKE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FILCGMKDFFK_IKMDHPFFCKE_TypeDefinitionIndex = 66441;

struct alignas(8) FILCGMKDFFK_IKMDHPFFCKE
{
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::MoleMole::Battle::Entity* LDLICIEFBLM; // 0x30
	::FILCGMKDFFK* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILCGMKDFFK_IKMDHPFFCKE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FILCGMKDFFK_IKMDHPFFCKE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
