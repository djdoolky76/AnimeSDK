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

#define FBAMLABJMKF_KBHEDMGINBF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x655A90)
#define FBAMLABJMKF_KBHEDMGINBF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBAMLABJMKF_KBHEDMGINBF_TypeDefinitionIndex = 78141;

struct alignas(8) FBAMLABJMKF_KBHEDMGINBF
{
	::MoleMole::Config::AtmosphereData* MJODFDBNJIP; // 0x10
	::FBAMLABJMKF* KLHPEBKNIFB; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Action* NPFIONPDFED; // 0x40
	::JIGODLIKGDA_BMMOPHFEBOF* FCJAKLKNJOP; // 0x48
	::JIGODLIKGDA_OJDOCHKAADE* GPJIOPPDPEB; // 0x50
	::MoleMole::Config::AtmosphereData* PILJJPDCLLM; // 0x58
	::System::Boolean LAGLIIKCGGC; // 0x60
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_KBHEDMGINBF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_KBHEDMGINBF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
