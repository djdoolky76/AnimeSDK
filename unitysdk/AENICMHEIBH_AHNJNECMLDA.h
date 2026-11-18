#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class AENICMHEIBH;
class AENICMHEIBH_HJDCPFCKBAN;
class KFGGFDDILAG;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AENICMHEIBH_AHNJNECMLDA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E0B60)
#define AENICMHEIBH_AHNJNECMLDA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AENICMHEIBH_AHNJNECMLDA_TypeDefinitionIndex = 85666;

struct alignas(8) AENICMHEIBH_AHNJNECMLDA
{
	::KFGGFDDILAG* BCGBDFLEKEO; // 0x10
	::AENICMHEIBH_HJDCPFCKBAN* PGDOJBDJBOL; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> ECODFICGLGM; // 0x20
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::AENICMHEIBH* KLHPEBKNIFB; // 0x48
	::System::Int32 CIAOHILNDLC; // 0x50
	::System::Boolean DOJJKHEEHEA; // 0x54
	::System::Byte _padding1[0x3];
	::System::Int32 MDPILDGFNHN; // 0x58
	::System::Int32 ECKMALONJCL; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_AHNJNECMLDA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AENICMHEIBH_AHNJNECMLDA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
