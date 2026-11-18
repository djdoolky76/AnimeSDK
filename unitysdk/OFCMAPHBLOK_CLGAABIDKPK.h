#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class OFCMAPHBLOK;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define OFCMAPHBLOK_CLGAABIDKPK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79F650)
#define OFCMAPHBLOK_CLGAABIDKPK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int OFCMAPHBLOK_CLGAABIDKPK_TypeDefinitionIndex = 59941;

struct alignas(8) OFCMAPHBLOK_CLGAABIDKPK
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x10
	::System::Object* IELMICFKAAI; // 0x30
	::System::Byte _padding0[0x8];
	::System::Action* EJGDHCIBCJH; // 0x40
	::OFCMAPHBLOK* KLHPEBKNIFB; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCMAPHBLOK_CLGAABIDKPK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OFCMAPHBLOK_CLGAABIDKPK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
