#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FBAMLABJMKF;
class JIGODLIKGDA_BMMOPHFEBOF;
class JIGODLIKGDA_OJDOCHKAADE;
namespace MoleMole::Config { class AtmosphereData; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LAAJGBGPKAI_CBIBDDAGJFH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7849D0)
#define LAAJGBGPKAI_CBIBDDAGJFH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int LAAJGBGPKAI_CBIBDDAGJFH_TypeDefinitionIndex = 84450;

struct alignas(8) LAAJGBGPKAI_CBIBDDAGJFH
{
	::JIGODLIKGDA_BMMOPHFEBOF* FCJAKLKNJOP; // 0x10
	::JIGODLIKGDA_OJDOCHKAADE* GPJIOPPDPEB; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::MoleMole::Config::AtmosphereData* MJODFDBNJIP; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::MoleMole::Config::AtmosphereData* PILJJPDCLLM; // 0x48
	::FBAMLABJMKF* JDBIEANMJLH; // 0x50
	::System::Action* NPFIONPDFED; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAJGBGPKAI_CBIBDDAGJFH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LAAJGBGPKAI_CBIBDDAGJFH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
