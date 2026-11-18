#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class MNBFJDJGPME;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MNBFJDJGPME_KADEFGEEFJF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6AD380)
#define MNBFJDJGPME_KADEFGEEFJF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MNBFJDJGPME_KADEFGEEFJF_TypeDefinitionIndex = 77713;

struct alignas(8) MNBFJDJGPME_KADEFGEEFJF
{
	::MNBFJDJGPME* KLHPEBKNIFB; // 0x10
	::System::Object* IELMICFKAAI; // 0x18
	::System::Byte _padding0[0x8];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38
	::MoleMole::HollowChessboard::HollowCell LOBIEHJCKGA; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBFJDJGPME_KADEFGEEFJF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MNBFJDJGPME_KADEFGEEFJF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
