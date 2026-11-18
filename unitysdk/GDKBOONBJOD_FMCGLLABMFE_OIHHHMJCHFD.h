#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class GDKBOONBJOD_FMCGLLABMFE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GDKBOONBJOD_FMCGLLABMFE_OIHHHMJCHFD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6C2F30)
#define GDKBOONBJOD_FMCGLLABMFE_OIHHHMJCHFD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GDKBOONBJOD_FMCGLLABMFE_OIHHHMJCHFD_TypeDefinitionIndex = 55380;

struct alignas(8) GDKBOONBJOD_FMCGLLABMFE_OIHHHMJCHFD
{
	::GDKBOONBJOD_FMCGLLABMFE* KLHPEBKNIFB; // 0x10
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD_FMCGLLABMFE_OIHHHMJCHFD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GDKBOONBJOD_FMCGLLABMFE_OIHHHMJCHFD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
