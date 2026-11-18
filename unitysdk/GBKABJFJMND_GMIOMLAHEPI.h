#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class CJIEIHEDMME;
class FDOKNLPCNHO;
class GBKABJFJMND_BPKHFLMNOIC;
class KNBADLOICGB;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GBKABJFJMND_GMIOMLAHEPI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x776070)
#define GBKABJFJMND_GMIOMLAHEPI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GBKABJFJMND_GMIOMLAHEPI_TypeDefinitionIndex = 77394;

struct alignas(8) GBKABJFJMND_GMIOMLAHEPI
{
	::GBKABJFJMND_BPKHFLMNOIC* PGDOJBDJBOL; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::FDOKNLPCNHO* BPGPPMDMKEK; // 0x28
	::CJIEIHEDMME* CHKDMEFLCCH; // 0x30
	::KNBADLOICGB* MOMCCGMDAGP; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x40
	::System::Byte _padding0[0x10];
	::System::Int32 MDPILDGFNHN; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKABJFJMND_GMIOMLAHEPI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GBKABJFJMND_GMIOMLAHEPI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
