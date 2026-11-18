#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FAKDPOHEPJG;
class FAKDPOHEPJG_KNPHKHGOOOH;
class NOHGMPIMCEF;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NOHGMPIMCEF_EAINOFHHHIO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x630970)
#define NOHGMPIMCEF_EAINOFHHHIO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NOHGMPIMCEF_EAINOFHHHIO_TypeDefinitionIndex = 90746;

struct alignas(8) NOHGMPIMCEF_EAINOFHHHIO
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Action* MGAKJHJAGJI; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Object* KIFJPEHBMCP; // 0x30
	::System::Byte _padding0[0x8];
	::FAKDPOHEPJG_KNPHKHGOOOH* OFNJCDNPLFO; // 0x40
	::NOHGMPIMCEF* KLHPEBKNIFB; // 0x48
	::FAKDPOHEPJG* MOAGMFCDIPA; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58
	::System::Single FNIOPKPHDEH; // 0x5C
	::System::Single HPKJJFOBMJM; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_EAINOFHHHIO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_EAINOFHHHIO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
