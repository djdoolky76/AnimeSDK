#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DFBKEIBIDFJ;
class IPHCMHKIFNO;

#define AFPBGMFCAFG_NPFDEEPGMBL_OFFSET UNITYSDK_OFFSET(0x14350850)
#define AFPBGMFCAFG__CTOR_OFFSET UNITYSDK_OFFSET(0x14350840)

inline static constexpr unsigned int AFPBGMFCAFG_TypeDefinitionIndex = 61275;

class AFPBGMFCAFG : public ::System::Object
{
public:
	::IPHCMHKIFNO* MKOMFJIBKMK; // 0x10
	::DFBKEIBIDFJ* OMBDOOOMGMI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPBGMFCAFG__CTOR_OFFSET))(this);
	}

	::System::Void NPFDEEPGMBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPBGMFCAFG_NPFDEEPGMBL_OFFSET))(this);
	}
};
