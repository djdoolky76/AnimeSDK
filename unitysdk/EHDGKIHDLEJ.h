#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class UGUIMeshRender;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define EHDGKIHDLEJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16BE1F80)
#define EHDGKIHDLEJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16BE1E40)
#define EHDGKIHDLEJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BE1B70)
#define EHDGKIHDLEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16BE1F70)

inline static constexpr unsigned int EHDGKIHDLEJ_TypeDefinitionIndex = 64301;

class EHDGKIHDLEJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* HNAJBKNBAJM; // 0x18
	::UnityEngine::RectTransform* GNJEMDJGEPE; // 0x20
	::FGCOIBFFCHB* HHCILICOFIJ; // 0x28
	::FGCOIBFFCHB* JLBLIFCEPHK; // 0x30
	::UnityEngine::RectTransform* GCOCJDACOFO; // 0x38
	::FGCOIBFFCHB* APLHMOOJKOH; // 0x40
	::UnityEngine::RectTransform* PFLHANANHOH; // 0x48
	::GCIMMDDIFBJ* JGCLHCNHKJE; // 0x50
	::UGUIMeshRender* OBEMLOACGAF; // 0x58
	::FGCOIBFFCHB* IMPPNMHNPFE; // 0x60
	::FGCOIBFFCHB* BIOBNFKPHEM; // 0x68
	::GCIMMDDIFBJ* OCCODLOENNG; // 0x70
	::UnityEngine::CanvasGroup* MIFJCCEDJDF; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDGKIHDLEJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHDGKIHDLEJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHDGKIHDLEJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDGKIHDLEJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
