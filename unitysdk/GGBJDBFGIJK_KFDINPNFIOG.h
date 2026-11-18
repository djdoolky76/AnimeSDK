#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class GGBJDBFGIJK;
namespace MoleMole { class UINounDetailPanelWidgetController_Data; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GGBJDBFGIJK_KFDINPNFIOG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x720B00)
#define GGBJDBFGIJK_KFDINPNFIOG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GGBJDBFGIJK_KFDINPNFIOG_TypeDefinitionIndex = 92296;

struct alignas(8) GGBJDBFGIJK_KFDINPNFIOG
{
	::MoleMole::UINounDetailPanelWidgetController_Data* LJBPECKCCEA; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x18
	::GGBJDBFGIJK* KLHPEBKNIFB; // 0x20
	::System::Threading::CancellationToken PKCGIBKFENJ; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_KFDINPNFIOG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_KFDINPNFIOG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
