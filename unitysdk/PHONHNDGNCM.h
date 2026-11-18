#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PHONHNDGNCM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1D9CC090)
#define PHONHNDGNCM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1D9CBFC0)
#define PHONHNDGNCM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1D9CBDE0)
#define PHONHNDGNCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CC080)

inline static constexpr unsigned int PHONHNDGNCM_TypeDefinitionIndex = 75902;

class PHONHNDGNCM : public ::GIBMJLOJLKD
{
public:
	::FILNFMCNCFE* CALJMMPPAOE; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::FGCOIBFFCHB* DDLKHBGJLDP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* ACPPOPFNFDO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHONHNDGNCM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHONHNDGNCM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHONHNDGNCM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHONHNDGNCM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
