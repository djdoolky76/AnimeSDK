#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MKBLJBDJHFE.h"
#include "unitysdk/System/ValueType.h"

class EFJMDEIBFHI;
class EFJMDEIBFHI_DAHMOKLPKNJ;
class FDOKNLPCNHO;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EFJMDEIBFHI_BIDIFAMJFGL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x602590)
#define EFJMDEIBFHI_BIDIFAMJFGL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EFJMDEIBFHI_BIDIFAMJFGL_TypeDefinitionIndex = 82256;

struct alignas(8) EFJMDEIBFHI_BIDIFAMJFGL
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::MKBLJBDJHFE> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::FDOKNLPCNHO* BPGPPMDMKEK; // 0x28
	::EFJMDEIBFHI* KLHPEBKNIFB; // 0x30
	::System::Object* IELMICFKAAI; // 0x38
	::System::Byte _padding1[0x8];
	::Cysharp::Threading::Tasks::UniTask_Awaiter KIFJPEHBMCP; // 0x48
	::EFJMDEIBFHI_DAHMOKLPKNJ* PGDOJBDJBOL; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJMDEIBFHI_BIDIFAMJFGL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EFJMDEIBFHI_BIDIFAMJFGL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
