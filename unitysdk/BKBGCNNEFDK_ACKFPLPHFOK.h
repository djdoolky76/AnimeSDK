#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

class BKBGCNNEFDK;
class OAEFGCLEHHO;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define BKBGCNNEFDK_ACKFPLPHFOK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7CECD0)
#define BKBGCNNEFDK_ACKFPLPHFOK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int BKBGCNNEFDK_ACKFPLPHFOK_TypeDefinitionIndex = 77677;

struct alignas(8) BKBGCNNEFDK_ACKFPLPHFOK
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x10];
	::BKBGCNNEFDK* KLHPEBKNIFB; // 0x28
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::OAEFGCLEHHO*> ECODFICGLGM; // 0x38
	::System::Byte _padding1[0x10];
	::System::Collections::Generic::List_1<::System::UInt32>* JMIPOOEKMEJ; // 0x50
	::System::Threading::CancellationTokenRegistration GHANCJDIDBC; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBGCNNEFDK_ACKFPLPHFOK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + BKBGCNNEFDK_ACKFPLPHFOK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
