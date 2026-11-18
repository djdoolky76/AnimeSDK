#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class ABJMPKENACD;
class ABNKJLHDDHJ;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_KDKDKAGIACJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B8D10)
#define ABJMPKENACD_KDKDKAGIACJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_KDKDKAGIACJ_TypeDefinitionIndex = 88622;

struct alignas(8) ABJMPKENACD_KDKDKAGIACJ
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x8];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::System::Object* KIFJPEHBMCP; // 0x30
	::System::Byte _padding1[0x10];
	::ABJMPKENACD* KLHPEBKNIFB; // 0x48
	::ABNKJLHDDHJ* JBGFGEOAOPM; // 0x50
	::Cysharp::Threading::Tasks::UniTask_Awaiter JBKEHEIINMM; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x68
	::System::Int32 NPAKMAGBOCH; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_KDKDKAGIACJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_KDKDKAGIACJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
