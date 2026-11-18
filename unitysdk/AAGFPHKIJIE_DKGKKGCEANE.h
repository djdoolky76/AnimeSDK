#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class AAGFPHKIJIE;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AAGFPHKIJIE_DKGKKGCEANE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7274B0)
#define AAGFPHKIJIE_DKGKKGCEANE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AAGFPHKIJIE_DKGKKGCEANE_TypeDefinitionIndex = 54168;

struct alignas(8) AAGFPHKIJIE_DKGKKGCEANE
{
	::System::Action* NGHPJIDBFGD; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::AAGFPHKIJIE* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x34

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGFPHKIJIE_DKGKKGCEANE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AAGFPHKIJIE_DKGKKGCEANE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
