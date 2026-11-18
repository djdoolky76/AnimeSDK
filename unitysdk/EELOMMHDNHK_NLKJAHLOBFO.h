#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/EELOMMHDNHK_GGECJFOKIIK.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class EELOMMHDNHK;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EELOMMHDNHK_NLKJAHLOBFO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75B1A0)
#define EELOMMHDNHK_NLKJAHLOBFO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EELOMMHDNHK_NLKJAHLOBFO_TypeDefinitionIndex = 48782;

struct alignas(8) EELOMMHDNHK_NLKJAHLOBFO
{
	::EELOMMHDNHK* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x28
	::System::Object* KIFJPEHBMCP; // 0x30
	::System::Byte _padding0[0x8];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x40
	::EELOMMHDNHK_GGECJFOKIIK ONGFNACJGOF; // 0x48
	::System::Byte _padding1[0x3];
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELOMMHDNHK_NLKJAHLOBFO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EELOMMHDNHK_NLKJAHLOBFO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
