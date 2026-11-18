#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define KNHBBMHBGHG__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int KNHBBMHBGHG_TypeDefinitionIndex = 51814;

struct alignas(8) KNHBBMHBGHG
{
	::System::String* JPLKKOHBBKC; // 0x10
	::System::String* EGNIEIAHPFH; // 0x18

	::System::Void _ctor(::System::String* OOONELGGOKM, ::System::String* EGNIEIAHPFH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KNHBBMHBGHG__CTOR_OFFSET))(this, OOONELGGOKM, EGNIEIAHPFH);
	}
};
