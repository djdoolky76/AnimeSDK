#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class ALBLJPPBPHC;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ALBLJPPBPHC_AHPKILIHNBF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x730D00)
#define ALBLJPPBPHC_AHPKILIHNBF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ALBLJPPBPHC_AHPKILIHNBF_TypeDefinitionIndex = 45839;

struct alignas(8) ALBLJPPBPHC_AHPKILIHNBF
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::System::Object* IELMICFKAAI; // 0x20
	::System::Byte _padding0[0x8];
	::ALBLJPPBPHC* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Int32 NCFIKONEBGH; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBLJPPBPHC_AHPKILIHNBF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ALBLJPPBPHC_AHPKILIHNBF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
