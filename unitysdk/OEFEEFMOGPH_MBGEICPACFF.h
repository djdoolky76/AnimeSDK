#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define OEFEEFMOGPH_MBGEICPACFF_FDMAIJJAEBE_OFFSET UNITYSDK_OFFSET(0xF17BD70)
#define OEFEEFMOGPH_MBGEICPACFF_GKBNMJDLDBL_OFFSET UNITYSDK_OFFSET(0xF17BD90)
#define OEFEEFMOGPH_MBGEICPACFF_GNCDDJFECOM_OFFSET UNITYSDK_OFFSET(0xF17BD80)
#define OEFEEFMOGPH_MBGEICPACFF_PEKDMIEMIFE_OFFSET UNITYSDK_OFFSET(0xF17BDA0)
#define OEFEEFMOGPH_MBGEICPACFF__CTOR_OFFSET UNITYSDK_OFFSET(0xF17BD60)

inline static constexpr unsigned int OEFEEFMOGPH_MBGEICPACFF_TypeDefinitionIndex = 49750;

class OEFEEFMOGPH_MBGEICPACFF : public ::System::Object
{
public:
	::System::Boolean DHKPOPPNMBI; // 0x10
	::System::Boolean MAKGAEONPKI; // 0x11
	::System::Boolean KAHFHIMHJGK; // 0x12
	::System::Boolean AAHHBIJADCM; // 0x13

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_MBGEICPACFF__CTOR_OFFSET))(this);
	}

	::System::Boolean FDMAIJJAEBE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_MBGEICPACFF_FDMAIJJAEBE_OFFSET))(this);
	}

	::System::Boolean GNCDDJFECOM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_MBGEICPACFF_GNCDDJFECOM_OFFSET))(this);
	}

	::System::Void GKBNMJDLDBL(::System::Boolean IGAAKDOIPNN, ::System::String* IMILJHBDOGJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_MBGEICPACFF_GKBNMJDLDBL_OFFSET))(this, IGAAKDOIPNN, IMILJHBDOGJ);
	}

	::System::Void PEKDMIEMIFE(::System::Boolean IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_MBGEICPACFF_PEKDMIEMIFE_OFFSET))(this, IGAAKDOIPNN);
	}
};
