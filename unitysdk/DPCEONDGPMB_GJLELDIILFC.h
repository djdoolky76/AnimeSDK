#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class GNCLMODKIHG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DPCEONDGPMB_GJLELDIILFC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x723030)
#define DPCEONDGPMB_GJLELDIILFC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DPCEONDGPMB_GJLELDIILFC_TypeDefinitionIndex = 91687;

struct alignas(8) DPCEONDGPMB_GJLELDIILFC
{
	::System::Collections::Generic::List_1<::GNCLMODKIHG*>* NMGMDNMIMEL; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> ECODFICGLGM; // 0x18
	::System::Byte _padding0[0x18];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Boolean BCMKGCFHHDL; // 0x48
	::System::Byte _padding1[0x3];
	::System::Int32 MDPILDGFNHN; // 0x4C
	::System::Single HGFNPCDHAEM; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCEONDGPMB_GJLELDIILFC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DPCEONDGPMB_GJLELDIILFC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
