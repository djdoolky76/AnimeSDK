#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIBaseController; }

#define GGNCCKFEDOC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x743A10)
#define GGNCCKFEDOC__CTOR_OFFSET UNITYSDK_OFFSET(0x743990)

inline static constexpr unsigned int GGNCCKFEDOC_TypeDefinitionIndex = 46215;

struct alignas(8) GGNCCKFEDOC
{
	::MoleMole::UIBaseController* DCLGMFLNFNG; // 0x10

	::System::Void _ctor(::MoleMole::UIBaseController* AEJBCMBCDJE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + GGNCCKFEDOC__CTOR_OFFSET))(this, AEJBCMBCDJE);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNCCKFEDOC_DISPOSE_OFFSET))(this);
	}
};
