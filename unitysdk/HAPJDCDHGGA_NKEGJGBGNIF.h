#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HAPJDCDHGGA_NKEGJGBGNIF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7211F0)
#define HAPJDCDHGGA_NKEGJGBGNIF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HAPJDCDHGGA_NKEGJGBGNIF_TypeDefinitionIndex = 77847;

struct alignas(8) HAPJDCDHGGA_NKEGJGBGNIF
{
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x10
	::System::Object* GDAPBOPOHIG; // 0x18
	::System::Byte _padding0[0x8];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Object* IELMICFKAAI; // 0x38
	::System::Byte _padding1[0x10];
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAPJDCDHGGA_NKEGJGBGNIF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HAPJDCDHGGA_NKEGJGBGNIF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
