#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GPPMPHICDEA_AMFBAOPFMAA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x742390)
#define GPPMPHICDEA_AMFBAOPFMAA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int GPPMPHICDEA_AMFBAOPFMAA_TypeDefinitionIndex = 42683;

struct alignas(8) GPPMPHICDEA_AMFBAOPFMAA
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x10
	::System::Action_1<::System::String*>* ODCOCLLDHPG; // 0x30
	::System::Object* IELMICFKAAI; // 0x38
	::System::Byte _padding0[0x10];
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_AMFBAOPFMAA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_AMFBAOPFMAA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
