#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HMENNFHKEOE_BKAIFFKFOMP_EGCPIIEMCHL_OFFSET UNITYSDK_OFFSET(0x18196D90)
#define HMENNFHKEOE_BKAIFFKFOMP__CTOR_OFFSET UNITYSDK_OFFSET(0x18196D80)

inline static constexpr unsigned int HMENNFHKEOE_BKAIFFKFOMP_TypeDefinitionIndex = 53328;

class HMENNFHKEOE_BKAIFFKFOMP : public ::System::Object
{
public:
	::System::String* AAPLFHLLIII; // 0x10
	::System::String* ELNJACGAJFK; // 0x18
	::System::Boolean GJIIJDNALME; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_BKAIFFKFOMP__CTOR_OFFSET))(this);
	}

	::System::Void EGCPIIEMCHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_BKAIFFKFOMP_EGCPIIEMCHL_OFFSET))(this);
	}
};
