#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MNBCBNIEAMG_AGNBIHPMAPG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6FF3F0)
#define MNBCBNIEAMG_AGNBIHPMAPG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int MNBCBNIEAMG_AGNBIHPMAPG_TypeDefinitionIndex = 76595;

struct alignas(8) MNBCBNIEAMG_AGNBIHPMAPG
{
	::System::Action* FPNLKPJNCGK; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::MoleMole::UIGeneralTipsPopWindowController* HIEMPKMEDOG; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50
	::System::Int32 HHEGANCPILH; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBCBNIEAMG_AGNBIHPMAPG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MNBCBNIEAMG_AGNBIHPMAPG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
