#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class CHFJLNEHAAF_KJPDLDFGKGJ;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CHFJLNEHAAF_KJPDLDFGKGJ_PLGLCLPFCIP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E9150)
#define CHFJLNEHAAF_KJPDLDFGKGJ_PLGLCLPFCIP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CHFJLNEHAAF_KJPDLDFGKGJ_PLGLCLPFCIP_TypeDefinitionIndex = 87350;

struct alignas(8) CHFJLNEHAAF_KJPDLDFGKGJ_PLGLCLPFCIP
{
	::CHFJLNEHAAF_KJPDLDFGKGJ* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::System::Object* IELMICFKAAI; // 0x28
	::System::Byte _padding0[0x10];
	::System::Boolean IAKJAPGHLPE; // 0x40
	::System::Byte _padding1[0x3];
	::System::Int32 MDPILDGFNHN; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_KJPDLDFGKGJ_PLGLCLPFCIP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_KJPDLDFGKGJ_PLGLCLPFCIP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
