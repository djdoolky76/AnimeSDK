#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EHDNKMELAII_CIDIFPBBCGK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A1690)
#define EHDNKMELAII_CIDIFPBBCGK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EHDNKMELAII_CIDIFPBBCGK_TypeDefinitionIndex = 71390;

struct alignas(8) EHDNKMELAII_CIDIFPBBCGK
{
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Object* IELMICFKAAI; // 0x18
	::System::Byte _padding0[0x8];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Int32 FNEAIJMIAFF; // 0x3C
	::System::Boolean JCNBPCKIJLL; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDNKMELAII_CIDIFPBBCGK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EHDNKMELAII_CIDIFPBBCGK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
