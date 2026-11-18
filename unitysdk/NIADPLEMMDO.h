#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_EventType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NIADPLEMMDO_GIPECNMEEPB_OFFSET UNITYSDK_OFFSET(0x595CC0)

inline static constexpr unsigned int NIADPLEMMDO_TypeDefinitionIndex = 58887;

struct alignas(8) NIADPLEMMDO
{
	::MoleMole::AbyssS2_EventType KAMJLKGLFDB; // 0x10
	::System::Int32 FINKINNFIFK; // 0x14
	::System::String* ANDHOLHEHME; // 0x18

	::System::Boolean GIPECNMEEPB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIADPLEMMDO_GIPECNMEEPB_OFFSET))(this);
	}
};
