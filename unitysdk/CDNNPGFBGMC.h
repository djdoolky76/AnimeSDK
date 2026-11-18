#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DFBKEIBIDFJ;
class ILNJKEHHFNG;
class IPHCMHKIFNO;

#define CDNNPGFBGMC_JJMJLBOIACC_OFFSET UNITYSDK_OFFSET(0x11538C60)
#define CDNNPGFBGMC__CTOR_OFFSET UNITYSDK_OFFSET(0x11538C50)

inline static constexpr unsigned int CDNNPGFBGMC_TypeDefinitionIndex = 87770;

class CDNNPGFBGMC : public ::System::Object
{
public:
	::IPHCMHKIFNO* MKOMFJIBKMK; // 0x10

	::System::Void _ctor(::IPHCMHKIFNO* MKOMFJIBKMK)
	{
		return ((::System::Void(*)(::PVOID, ::IPHCMHKIFNO*))((::PBYTE)hIl2Cpp + CDNNPGFBGMC__CTOR_OFFSET))(this, MKOMFJIBKMK);
	}

	::DFBKEIBIDFJ* JJMJLBOIACC(::ILNJKEHHFNG* DFMKILICPFB)
	{
		return ((::DFBKEIBIDFJ*(*)(::PVOID, ::ILNJKEHHFNG*))((::PBYTE)hIl2Cpp + CDNNPGFBGMC_JJMJLBOIACC_OFFSET))(this, DFMKILICPFB);
	}
};
