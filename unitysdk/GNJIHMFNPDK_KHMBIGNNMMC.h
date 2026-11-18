#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JMIGPHLOLAJ;
class NCJJPHJODFN;

#define GNJIHMFNPDK_KHMBIGNNMMC_HJKLIGNICOM_OFFSET UNITYSDK_OFFSET(0x14D06040)
#define GNJIHMFNPDK_KHMBIGNNMMC__CTOR_OFFSET UNITYSDK_OFFSET(0x14D06030)

inline static constexpr unsigned int GNJIHMFNPDK_KHMBIGNNMMC_TypeDefinitionIndex = 43844;

class GNJIHMFNPDK_KHMBIGNNMMC : public ::System::Object
{
public:
	::NCJJPHJODFN* LJBPECKCCEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_KHMBIGNNMMC__CTOR_OFFSET))(this);
	}

	::System::Void HJKLIGNICOM(::JMIGPHLOLAJ* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::JMIGPHLOLAJ*))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_KHMBIGNNMMC_HJKLIGNICOM_OFFSET))(this, HBNBIBADGNH);
	}
};
