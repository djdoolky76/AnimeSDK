#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICOLOFOBLBC.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class OFCMAPHBLOK;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OFCMAPHBLOK_BBJLGOPBDDI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7183F0)
#define OFCMAPHBLOK_BBJLGOPBDDI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int OFCMAPHBLOK_BBJLGOPBDDI_TypeDefinitionIndex = 59940;

struct alignas(8) OFCMAPHBLOK_BBJLGOPBDDI
{
	::OFCMAPHBLOK* KLHPEBKNIFB; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x18
	::System::Object* IELMICFKAAI; // 0x38
	::System::Byte _padding0[0x8];
	::ICOLOFOBLBC NJPFAPHOGHP; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCMAPHBLOK_BBJLGOPBDDI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OFCMAPHBLOK_BBJLGOPBDDI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
