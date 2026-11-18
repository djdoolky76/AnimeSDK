#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DLIJKILNFPI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFDC3E10)
#define DLIJKILNFPI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xFDC3D40)
#define DLIJKILNFPI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFDC3BD0)
#define DLIJKILNFPI__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC3E00)

inline static constexpr unsigned int DLIJKILNFPI_TypeDefinitionIndex = 90991;

class DLIJKILNFPI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLIJKILNFPI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLIJKILNFPI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLIJKILNFPI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLIJKILNFPI_KGEBDLGBGNM_OFFSET))(this);
	}
};
