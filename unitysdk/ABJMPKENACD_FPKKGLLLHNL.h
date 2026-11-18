#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class ABJMPKENACD;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_FPKKGLLLHNL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E05A0)
#define ABJMPKENACD_FPKKGLLLHNL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_FPKKGLLLHNL_TypeDefinitionIndex = 88637;

struct alignas(8) ABJMPKENACD_FPKKGLLLHNL
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::ABJMPKENACD* KLHPEBKNIFB; // 0x30
	::System::Object* KIFJPEHBMCP; // 0x38
	::System::Byte _padding0[0x10];
	::System::Int32 MDPILDGFNHN; // 0x50
	::System::Int32 NPAKMAGBOCH; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_FPKKGLLLHNL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_FPKKGLLLHNL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
