#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class KCCDJGBJGLD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KKIKLJAKAPH_OMDFKJMJOEO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AB1C0)
#define KKIKLJAKAPH_OMDFKJMJOEO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KKIKLJAKAPH_OMDFKJMJOEO_TypeDefinitionIndex = 55564;

struct alignas(8) KKIKLJAKAPH_OMDFKJMJOEO
{
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* INAFPBGPAMP; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::KCCDJGBJGLD* GGJDLGPLBKP; // 0x48
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x50
	::System::String* INHDAAAMAAL; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_OMDFKJMJOEO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KKIKLJAKAPH_OMDFKJMJOEO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
