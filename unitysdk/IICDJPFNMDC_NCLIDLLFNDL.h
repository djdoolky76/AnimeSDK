#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/ILMKONAJBGC_KOHIDGNLNLB.h"
#include "unitysdk/System/ValueType.h"

class GLAGJHKADAN;
class IICDJPFNMDC;
class IICDJPFNMDC_GCKOJLCEIGL;
class IICDJPFNMDC_IPIAEMFHLHK;
class LDGMGGGOBHC;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IICDJPFNMDC_NCLIDLLFNDL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5ED210)
#define IICDJPFNMDC_NCLIDLLFNDL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IICDJPFNMDC_NCLIDLLFNDL_TypeDefinitionIndex = 92152;

struct alignas(8) IICDJPFNMDC_NCLIDLLFNDL
{
	::System::Collections::Generic::IEnumerator_1<::GLAGJHKADAN*>* CNCDBBAMLPL; // 0x10
	::IICDJPFNMDC* KLHPEBKNIFB; // 0x18
	::GLAGJHKADAN* DLNILDCHNIC; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::System::Collections::Generic::List_1<::LDGMGGGOBHC*>* INOHLJPNMPH; // 0x38
	::IICDJPFNMDC_GCKOJLCEIGL* PGDOJBDJBOL; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x48
	::IICDJPFNMDC_IPIAEMFHLHK* MADPMCLFHKA; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x60
	::ILMKONAJBGC_KOHIDGNLNLB PLGNFGMOJOH; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICDJPFNMDC_NCLIDLLFNDL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IICDJPFNMDC_NCLIDLLFNDL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
