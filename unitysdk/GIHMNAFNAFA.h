#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEOFAFNCAFK.h"
#include "unitysdk/GIHMNAFNAFA_FCAADKOFBDL.h"

class MEKLIGLLJKM;

#define GIHMNAFNAFA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16CC74E0)
#define GIHMNAFNAFA_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x16CC7CF0)
#define GIHMNAFNAFA_JEOODAKEGPP_OFFSET UNITYSDK_OFFSET(0x16CC7820)
#define GIHMNAFNAFA_KHBNDPBIEAM_OFFSET UNITYSDK_OFFSET(0x16CC76F0)
#define GIHMNAFNAFA_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x16CC7620)
#define GIHMNAFNAFA_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x16CC7D90)
#define GIHMNAFNAFA__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC7CE0)

inline static constexpr unsigned int GIHMNAFNAFA_TypeDefinitionIndex = 55005;

class GIHMNAFNAFA : public ::AEOFAFNCAFK
{
public:
	::MEKLIGLLJKM* CDPHHNAGHJM; // 0x10
	::System::Single FKNEMLNCEPK; // 0x18
	::System::Single PJGHPBOINDG; // 0x1C
	::GIHMNAFNAFA_FCAADKOFBDL INNFIAMEMHN; // 0x20
	::System::Single GCMIHIPFMMA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHMNAFNAFA__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MEKLIGLLJKM* POJEDACFDOF)
	{
		return ((::System::Void(*)(::PVOID, ::MEKLIGLLJKM*))((::PBYTE)hIl2Cpp + GIHMNAFNAFA_BBOMJDBNHIC_OFFSET))(this, POJEDACFDOF);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIHMNAFNAFA_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIHMNAFNAFA_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void KHBNDPBIEAM(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIHMNAFNAFA_KHBNDPBIEAM_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void JEOODAKEGPP(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIHMNAFNAFA_JEOODAKEGPP_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void PNHPDOBPKKE(::MEKLIGLLJKM* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MEKLIGLLJKM*))((::PBYTE)hIl2Cpp + GIHMNAFNAFA_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}
};
