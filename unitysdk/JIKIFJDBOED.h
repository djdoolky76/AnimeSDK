#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JIKIFJDBOED_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13088710)
#define JIKIFJDBOED_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13088620)
#define JIKIFJDBOED_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x130884B0)
#define JIKIFJDBOED__CTOR_OFFSET UNITYSDK_OFFSET(0x13088700)

inline static constexpr unsigned int JIKIFJDBOED_TypeDefinitionIndex = 79231;

class JIKIFJDBOED : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OGCJGJFPBJG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKIFJDBOED__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIKIFJDBOED_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIKIFJDBOED_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKIFJDBOED_KGEBDLGBGNM_OFFSET))(this);
	}
};
