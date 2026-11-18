#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCGECAEBJFK.h"
#include "unitysdk/LHBLBAAGGIB.h"
#include "unitysdk/System/Object.h"

class BBGMJICNHFO;
namespace System { class Action; }

#define EPMNEBIHEHI_BHLCDCEOPHP_OFFSET UNITYSDK_OFFSET(0x17253860)
#define EPMNEBIHEHI_BILLIKGMNJG_OFFSET UNITYSDK_OFFSET(0x172538F0)
#define EPMNEBIHEHI_KPPGGCFCFMA_OFFSET UNITYSDK_OFFSET(0x17253940)
#define EPMNEBIHEHI_OFPADCEIIIJ_OFFSET UNITYSDK_OFFSET(0x17253980)
#define EPMNEBIHEHI_OKDBHDKAFKI_OFFSET UNITYSDK_OFFSET(0x17253A30)
#define EPMNEBIHEHI_PPEJGEPJNHF_OFFSET UNITYSDK_OFFSET(0x172538A0)
#define EPMNEBIHEHI__CTOR_OFFSET UNITYSDK_OFFSET(0x17253850)

inline static constexpr unsigned int EPMNEBIHEHI_TypeDefinitionIndex = 79823;

class EPMNEBIHEHI : public ::System::Object
{
public:
	::BBGMJICNHFO* OHBADFGFPJJ; // 0x10
	::System::Action* GMOIPIIKAPB; // 0x18
	::System::Boolean HHMLLBAEDJF; // 0x20

	::System::Void _ctor(::BBGMJICNHFO* IJKIMCMPBCF)
	{
		return ((::System::Void(*)(::PVOID, ::BBGMJICNHFO*))((::PBYTE)hIl2Cpp + EPMNEBIHEHI__CTOR_OFFSET))(this, IJKIMCMPBCF);
	}

	::System::Boolean BHLCDCEOPHP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMNEBIHEHI_BHLCDCEOPHP_OFFSET))(this);
	}

	::BCGECAEBJFK PPEJGEPJNHF()
	{
		return ((::BCGECAEBJFK(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMNEBIHEHI_PPEJGEPJNHF_OFFSET))(this);
	}

	::System::Void BILLIKGMNJG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMNEBIHEHI_BILLIKGMNJG_OFFSET))(this);
	}

	::LHBLBAAGGIB KPPGGCFCFMA()
	{
		return ((::LHBLBAAGGIB(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMNEBIHEHI_KPPGGCFCFMA_OFFSET))(this);
	}

	::System::Void OFPADCEIIIJ(::System::Action* IDJOMIMIOGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EPMNEBIHEHI_OFPADCEIIIJ_OFFSET))(this, IDJOMIMIOGM);
	}

	::System::Void OKDBHDKAFKI(::System::Boolean DPOJBEEBGFG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPMNEBIHEHI_OKDBHDKAFKI_OFFSET))(this, DPOJBEEBGFG);
	}
};
