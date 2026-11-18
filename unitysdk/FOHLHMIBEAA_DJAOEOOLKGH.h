#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FOHLHMIBEAA_DJAOEOOLKGH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1750EEB0)
#define FOHLHMIBEAA_DJAOEOOLKGH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1750EE20)
#define FOHLHMIBEAA_DJAOEOOLKGH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1750ECB0)
#define FOHLHMIBEAA_DJAOEOOLKGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1750EEA0)

inline static constexpr unsigned int FOHLHMIBEAA_DJAOEOOLKGH_TypeDefinitionIndex = 84014;

class FOHLHMIBEAA_DJAOEOOLKGH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* NJCAGAKEODF; // 0x18
	::UnityEngine::Animation* OBNLBMABFPF; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHLHMIBEAA_DJAOEOOLKGH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FOHLHMIBEAA_DJAOEOOLKGH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHLHMIBEAA_DJAOEOOLKGH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FOHLHMIBEAA_DJAOEOOLKGH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
