#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAEIKLKGGDM.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AGDJEFKDGNK_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x85C990)

inline static constexpr unsigned int AGDJEFKDGNK_TypeDefinitionIndex = 93755;

struct alignas(4) AGDJEFKDGNK
{
	::IAEIKLKGGDM MFNHFCDJEAA; // 0x10
	::IAEIKLKGGDM CHFEDONOMMG; // 0x14

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDJEFKDGNK_JGGHNLBNKHA_OFFSET))(this);
	}
};
