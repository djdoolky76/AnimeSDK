#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class OCGDICIMEHF;
class ReplayChangeEvent;
class ReplayFullData;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OCGDICIMEHF_KNJMEIMGAKH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x862610)
#define OCGDICIMEHF_KNJMEIMGAKH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OCGDICIMEHF_KNJMEIMGAKH_TypeDefinitionIndex = 34713;

struct alignas(8) OCGDICIMEHF_KNJMEIMGAKH
{
	::ReplayFullData* LJBPECKCCEA; // 0x10
	::OCGDICIMEHF* KLHPEBKNIFB; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::System::Collections::Generic::IEnumerator_1<::ReplayChangeEvent*>* CNCDBBAMLPL; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x38
	::ReplayChangeEvent* EBBFFCHBLLE; // 0x40
	::System::Single KBBGBHBIGEP; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C
	::System::Single OMOFDPCBGPO; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGDICIMEHF_KNJMEIMGAKH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OCGDICIMEHF_KNJMEIMGAKH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
