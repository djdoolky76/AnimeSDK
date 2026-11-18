#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class ALHNDPMOFNF;
class ALHNDPMOFNF_NHDKEMOJFCD;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animation; }

#define ALHNDPMOFNF_OBIHOKBOBPG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F2090)
#define ALHNDPMOFNF_OBIHOKBOBPG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ALHNDPMOFNF_OBIHOKBOBPG_TypeDefinitionIndex = 86733;

struct alignas(8) ALHNDPMOFNF_OBIHOKBOBPG
{
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x10
	::ALHNDPMOFNF_NHDKEMOJFCD* FFNKDGGHBPP; // 0x18
	::System::Collections::Generic::List_1<::System::Object*>* HHGPCHFNPCJ; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::ALHNDPMOFNF* KLHPEBKNIFB; // 0x38
	::UnityEngine::Animation* GPKAMNPIKOD; // 0x40
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x48
	::System::Int32 EMAIAAIAGPP; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_OBIHOKBOBPG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_OBIHOKBOBPG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
