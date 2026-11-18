#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/ValueType.h"

class BOGFBHNIABA;
class LLLNCCPNOGA;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LLLNCCPNOGA_NCFDCHMACEJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F22A0)
#define LLLNCCPNOGA_NCFDCHMACEJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int LLLNCCPNOGA_NCFDCHMACEJ_TypeDefinitionIndex = 63645;

struct alignas(8) LLLNCCPNOGA_NCFDCHMACEJ
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x8];
	::LLLNCCPNOGA* KLHPEBKNIFB; // 0x20
	::BOGFBHNIABA* PLOONOKCMKH; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Int32> ECODFICGLGM; // 0x30
	::System::Byte _padding1[0x10];
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLNCCPNOGA_NCFDCHMACEJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LLLNCCPNOGA_NCFDCHMACEJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
