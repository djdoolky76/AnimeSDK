#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CJPKDOFKGAD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132695A0)
#define CJPKDOFKGAD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x132694F0)
#define CJPKDOFKGAD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13269330)
#define CJPKDOFKGAD__CTOR_OFFSET UNITYSDK_OFFSET(0x13269590)

inline static constexpr unsigned int CJPKDOFKGAD_TypeDefinitionIndex = 89966;

class CJPKDOFKGAD : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x18
	::FGCOIBFFCHB* PBBHIOABJLP; // 0x20
	::FGCOIBFFCHB* APMAANEPDLB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPKDOFKGAD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJPKDOFKGAD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJPKDOFKGAD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPKDOFKGAD_KGEBDLGBGNM_OFFSET))(this);
	}
};
