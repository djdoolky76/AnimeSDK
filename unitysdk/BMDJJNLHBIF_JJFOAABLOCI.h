#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class BDPKPPIGJPE;
class BMDJJNLHBIF_ELGCGCFGHJF;

#define BMDJJNLHBIF_JJFOAABLOCI_FKMMLJMHGDG_OFFSET UNITYSDK_OFFSET(0x128B3080)
#define BMDJJNLHBIF_JJFOAABLOCI__CTOR_OFFSET UNITYSDK_OFFSET(0x128B3070)

inline static constexpr unsigned int BMDJJNLHBIF_JJFOAABLOCI_TypeDefinitionIndex = 75421;

class BMDJJNLHBIF_JJFOAABLOCI : public ::System::Object
{
public:
	::BMDJJNLHBIF_ELGCGCFGHJF* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_JJFOAABLOCI__CTOR_OFFSET))(this);
	}

	::System::Void FKMMLJMHGDG(::BDPKPPIGJPE* MFKJJDHKAAP)
	{
		return ((::System::Void(*)(::PVOID, ::BDPKPPIGJPE*))((::PBYTE)hIl2Cpp + BMDJJNLHBIF_JJFOAABLOCI_FKMMLJMHGDG_OFFSET))(this, MFKJJDHKAAP);
	}
};
