#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FFBGEAKBACO;
class JDLHOLDHNOD;
class KLELCPBGJNI_ADBHCODBPGN;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KLELCPBGJNI_OFOOEHHPCOA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x71F5A0)
#define KLELCPBGJNI_OFOOEHHPCOA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KLELCPBGJNI_OFOOEHHPCOA_TypeDefinitionIndex = 74913;

struct alignas(8) KLELCPBGJNI_OFOOEHHPCOA
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::FFBGEAKBACO* EPCLEFBCLPA; // 0x20
	::KLELCPBGJNI_ADBHCODBPGN* PGDOJBDJBOL; // 0x28
	::JDLHOLDHNOD* NKMKJFCBBCK; // 0x30
	::System::String* JLOKAIAFOPP; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x40
	::System::Int32 EGBCGFDCDMO; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLELCPBGJNI_OFOOEHHPCOA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KLELCPBGJNI_OFOOEHHPCOA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
