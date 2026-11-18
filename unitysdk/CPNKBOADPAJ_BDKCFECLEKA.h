#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class CPNKBOADPAJ_JPKGOADFNLA;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CPNKBOADPAJ_BDKCFECLEKA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7430E0)
#define CPNKBOADPAJ_BDKCFECLEKA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CPNKBOADPAJ_BDKCFECLEKA_TypeDefinitionIndex = 91822;

struct alignas(8) CPNKBOADPAJ_BDKCFECLEKA
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::String*> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::CPNKBOADPAJ_JPKGOADFNLA* PGDOJBDJBOL; // 0x38
	::System::String* CEKNHIDPNNA; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_BDKCFECLEKA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CPNKBOADPAJ_BDKCFECLEKA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
