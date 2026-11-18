#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JCPHKCOAEPJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19809F20)
#define JCPHKCOAEPJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19809E10)
#define JCPHKCOAEPJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19809C70)
#define JCPHKCOAEPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19809F10)

inline static constexpr unsigned int JCPHKCOAEPJ_TypeDefinitionIndex = 81415;

class JCPHKCOAEPJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::FGCOIBFFCHB* HGMNLNMGBBG; // 0x20
	::FGCOIBFFCHB* NLNAKCDHJKF; // 0x28
	::FGCOIBFFCHB* IPCOIFBOEPA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPHKCOAEPJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCPHKCOAEPJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCPHKCOAEPJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPHKCOAEPJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
