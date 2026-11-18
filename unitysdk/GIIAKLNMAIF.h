#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NFCKKOKHCDO.h"

#define GIIAKLNMAIF_FOJHFIBLLJO_OFFSET UNITYSDK_OFFSET(0x13DD9A20)
#define GIIAKLNMAIF_JOHLFFINADC_OFFSET UNITYSDK_OFFSET(0x13DD9A30)
#define GIIAKLNMAIF__CTOR_OFFSET UNITYSDK_OFFSET(0x13DD9A10)

inline static constexpr unsigned int GIIAKLNMAIF_TypeDefinitionIndex = 71045;

class GIIAKLNMAIF : public ::NFCKKOKHCDO
{
public:
	::Foundation::AssetPath _CAOGKGCIIFH_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIAKLNMAIF__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath FOJHFIBLLJO()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIAKLNMAIF_FOJHFIBLLJO_OFFSET))(this);
	}

	::System::Void JOHLFFINADC(::Foundation::AssetPath EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + GIIAKLNMAIF_JOHLFFINADC_OFFSET))(this, EGEGIMGMJHN);
	}
};
