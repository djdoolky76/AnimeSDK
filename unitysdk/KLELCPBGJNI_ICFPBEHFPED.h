#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FFBGEAKBACO;
class IJAJBECLDOI;
class KLELCPBGJNI_KCEOCPNOPMN;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KLELCPBGJNI_ICFPBEHFPED_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F69E0)
#define KLELCPBGJNI_ICFPBEHFPED_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KLELCPBGJNI_ICFPBEHFPED_TypeDefinitionIndex = 74914;

struct alignas(8) KLELCPBGJNI_ICFPBEHFPED
{
	::IJAJBECLDOI* NKMKJFCBBCK; // 0x10
	::System::String* JLOKAIAFOPP; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::KLELCPBGJNI_KCEOCPNOPMN* PGDOJBDJBOL; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x38
	::FFBGEAKBACO* HFJJOLJFLNK; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLELCPBGJNI_ICFPBEHFPED_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KLELCPBGJNI_ICFPBEHFPED_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
