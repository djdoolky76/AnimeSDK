#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class IFFKIHMPGJK_AOPPMGDLCBN;
namespace System { class Action; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IFFKIHMPGJK_EEBMFGOAEFA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7759F0)
#define IFFKIHMPGJK_EEBMFGOAEFA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IFFKIHMPGJK_EEBMFGOAEFA_TypeDefinitionIndex = 66915;

struct alignas(8) IFFKIHMPGJK_EEBMFGOAEFA
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter KIFJPEHBMCP; // 0x10
	::System::String* FLBMLLIFHAB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Action* LJHAGGGJKLN; // 0x38
	::IFFKIHMPGJK_AOPPMGDLCBN* PGDOJBDJBOL; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_EEBMFGOAEFA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IFFKIHMPGJK_EEBMFGOAEFA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
