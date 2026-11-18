#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class BPCFCONNDCI;
class OIOIGAPDOHM;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OIOIGAPDOHM_JNJLFCFCFNK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7CB6F0)
#define OIOIGAPDOHM_JNJLFCFCFNK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int OIOIGAPDOHM_JNJLFCFCFNK_TypeDefinitionIndex = 69480;

struct alignas(8) OIOIGAPDOHM_JNJLFCFCFNK
{
	::OIOIGAPDOHM* KLHPEBKNIFB; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Collections::Generic::List_1<::BPCFCONNDCI*>* OBBIDCFPNMH; // 0x48
	::System::Int32 DMLKNCPMMPB; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOIGAPDOHM_JNJLFCFCFNK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OIOIGAPDOHM_JNJLFCFCFNK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
