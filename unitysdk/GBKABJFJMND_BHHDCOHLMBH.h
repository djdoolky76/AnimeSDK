#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNPPCHKLGML.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class FDOKNLPCNHO;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GBKABJFJMND_BHHDCOHLMBH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C5DB0)
#define GBKABJFJMND_BHHDCOHLMBH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int GBKABJFJMND_BHHDCOHLMBH_TypeDefinitionIndex = 77392;

struct alignas(8) GBKABJFJMND_BHHDCOHLMBH
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x10
	::FDOKNLPCNHO* BPGPPMDMKEK; // 0x30
	::System::Object* IELMICFKAAI; // 0x38
	::System::Byte _padding0[0x8];
	::PNPPCHKLGML EPBHBCMCMOK; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKABJFJMND_BHHDCOHLMBH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GBKABJFJMND_BHHDCOHLMBH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
