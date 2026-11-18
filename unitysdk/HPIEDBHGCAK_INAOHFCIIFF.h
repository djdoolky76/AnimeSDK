#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/ValueType.h"

class HPIEDBHGCAK_LAMMJDBCNMF;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HPIEDBHGCAK_INAOHFCIIFF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x724F50)
#define HPIEDBHGCAK_INAOHFCIIFF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HPIEDBHGCAK_INAOHFCIIFF_TypeDefinitionIndex = 41645;

struct alignas(8) HPIEDBHGCAK_INAOHFCIIFF
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Foundation::AssetPath CEKNHIDPNNA; // 0x20
	::Foundation::AssetRequestHandle HFALPLADIOL; // 0x30
	::HPIEDBHGCAK_LAMMJDBCNMF* PGDOJBDJBOL; // 0x50
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::String*> ECODFICGLGM; // 0x58
	::System::Byte _padding0[0x10];
	::System::Int32 MDPILDGFNHN; // 0x70
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter KIFJPEHBMCP; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_INAOHFCIIFF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_INAOHFCIIFF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
