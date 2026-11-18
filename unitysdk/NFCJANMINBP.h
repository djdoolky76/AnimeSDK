#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBEPKELNDPC.h"
#include "unitysdk/KHOODDJHJIL.h"

#define NFCJANMINBP_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x11587B50)
#define NFCJANMINBP_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x11587B60)
#define NFCJANMINBP__CTOR_OFFSET UNITYSDK_OFFSET(0x11587BA0)

inline static constexpr unsigned int NFCJANMINBP_TypeDefinitionIndex = 86175;

class NFCJANMINBP : public ::KBEPKELNDPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJANMINBP__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJANMINBP_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCJANMINBP_KMMIPNMJILI_OFFSET))(this);
	}
};
