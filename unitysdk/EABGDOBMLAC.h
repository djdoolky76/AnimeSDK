#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define EABGDOBMLAC_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8F8700)

inline static constexpr unsigned int EABGDOBMLAC_TypeDefinitionIndex = 94331;

struct alignas(4) EABGDOBMLAC
{
	::System::UInt32 HDGIELLOOEF; // 0x10
	::System::Int32 LEHABHCOMGH; // 0x14

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABGDOBMLAC_JGGHNLBNKHA_OFFSET))(this);
	}
};
