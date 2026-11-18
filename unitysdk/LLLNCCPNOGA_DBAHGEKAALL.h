#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/ValueType.h"

class BOGFBHNIABA;
class LLLNCCPNOGA;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LLLNCCPNOGA_DBAHGEKAALL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x749FA0)
#define LLLNCCPNOGA_DBAHGEKAALL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int LLLNCCPNOGA_DBAHGEKAALL_TypeDefinitionIndex = 63647;

struct alignas(8) LLLNCCPNOGA_DBAHGEKAALL
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x8];
	::LLLNCCPNOGA* KLHPEBKNIFB; // 0x20
	::System::Object* GHANCJDIDBC; // 0x28
	::System::Byte _padding1[0x10];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Int32> ECODFICGLGM; // 0x40
	::System::Byte _padding2[0x10];
	::BOGFBHNIABA* PLOONOKCMKH; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLNCCPNOGA_DBAHGEKAALL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LLLNCCPNOGA_DBAHGEKAALL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
