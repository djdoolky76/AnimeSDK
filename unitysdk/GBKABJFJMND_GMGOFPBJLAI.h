#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class FDOKNLPCNHO;
class GBKABJFJMND;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GBKABJFJMND_GMGOFPBJLAI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6C2D00)
#define GBKABJFJMND_GMGOFPBJLAI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6C2D10)

inline static constexpr unsigned int GBKABJFJMND_GMGOFPBJLAI_TypeDefinitionIndex = 77395;

struct alignas(8) GBKABJFJMND_GMGOFPBJLAI
{
	::FDOKNLPCNHO* BPGPPMDMKEK; // 0x10
	::GBKABJFJMND* KLHPEBKNIFB; // 0x18
	::System::Object* IELMICFKAAI; // 0x20
	::System::Byte _padding0[0x8];
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKABJFJMND_GMGOFPBJLAI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GBKABJFJMND_GMGOFPBJLAI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
