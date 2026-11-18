#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class BDPKPPIGJPE;
class BMDJJNLHBIF_BAEFJCLFLGI;

#define BMDJJNLHBIF_HOLFCEKIJMA_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x128B2DC0)
#define BMDJJNLHBIF_HOLFCEKIJMA__CTOR_OFFSET UNITYSDK_OFFSET(0x128B2DB0)

inline static constexpr unsigned int BMDJJNLHBIF_HOLFCEKIJMA_TypeDefinitionIndex = 75422;

class BMDJJNLHBIF_HOLFCEKIJMA : public ::System::Object
{
public:
	::BMDJJNLHBIF_BAEFJCLFLGI* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_HOLFCEKIJMA__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::BDPKPPIGJPE* MFKJJDHKAAP)
	{
		return ((::System::Void(*)(::PVOID, ::BDPKPPIGJPE*))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_HOLFCEKIJMA_OKKMJKOAIKG_OFFSET))(this, MFKJJDHKAAP);
	}
};
