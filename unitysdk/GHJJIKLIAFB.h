#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EECKKANKNBM.h"

class CJIEIHEDMME;
class DMENGHNGJLA;
class GIBMJLOJLKD;
class JDNBKAPKIKA;
class MOJKADGHBIP;
namespace MoleMole { class ActivityGuideUIBaseWidgetController; }
namespace MoleMole { class UIActivityCompDoubleWidgetController; }
namespace MoleMole { class UIActivityGuideInfoWidgetController; }

#define GHJJIKLIAFB_BJFDKMIPJEN_OFFSET UNITYSDK_OFFSET(0x16CC6160)
#define GHJJIKLIAFB_CIEBMGCPIAP_OFFSET UNITYSDK_OFFSET(0x16CC6550)
#define GHJJIKLIAFB_DKNKNENGHFC_OFFSET UNITYSDK_OFFSET(0x16CC6890)
#define GHJJIKLIAFB_DLJEAGFGEBN_OFFSET UNITYSDK_OFFSET(0x16CC63D0)
#define GHJJIKLIAFB_EIODKDEOEDL_OFFSET UNITYSDK_OFFSET(0x16CC6760)
#define GHJJIKLIAFB_GPABOFFMBNN_OFFSET UNITYSDK_OFFSET(0x16CC6920)
#define GHJJIKLIAFB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x16CC6680)
#define GHJJIKLIAFB_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x16CC6800)
#define GHJJIKLIAFB_OMNKJPEHFEO_OFFSET UNITYSDK_OFFSET(0x16CC65C0)
#define GHJJIKLIAFB_PCMCDFACICM_OFFSET UNITYSDK_OFFSET(0x16CC66D0)
#define GHJJIKLIAFB__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC6120)

inline static constexpr unsigned int GHJJIKLIAFB_TypeDefinitionIndex = 83096;

class GHJJIKLIAFB : public ::EECKKANKNBM
{
public:
	::MOJKADGHBIP* NLEDFNCPADJ; // 0x38
	::MoleMole::UIActivityGuideInfoWidgetController* EIICBOCFBPA; // 0x40
	::DMENGHNGJLA* CCHDMBHOIGC; // 0x48
	::MoleMole::UIActivityCompDoubleWidgetController* APJBBHDEPFO; // 0x50
	::JDNBKAPKIKA* FAGONCKOCMM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJJIKLIAFB__CTOR_OFFSET))(this);
	}

	::System::Void BJFDKMIPJEN(::MoleMole::ActivityGuideUIBaseWidgetController* JNLBPMKIFNK, ::GIBMJLOJLKD* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityGuideUIBaseWidgetController*, ::GIBMJLOJLKD*))((::PBYTE)hIl2Cpp + GHJJIKLIAFB_BJFDKMIPJEN_OFFSET))(this, JNLBPMKIFNK, AEJAMJDBHAM);
	}

	::System::Void DLJEAGFGEBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJJIKLIAFB_DLJEAGFGEBN_OFFSET))(this);
	}

	::System::Void OMNKJPEHFEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJJIKLIAFB_OMNKJPEHFEO_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJJIKLIAFB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void PCMCDFACICM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJJIKLIAFB_PCMCDFACICM_OFFSET))(this);
	}

	::System::Void EIODKDEOEDL(::CJIEIHEDMME* PJBDLMBIIBH)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + GHJJIKLIAFB_EIODKDEOEDL_OFFSET))(this, PJBDLMBIIBH);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJJIKLIAFB_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void CIEBMGCPIAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJJIKLIAFB_CIEBMGCPIAP_OFFSET))(this);
	}

	::System::Void DKNKNENGHFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJJIKLIAFB_DKNKNENGHFC_OFFSET))(this);
	}

	::System::Void GPABOFFMBNN(::MoleMole::ActivityGuideUIBaseWidgetController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityGuideUIBaseWidgetController*, ::GIBMJLOJLKD*))((::PBYTE)hIl2Cpp + GHJJIKLIAFB_GPABOFFMBNN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
