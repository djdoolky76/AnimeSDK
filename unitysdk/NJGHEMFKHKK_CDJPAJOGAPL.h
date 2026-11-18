#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NJGHEMFKHKK;
class NJGHEMFKHKK_LFFMIAIMGAG;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Renderer; }

#define NJGHEMFKHKK_CDJPAJOGAPL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x590240)
#define NJGHEMFKHKK_CDJPAJOGAPL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NJGHEMFKHKK_CDJPAJOGAPL_TypeDefinitionIndex = 71649;

struct alignas(8) NJGHEMFKHKK_CDJPAJOGAPL
{
	::System::Action* JLMLJIMBKKP; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x28
	::NJGHEMFKHKK_LFFMIAIMGAG* PGDOJBDJBOL; // 0x30
	::Il2CppArray<::UnityEngine::Renderer*>* AEPONOJONAA; // 0x38
	::System::Action* NJGPPJPKIFC; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x48
	::NJGHEMFKHKK* KLHPEBKNIFB; // 0x58
	::System::Single KNPCFLDNNJO; // 0x60
	::System::Single PALKJEELJHL; // 0x64
	::System::Int32 LFNDLLPDDPF; // 0x68
	::System::Boolean OKKALHDMJIO; // 0x6C
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_CDJPAJOGAPL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NJGHEMFKHKK_CDJPAJOGAPL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
