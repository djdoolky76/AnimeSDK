#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class ShaderAniHelp;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JBAKICNLODB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF88AD50)
#define JBAKICNLODB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF88AC10)
#define JBAKICNLODB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF88A970)
#define JBAKICNLODB__CTOR_OFFSET UNITYSDK_OFFSET(0xF88AD40)

inline static constexpr unsigned int JBAKICNLODB_TypeDefinitionIndex = 62655;

class JBAKICNLODB : public ::GIBMJLOJLKD
{
public:
	::ShaderAniHelp* CENAJMCPANF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* PPPNOAPFDMN; // 0x20
	::FGCOIBFFCHB* DJJPHLNDJDB; // 0x28
	::FGCOIBFFCHB* KEGNNHIHKOJ; // 0x30
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x38
	::UnityEngine::RectTransform* NLNAHDIJEDM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* PLHFEEBKFJF; // 0x48
	::GCIMMDDIFBJ* NIJMIHAPEEI; // 0x50
	::MoleMole::MonoGamepadModule* GDEEPNOOCFH; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* EHALDAHKAGN; // 0x60
	::FGCOIBFFCHB* AAICEELJIIB; // 0x68
	::FGCOIBFFCHB* NMBDIALHDKN; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAKICNLODB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBAKICNLODB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBAKICNLODB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAKICNLODB_KGEBDLGBGNM_OFFSET))(this);
	}
};
