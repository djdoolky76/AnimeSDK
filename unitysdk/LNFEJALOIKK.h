#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EECKKANKNBM.h"

class CJIEIHEDMME;
class GIBMJLOJLKD;
class HPAMNLBAOEK;
class ODNGOFDFOOJ;
namespace MoleMole { class ActivityGuideUIBaseWidgetController; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivitySignInWidgetBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LNFEJALOIKK_BJFDKMIPJEN_OFFSET UNITYSDK_OFFSET(0x15E0C130)
#define LNFEJALOIKK_DKNKNENGHFC_OFFSET UNITYSDK_OFFSET(0x15E0C950)
#define LNFEJALOIKK_DLJEAGFGEBN_OFFSET UNITYSDK_OFFSET(0x15E0C2D0)
#define LNFEJALOIKK_FHFADMFLFKD_OFFSET UNITYSDK_OFFSET(0x15E0CDB0)
#define LNFEJALOIKK_GPABOFFMBNN_OFFSET UNITYSDK_OFFSET(0x15E0C8B0)
#define LNFEJALOIKK_JDCGLAKLEEK_OFFSET UNITYSDK_OFFSET(0x15E0C080)
#define LNFEJALOIKK_MCCKMCFKIIF_OFFSET UNITYSDK_OFFSET(0x15E0C9E0)
#define LNFEJALOIKK_MEMPLEFBELO_OFFSET UNITYSDK_OFFSET(0x15E0CD20)
#define LNFEJALOIKK_OMNKJPEHFEO_OFFSET UNITYSDK_OFFSET(0x15E0C690)
#define LNFEJALOIKK_PCMCDFACICM_OFFSET UNITYSDK_OFFSET(0x15E0CC90)
#define LNFEJALOIKK__CTOR_OFFSET UNITYSDK_OFFSET(0x15E0C000)

inline static constexpr unsigned int LNFEJALOIKK_TypeDefinitionIndex = 63959;

class LNFEJALOIKK : public ::EECKKANKNBM
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIActivitySignInWidgetBase*>* OIKGNFNOHNK; // 0x38
	::HPAMNLBAOEK* OADNPECFPAJ; // 0x40
	::ODNGOFDFOOJ* HHFEFLIFKDI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFEJALOIKK__CTOR_OFFSET))(this);
	}

	::System::Void JDCGLAKLEEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFEJALOIKK_JDCGLAKLEEK_OFFSET))(this);
	}

	::System::Void BJFDKMIPJEN(::MoleMole::ActivityGuideUIBaseWidgetController* JNLBPMKIFNK, ::GIBMJLOJLKD* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityGuideUIBaseWidgetController*, ::GIBMJLOJLKD*))((::PBYTE)hIl2Cpp + LNFEJALOIKK_BJFDKMIPJEN_OFFSET))(this, JNLBPMKIFNK, AEJAMJDBHAM);
	}

	::System::Void DLJEAGFGEBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFEJALOIKK_DLJEAGFGEBN_OFFSET))(this);
	}

	::System::Void OMNKJPEHFEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFEJALOIKK_OMNKJPEHFEO_OFFSET))(this);
	}

	::System::Void GPABOFFMBNN(::MoleMole::ActivityGuideUIBaseWidgetController* MIALFKCCCPI, ::GIBMJLOJLKD* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityGuideUIBaseWidgetController*, ::GIBMJLOJLKD*))((::PBYTE)hIl2Cpp + LNFEJALOIKK_GPABOFFMBNN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void DKNKNENGHFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFEJALOIKK_DKNKNENGHFC_OFFSET))(this);
	}

	::System::Void MCCKMCFKIIF(::MoleMole::MonoGamepadModule* MLOGBJPPCKD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + LNFEJALOIKK_MCCKMCFKIIF_OFFSET))(this, MLOGBJPPCKD);
	}

	::System::Void PCMCDFACICM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFEJALOIKK_PCMCDFACICM_OFFSET))(this);
	}

	::System::Void MEMPLEFBELO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFEJALOIKK_MEMPLEFBELO_OFFSET))(this);
	}

	::System::Void FHFADMFLFKD(::CJIEIHEDMME* IHACKHOBPKG)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + LNFEJALOIKK_FHFADMFLFKD_OFFSET))(this, IHACKHOBPKG);
	}
};
