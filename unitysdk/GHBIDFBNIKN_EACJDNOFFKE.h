#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class CCGKLCKJFPH;
class FPKMCDJIKEB;
class GHBIDFBNIKN;
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GHBIDFBNIKN_EACJDNOFFKE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x65FD60)
#define GHBIDFBNIKN_EACJDNOFFKE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GHBIDFBNIKN_EACJDNOFFKE_TypeDefinitionIndex = 47303;

struct alignas(8) GHBIDFBNIKN_EACJDNOFFKE
{
	::System::String* INHDAAAMAAL; // 0x10
	::GHBIDFBNIKN* KLHPEBKNIFB; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::CCGKLCKJFPH*> ECODFICGLGM; // 0x20
	::System::Byte _padding0[0x10];
	::FPKMCDJIKEB* KCDGPMPEPBC; // 0x38
	::System::Object* KIFJPEHBMCP; // 0x40
	::System::Byte _padding1[0x10];
	::System::Int32 MDPILDGFNHN; // 0x58
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBIDFBNIKN_EACJDNOFFKE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GHBIDFBNIKN_EACJDNOFFKE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
