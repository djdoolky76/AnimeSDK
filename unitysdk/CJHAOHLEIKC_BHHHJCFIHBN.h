#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class CJHAOHLEIKC;
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CJHAOHLEIKC_BHHHJCFIHBN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7012D0)
#define CJHAOHLEIKC_BHHHJCFIHBN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int CJHAOHLEIKC_BHHHJCFIHBN_TypeDefinitionIndex = 86483;

struct alignas(8) CJHAOHLEIKC_BHHHJCFIHBN
{
	::System::Net::IPEndPoint* EJMBCFNBCJH; // 0x10
	::Il2CppArray<::System::Net::IPAddress*>* GHANCJDIDBC; // 0x18
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x20
	::System::Byte _padding0[0x10];
	::CJHAOHLEIKC* KLHPEBKNIFB; // 0x38
	::System::Runtime::CompilerServices::TaskAwaiter IELMICFKAAI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48
	::System::Int32 CNCDBBAMLPL; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHAOHLEIKC_BHHHJCFIHBN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CJHAOHLEIKC_BHHHJCFIHBN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
