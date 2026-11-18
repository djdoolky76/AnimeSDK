#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/ValueType.h"

class AENICMHEIBH;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AENICMHEIBH_PODEAAMNJDP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B8D20)
#define AENICMHEIBH_PODEAAMNJDP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AENICMHEIBH_PODEAAMNJDP_TypeDefinitionIndex = 85668;

struct alignas(8) AENICMHEIBH_PODEAAMNJDP
{
	::AENICMHEIBH* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> ECODFICGLGM; // 0x18
	::System::Byte _padding0[0x10];
	::System::Object* IELMICFKAAI; // 0x30
	::System::Byte _padding1[0x10];
	::System::Int32 DMBMOMEKJFO; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C
	::System::Boolean DOJJKHEEHEA; // 0x50
	::System::Boolean NFAPOKKDAEA; // 0x51
	::System::Byte _padding2[0x2];
	::System::Int32 EJFGMAHJMHK; // 0x54
	::System::Int32 LEHABHCOMGH; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENICMHEIBH_PODEAAMNJDP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AENICMHEIBH_PODEAAMNJDP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
