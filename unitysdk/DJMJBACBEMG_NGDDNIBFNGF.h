#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class DJMJBACBEMG;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DJMJBACBEMG_NGDDNIBFNGF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x705D00)
#define DJMJBACBEMG_NGDDNIBFNGF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DJMJBACBEMG_NGDDNIBFNGF_TypeDefinitionIndex = 52960;

struct alignas(8) DJMJBACBEMG_NGDDNIBFNGF
{
	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* PMFNJKIAOEE; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::DJMJBACBEMG* KLHPEBKNIFB; // 0x28
	::Foundation::ViewObject::ViewObjectHandle LIHJAJEIIFL; // 0x30
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMJBACBEMG_NGDDNIBFNGF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DJMJBACBEMG_NGDDNIBFNGF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
