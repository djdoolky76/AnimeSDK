#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class KCCDJGBJGLD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KDMOOELMMAP_FIHAGDLEHEH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AB410)
#define KDMOOELMMAP_FIHAGDLEHEH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KDMOOELMMAP_FIHAGDLEHEH_TypeDefinitionIndex = 76166;

struct alignas(8) KDMOOELMMAP_FIHAGDLEHEH
{
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* INAFPBGPAMP; // 0x20
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::KCCDJGBJGLD* PNPCNOKKODM; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x48
	::System::String* HKBLIAHMFKG; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58
	::System::Int32 LCHGINFEKCG; // 0x5C
	::System::Int32 AABHMLNEFDG; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOOELMMAP_FIHAGDLEHEH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KDMOOELMMAP_FIHAGDLEHEH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
