#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MGIBJDPOBEN_CLHOMFDCMMC_OFFSET UNITYSDK_OFFSET(0x1A64C670)
#define MGIBJDPOBEN_KACIEIBDAFI_OFFSET UNITYSDK_OFFSET(0x1A64C680)
#define MGIBJDPOBEN_OIKMMNPAOIP_OFFSET UNITYSDK_OFFSET(0x1A64C620)
#define MGIBJDPOBEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A64C610)

inline static constexpr unsigned int MGIBJDPOBEN_TypeDefinitionIndex = 80986;

class MGIBJDPOBEN : public ::System::Object
{
public:
	::System::Boolean _IKLFLLKHHFP_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIBJDPOBEN__CTOR_OFFSET))(this);
	}

	::System::Void OIKMMNPAOIP(::System::Boolean PCMHMKJCIFE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGIBJDPOBEN_OIKMMNPAOIP_OFFSET))(this, PCMHMKJCIFE);
	}

	::System::Void CLHOMFDCMMC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGIBJDPOBEN_CLHOMFDCMMC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean KACIEIBDAFI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIBJDPOBEN_KACIEIBDAFI_OFFSET))(this);
	}
};
