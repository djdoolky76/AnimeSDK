#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AENICMHEIBH_GJCEGBMILOO.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class AENICMHEIBH;
class AENICMHEIBH_FLKFDLFNDHA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AENICMHEIBH_HMJFMNGOHGA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C0A10)
#define AENICMHEIBH_HMJFMNGOHGA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AENICMHEIBH_HMJFMNGOHGA_TypeDefinitionIndex = 85670;

struct alignas(8) AENICMHEIBH_HMJFMNGOHGA
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::AENICMHEIBH_FLKFDLFNDHA* PGDOJBDJBOL; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::AENICMHEIBH_GJCEGBMILOO PEOJPJEPOBC; // 0x38
	::AENICMHEIBH* KLHPEBKNIFB; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_HMJFMNGOHGA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AENICMHEIBH_HMJFMNGOHGA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
