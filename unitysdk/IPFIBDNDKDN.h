#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

#define IPFIBDNDKDN_MANDKEJBMMC_OFFSET UNITYSDK_OFFSET(0x14202C60)
#define IPFIBDNDKDN_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x14202A10)
#define IPFIBDNDKDN__CTOR_OFFSET UNITYSDK_OFFSET(0x14202C10)

inline static constexpr unsigned int IPFIBDNDKDN_TypeDefinitionIndex = 65105;

class IPFIBDNDKDN : public ::OAOOLPCNHKA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFIBDNDKDN__CTOR_OFFSET))(this);
	}

	::System::Void PostSimulationUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFIBDNDKDN_POSTSIMULATIONUPDATE_OFFSET))(this);
	}

	::System::Void MANDKEJBMMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFIBDNDKDN_MANDKEJBMMC_OFFSET))(this);
	}
};
