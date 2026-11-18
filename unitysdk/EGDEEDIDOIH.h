#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define EGDEEDIDOIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x633DB0)
#define EGDEEDIDOIH__CTOR_OFFSET UNITYSDK_OFFSET(0x633D80)

inline static constexpr unsigned int EGDEEDIDOIH_TypeDefinitionIndex = 48754;

struct alignas(8) EGDEEDIDOIH
{
	::System::Action* ONJLBPLOLGE; // 0x10

	::System::Void _ctor(::System::Action* EPKKNJMIADC, ::System::Action* OGDNFIIBKIK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + EGDEEDIDOIH__CTOR_OFFSET))(this, EPKKNJMIADC, OGDNFIIBKIK);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDEEDIDOIH_DISPOSE_OFFSET))(this);
	}
};
