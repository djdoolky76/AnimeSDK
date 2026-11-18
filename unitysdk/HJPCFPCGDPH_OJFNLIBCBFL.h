#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/DPHLOBCHIEA.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class CANOPECPHCD;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HJPCFPCGDPH_OJFNLIBCBFL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x721AA0)
#define HJPCFPCGDPH_OJFNLIBCBFL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HJPCFPCGDPH_OJFNLIBCBFL_TypeDefinitionIndex = 56973;

struct alignas(8) HJPCFPCGDPH_OJFNLIBCBFL
{
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* FPAHJNBMBBM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::CANOPECPHCD* IMCKNHBFJEJ; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48
	::DPHLOBCHIEA AAOCANGHBDG; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_OJFNLIBCBFL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HJPCFPCGDPH_OJFNLIBCBFL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
