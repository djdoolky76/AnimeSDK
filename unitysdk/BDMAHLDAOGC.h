#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BDMAHLDAOGC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1701F950)
#define BDMAHLDAOGC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1701F8A0)
#define BDMAHLDAOGC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1701F710)
#define BDMAHLDAOGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1701F940)

inline static constexpr unsigned int BDMAHLDAOGC_TypeDefinitionIndex = 65297;

class BDMAHLDAOGC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x20
	::FGCOIBFFCHB* LGHBBFDNEAE; // 0x28
	::FGCOIBFFCHB* MALCDMOKEAL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMAHLDAOGC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDMAHLDAOGC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDMAHLDAOGC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDMAHLDAOGC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
