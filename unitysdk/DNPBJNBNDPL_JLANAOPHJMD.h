#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DNPBJNBNDPL_MPBGCGBFCMM;
class PPAAHJMDPAO;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DNPBJNBNDPL_JLANAOPHJMD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x740E00)
#define DNPBJNBNDPL_JLANAOPHJMD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DNPBJNBNDPL_JLANAOPHJMD_TypeDefinitionIndex = 80427;

struct alignas(8) DNPBJNBNDPL_JLANAOPHJMD
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x20
	::System::Byte _padding0[0x10];
	::PPAAHJMDPAO* HHHNJIMDFOG; // 0x38
	::DNPBJNBNDPL_MPBGCGBFCMM* PGDOJBDJBOL; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* IGAAKDOIPNN; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50
	::System::Int32 KHCOCCKOFHI; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPBJNBNDPL_JLANAOPHJMD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DNPBJNBNDPL_JLANAOPHJMD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
