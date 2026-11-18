#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class CPMEKIGICIL;
class CPMEKIGICIL_FFLFKKJGFNM;
class GHDMPGJOIGL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CPMEKIGICIL_MDIICNHIKME_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7430D0)
#define CPMEKIGICIL_MDIICNHIKME_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CPMEKIGICIL_MDIICNHIKME_TypeDefinitionIndex = 83468;

struct alignas(8) CPMEKIGICIL_MDIICNHIKME
{
	::CPMEKIGICIL_FFLFKKJGFNM* PGDOJBDJBOL; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::GHDMPGJOIGL*> ECODFICGLGM; // 0x18
	::System::Byte _padding0[0x10];
	::CPMEKIGICIL* KLHPEBKNIFB; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50
	::System::Int32 NPAKMAGBOCH; // 0x54
	::System::Int32 BIOGEIHKABE; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMEKIGICIL_MDIICNHIKME_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CPMEKIGICIL_MDIICNHIKME_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
