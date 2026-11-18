#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNLHFLFKGMP.h"
#include "unitysdk/OANCCFBNLHO.h"

class LMIHGLECLLA;

#define JAALJGGJKOL_CDCHMJCNGNG_OFFSET UNITYSDK_OFFSET(0x1E824230)
#define JAALJGGJKOL_DHGENMIPHDC_OFFSET UNITYSDK_OFFSET(0x1E824310)
#define JAALJGGJKOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E824300)

inline static constexpr unsigned int JAALJGGJKOL_TypeDefinitionIndex = 94684;

class JAALJGGJKOL : public ::KNLHFLFKGMP
{
public:
	::LMIHGLECLLA* BBAHNBHCMGC; // 0x68
	::OANCCFBNLHO OCOJFKMOKMK; // 0x70
	::System::UInt32 BHBDMEEFMPP; // 0x74
	::System::Boolean MLMCOMCMJOI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAALJGGJKOL__CTOR_OFFSET))(this);
	}

	::System::UInt32 CDCHMJCNGNG()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAALJGGJKOL_CDCHMJCNGNG_OFFSET))(this);
	}

	::System::UInt32 DHGENMIPHDC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAALJGGJKOL_DHGENMIPHDC_OFFSET))(this);
	}
};
