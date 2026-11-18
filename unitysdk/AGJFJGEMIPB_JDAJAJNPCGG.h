#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGBNLCNGFON.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AGJFJGEMIPB_JDAJAJNPCGG_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x6B8E10)
#define AGJFJGEMIPB_JDAJAJNPCGG_LINBOENOODE_OFFSET UNITYSDK_OFFSET(0x6B8DC0)
#define AGJFJGEMIPB_JDAJAJNPCGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6B8DB0)

inline static constexpr unsigned int AGJFJGEMIPB_JDAJAJNPCGG_TypeDefinitionIndex = 91423;

struct alignas(8) AGJFJGEMIPB_JDAJAJNPCGG
{
	::System::UInt32 BKLGNCBNEGM; // 0x10
	::System::UInt32 MIJJBPIGJNJ; // 0x14
	::System::String* DNPDCNPMMJN; // 0x18
	::IGBNLCNGFON GLJPAABDGPB; // 0x20

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_JDAJAJNPCGG_TOSTRING_OFFSET))(this);
	}

	::System::Boolean LINBOENOODE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_JDAJAJNPCGG_LINBOENOODE_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB_JDAJAJNPCGG_DPIHOJBBGLA_OFFSET))(this);
	}
};
