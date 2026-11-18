#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class MAFGFDMEHOG;
namespace MoleMole { class UIBaseController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MAFGFDMEHOG_IFBAPGBGBCH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76CF80)
#define MAFGFDMEHOG_IFBAPGBGBCH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MAFGFDMEHOG_IFBAPGBGBCH_TypeDefinitionIndex = 46023;

struct alignas(8) MAFGFDMEHOG_IFBAPGBGBCH
{
	::MoleMole::UIBaseController* DBEGNAMMHKA; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::MAFGFDMEHOG* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Int32 APKIKLPPHEA; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_IFBAPGBGBCH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_IFBAPGBGBCH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
