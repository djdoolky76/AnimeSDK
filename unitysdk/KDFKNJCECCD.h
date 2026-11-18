#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KDFKNJCECCD_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x176F9060)
#define KDFKNJCECCD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x176F9100)
#define KDFKNJCECCD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x176F8F70)
#define KDFKNJCECCD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x176F8D50)
#define KDFKNJCECCD_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x176F91A0)
#define KDFKNJCECCD__CTOR_OFFSET UNITYSDK_OFFSET(0x176F90F0)

inline static constexpr unsigned int KDFKNJCECCD_TypeDefinitionIndex = 38521;

class KDFKNJCECCD : public ::GIBMJLOJLKD
{
public:
	::FILNFMCNCFE* CALJMMPPAOE; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x28
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x38
	::FGCOIBFFCHB* JLLJPNMPKJA; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x48
	::FGCOIBFFCHB* AJDEFGLEGMP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFKNJCECCD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KDFKNJCECCD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + KDFKNJCECCD_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFKNJCECCD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KDFKNJCECCD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + KDFKNJCECCD_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
