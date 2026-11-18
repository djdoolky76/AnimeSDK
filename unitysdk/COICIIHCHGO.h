#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

#define COICIIHCHGO_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x145DB670)
#define COICIIHCHGO_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x145DB700)
#define COICIIHCHGO_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x145DB590)
#define COICIIHCHGO__CTOR_OFFSET UNITYSDK_OFFSET(0x145DB660)

inline static constexpr unsigned int COICIIHCHGO_TypeDefinitionIndex = 82808;

class COICIIHCHGO : public ::LICBHCFJLNF
{
public:
	::System::UInt32 PINEDBFEGHI; // 0x10
	::System::UInt32 MNAIIBHLHMA; // 0x14
	::System::UInt32 CCMOALAMFGF; // 0x18
	::System::UInt32 DPGCKBEJLJD; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COICIIHCHGO__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COICIIHCHGO_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COICIIHCHGO_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::COICIIHCHGO* BBPCBEEHALC()
	{
		return ((::COICIIHCHGO*(*)())((::PBYTE)hIl2Cpp + COICIIHCHGO_BBPCBEEHALC_OFFSET))();
	}
};
