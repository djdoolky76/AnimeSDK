#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class BLCIDFMMHIL;
namespace System { class String; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FMemberInteractionArgs_TypeDefinitionIndex = 59781;

	struct alignas(8) FMemberInteractionArgs
	{
		::System::String* InteractName; // 0x10
		::System::Int32 ConfigId; // 0x18
		::System::Single RequiredInputHoldTime; // 0x1C
		::System::Single CurrentInputHoldTime; // 0x20
		::System::Byte _padding0[0x4];
		::BLCIDFMMHIL* Instance; // 0x28
	};
}
