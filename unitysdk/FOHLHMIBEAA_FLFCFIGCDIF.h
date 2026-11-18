#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FOHLHMIBEAA_FLFCFIGCDIF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11C74E60)
#define FOHLHMIBEAA_FLFCFIGCDIF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11C74DD0)
#define FOHLHMIBEAA_FLFCFIGCDIF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11C74C60)
#define FOHLHMIBEAA_FLFCFIGCDIF__CTOR_OFFSET UNITYSDK_OFFSET(0x11C74E50)

inline static constexpr unsigned int FOHLHMIBEAA_FLFCFIGCDIF_TypeDefinitionIndex = 84015;

class FOHLHMIBEAA_FLFCFIGCDIF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* NFJFCMGHOCN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::FGCOIBFFCHB* NJCAGAKEODF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHLHMIBEAA_FLFCFIGCDIF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FOHLHMIBEAA_FLFCFIGCDIF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FOHLHMIBEAA_FLFCFIGCDIF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHLHMIBEAA_FLFCFIGCDIF_KGEBDLGBGNM_OFFSET))(this);
	}
};
