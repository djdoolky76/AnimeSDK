#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/MKBLJBDJHFE.h"
#include "unitysdk/OBICJCMGMIC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GBKABJFJMND_MLGAHDAJPAM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E0360)
#define GBKABJFJMND_MLGAHDAJPAM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GBKABJFJMND_MLGAHDAJPAM_TypeDefinitionIndex = 77391;

struct alignas(8) GBKABJFJMND_MLGAHDAJPAM
{
	::OBICJCMGMIC EPBHBCMCMOK; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::MKBLJBDJHFE> ECODFICGLGM; // 0x28
	::System::Byte _padding0[0x10];
	::System::Object* IELMICFKAAI; // 0x40
	::System::Byte _padding1[0x8];
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKABJFJMND_MLGAHDAJPAM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GBKABJFJMND_MLGAHDAJPAM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
