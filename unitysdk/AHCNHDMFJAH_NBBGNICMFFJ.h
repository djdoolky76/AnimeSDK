#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/NKPLAFMCLNA.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class AHCNHDMFJAH;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AHCNHDMFJAH_NBBGNICMFFJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x727DC0)
#define AHCNHDMFJAH_NBBGNICMFFJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AHCNHDMFJAH_NBBGNICMFFJ_TypeDefinitionIndex = 78392;

struct alignas(8) AHCNHDMFJAH_NBBGNICMFFJ
{
	::AHCNHDMFJAH* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::NKPLAFMCLNA DFMKILICPFB; // 0x30
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_NBBGNICMFFJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_NBBGNICMFFJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
