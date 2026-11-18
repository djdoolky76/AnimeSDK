#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class GNAODFNNMAA;
class GNAODFNNMAA_JFDIDLEAMNJ;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GNAODFNNMAA_ENKDMJGDNJK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x748980)
#define GNAODFNNMAA_ENKDMJGDNJK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GNAODFNNMAA_ENKDMJGDNJK_TypeDefinitionIndex = 79308;

struct alignas(8) GNAODFNNMAA_ENKDMJGDNJK
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Threading::CancellationToken AMAKMAPPHIB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::GNAODFNNMAA* KLHPEBKNIFB; // 0x38
	::GNAODFNNMAA_JFDIDLEAMNJ* PGDOJBDJBOL; // 0x40
	::System::Int32 HNLOLOCHCKJ; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAODFNNMAA_ENKDMJGDNJK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GNAODFNNMAA_ENKDMJGDNJK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
