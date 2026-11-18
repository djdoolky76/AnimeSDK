#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class MOHMFDKOJJH;
namespace System { template <typename T> class WeakReference_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CIKPDFLLFJD_MNJKJDDMHAD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E9FF0)
#define CIKPDFLLFJD_MNJKJDDMHAD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CIKPDFLLFJD_MNJKJDDMHAD_TypeDefinitionIndex = 44161;

struct alignas(8) CIKPDFLLFJD_MNJKJDDMHAD
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x20
	::System::WeakReference_1<::MOHMFDKOJJH*>* FGADDIJOOBH; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKPDFLLFJD_MNJKJDDMHAD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CIKPDFLLFJD_MNJKJDDMHAD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
