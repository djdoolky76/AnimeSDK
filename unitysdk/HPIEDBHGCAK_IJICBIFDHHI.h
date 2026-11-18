#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/ValueType.h"

class HPIEDBHGCAK_JDDADHAGFDB;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HPIEDBHGCAK_IJICBIFDHHI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5B4B30)
#define HPIEDBHGCAK_IJICBIFDHHI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HPIEDBHGCAK_IJICBIFDHHI_TypeDefinitionIndex = 41644;

struct alignas(8) HPIEDBHGCAK_IJICBIFDHHI
{
	::Foundation::AssetRequestHandle HFALPLADIOL; // 0x10
	::HPIEDBHGCAK_JDDADHAGFDB* PGDOJBDJBOL; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::String* CEKNHIDPNNA; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::String*> ECODFICGLGM; // 0x50
	::System::Byte _padding0[0x10];
	::System::Int32 MDPILDGFNHN; // 0x68
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter KIFJPEHBMCP; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_IJICBIFDHHI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HPIEDBHGCAK_IJICBIFDHHI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
