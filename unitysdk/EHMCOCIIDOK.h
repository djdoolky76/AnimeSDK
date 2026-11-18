#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class DKGMJNOADGM;

#define EHMCOCIIDOK_AIAHKHBIOHA_OFFSET UNITYSDK_OFFSET(0x741110)
#define EHMCOCIIDOK_ECFGCNBLHNJ_OFFSET UNITYSDK_OFFSET(0x741120)

inline static constexpr unsigned int EHMCOCIIDOK_TypeDefinitionIndex = 86654;

struct alignas(4) EHMCOCIIDOK
{
	// static const ::System::Int32 IBLBJGGABPC = -0x1; // 0x0
	::System::Int32 OCDIEGIGHAC; // 0x10
	::System::Int32 NGDIOELHELB; // 0x14
	::System::Int32 DFPGDNMMIHL; // 0x18
	::System::Int32 MOKOGNAFFIN; // 0x1C

	::DKGMJNOADGM* AIAHKHBIOHA()
	{
		return ((::DKGMJNOADGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMCOCIIDOK_AIAHKHBIOHA_OFFSET))(this);
	}

	::System::Boolean ECFGCNBLHNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMCOCIIDOK_ECFGCNBLHNJ_OFFSET))(this);
	}
};
