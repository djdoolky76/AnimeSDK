#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

class HHOBGKLENPF_KKHPPPGCPPN;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HHOBGKLENPF_EPLHMOHPJEN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x610D60)
#define HHOBGKLENPF_EPLHMOHPJEN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HHOBGKLENPF_EPLHMOHPJEN_TypeDefinitionIndex = 54314;

struct alignas(8) HHOBGKLENPF_EPLHMOHPJEN
{
	::System::Action* KKPCHLMMKDL; // 0x10
	::System::Object* IELMICFKAAI; // 0x18
	::System::Byte _padding0[0x8];
	::Cysharp::Threading::Tasks::UniTask_Awaiter KIFJPEHBMCP; // 0x28
	::HHOBGKLENPF_KKHPPPGCPPN* PGDOJBDJBOL; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x40
	::System::Byte _padding1[0x10];
	::System::Action* ALJBOGDAHNF; // 0x58
	::System::Int32 PNPADCLNBJN; // 0x60
	::System::Int32 MDPILDGFNHN; // 0x64
	::System::Nullable_1<::System::Int32> NACGJJKHEJE; // 0x68
	::System::Boolean ECEHEMMBMHA; // 0x70
	::System::Byte _padding2[0x3];
	::System::Nullable_1<::System::Int32> CLHLJKKAAPO; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_EPLHMOHPJEN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HHOBGKLENPF_EPLHMOHPJEN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
