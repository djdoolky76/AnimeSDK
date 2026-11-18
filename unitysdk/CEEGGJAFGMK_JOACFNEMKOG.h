#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class KKMKGGJLFFE;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CEEGGJAFGMK_JOACFNEMKOG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x759150)
#define CEEGGJAFGMK_JOACFNEMKOG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CEEGGJAFGMK_JOACFNEMKOG_TypeDefinitionIndex = 72413;

struct alignas(8) CEEGGJAFGMK_JOACFNEMKOG
{
	::System::Object* IELMICFKAAI; // 0x10
	::System::Byte _padding0[0x18];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Object*, ::KKMKGGJLFFE*>> ECODFICGLGM; // 0x30
	::System::Byte _padding1[0x18];
	::System::Collections::Generic::List_1<::System::UInt32>* DAOLPHKIGAE; // 0x50
	::System::Threading::CancellationToken CBJFKEAGLGD; // 0x58
	::System::Object* KIFJPEHBMCP; // 0x60
	::System::Byte _padding2[0x18];
	::System::Int32 MDPILDGFNHN; // 0x80

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEEGGJAFGMK_JOACFNEMKOG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CEEGGJAFGMK_JOACFNEMKOG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
