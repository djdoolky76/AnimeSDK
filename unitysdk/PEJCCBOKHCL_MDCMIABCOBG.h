#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FPODAIHJDDC.h"
#include "unitysdk/System/ValueType.h"

class EKBABGJMHHF;
class EPJAODADCEA;
class PEJCCBOKHCL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PEJCCBOKHCL_MDCMIABCOBG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70A3A0)
#define PEJCCBOKHCL_MDCMIABCOBG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PEJCCBOKHCL_MDCMIABCOBG_TypeDefinitionIndex = 72584;

struct alignas(8) PEJCCBOKHCL_MDCMIABCOBG
{
	::EKBABGJMHHF* CEPDOEIBGGF; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::EPJAODADCEA* GDCKOIIAJPF; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::PEJCCBOKHCL* KLHPEBKNIFB; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48
	::FPODAIHJDDC KJOFICDCOOD; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_MDCMIABCOBG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_MDCMIABCOBG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
