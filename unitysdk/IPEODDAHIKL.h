#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IPHCMHKIFNO;
class NMOPFLLBCKM;

#define IPEODDAHIKL_HDOADHKAHLI_OFFSET UNITYSDK_OFFSET(0x13826150)
#define IPEODDAHIKL__CTOR_OFFSET UNITYSDK_OFFSET(0x13826140)

inline static constexpr unsigned int IPEODDAHIKL_TypeDefinitionIndex = 52869;

class IPEODDAHIKL : public ::System::Object
{
public:
	::IPHCMHKIFNO* MKOMFJIBKMK; // 0x10

	::System::Void _ctor(::IPHCMHKIFNO* MKOMFJIBKMK)
	{
		return ((::System::Void(*)(::PVOID, ::IPHCMHKIFNO*))((::PBYTE)hIl2Cpp + IPEODDAHIKL__CTOR_OFFSET))(this, MKOMFJIBKMK);
	}

	::System::Void HDOADHKAHLI(::NMOPFLLBCKM* KAPJKMLIPFK)
	{
		return ((::System::Void(*)(::PVOID, ::NMOPFLLBCKM*))((::PBYTE)hIl2Cpp + IPEODDAHIKL_HDOADHKAHLI_OFFSET))(this, KAPJKMLIPFK);
	}
};
