#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class AODCNDCIDKF;
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AODCNDCIDKF_MGKBBEKGBHM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F2200)
#define AODCNDCIDKF_MGKBBEKGBHM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AODCNDCIDKF_MGKBBEKGBHM_TypeDefinitionIndex = 79617;

struct alignas(8) AODCNDCIDKF_MGKBBEKGBHM
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::String*> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::System::Object* IELMICFKAAI; // 0x28
	::System::Byte _padding1[0x10];
	::System::String* MCOHLHMKLIP; // 0x40
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x48
	::AODCNDCIDKF* KLHPEBKNIFB; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_MGKBBEKGBHM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AODCNDCIDKF_MGKBBEKGBHM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
