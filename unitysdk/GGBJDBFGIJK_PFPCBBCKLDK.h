#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class GGBJDBFGIJK;
namespace MoleMole { class UINounDetailPanelWidgetController; }
namespace MoleMole { class UINounDetailPanelWidgetController_Data; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GGBJDBFGIJK_PFPCBBCKLDK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x654650)
#define GGBJDBFGIJK_PFPCBBCKLDK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GGBJDBFGIJK_PFPCBBCKLDK_TypeDefinitionIndex = 92293;

struct alignas(8) GGBJDBFGIJK_PFPCBBCKLDK
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::System::Threading::CancellationToken PKCGIBKFENJ; // 0x18
	::MoleMole::UINounDetailPanelWidgetController* DLLDEAKONAP; // 0x20
	::GGBJDBFGIJK* KLHPEBKNIFB; // 0x28
	::MoleMole::UINounDetailPanelWidgetController_Data* OAOCLCNMCNP; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 NEJGJHAFOOA; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C
	::System::Int32 AKGGKGEPJLP; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_PFPCBBCKLDK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_PFPCBBCKLDK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
