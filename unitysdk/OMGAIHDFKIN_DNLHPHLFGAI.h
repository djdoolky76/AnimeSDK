#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class OMGAIHDFKIN;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OMGAIHDFKIN_DNLHPHLFGAI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70A270)
#define OMGAIHDFKIN_DNLHPHLFGAI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OMGAIHDFKIN_DNLHPHLFGAI_TypeDefinitionIndex = 89330;

struct alignas(8) OMGAIHDFKIN_DNLHPHLFGAI
{
	::OMGAIHDFKIN* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x28
	::System::Byte _padding0[0x10];
	::System::Int32 MDPILDGFNHN; // 0x40
	::System::Boolean HAAJFAGFMEA; // 0x44
	::System::Byte _padding1[0x3];
	::System::Int32 KMMGKJPAOMF; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGAIHDFKIN_DNLHPHLFGAI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OMGAIHDFKIN_DNLHPHLFGAI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
