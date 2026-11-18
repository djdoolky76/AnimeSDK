#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MKBLJBDJHFE.h"
#include "unitysdk/OBICJCMGMIC.h"
#include "unitysdk/System/ValueType.h"

class EFJMDEIBFHI_NJEAKNMFMNM;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EFJMDEIBFHI_DEGIMBOHIDM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76C2F0)
#define EFJMDEIBFHI_DEGIMBOHIDM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EFJMDEIBFHI_DEGIMBOHIDM_TypeDefinitionIndex = 82260;

struct alignas(8) EFJMDEIBFHI_DEGIMBOHIDM
{
	::EFJMDEIBFHI_NJEAKNMFMNM* PGDOJBDJBOL; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::MKBLJBDJHFE> ECODFICGLGM; // 0x18
	::System::Byte _padding0[0x10];
	::OBICJCMGMIC EPBHBCMCMOK; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJMDEIBFHI_DEGIMBOHIDM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EFJMDEIBFHI_DEGIMBOHIDM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
