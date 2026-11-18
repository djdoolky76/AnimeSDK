#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FILNFMCNCFE;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define AAHFABNNAEP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x154C2000)
#define AAHFABNNAEP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x154C1EB0)
#define AAHFABNNAEP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x154C1B90)
#define AAHFABNNAEP__CTOR_OFFSET UNITYSDK_OFFSET(0x154C1FF0)

inline static constexpr unsigned int AAHFABNNAEP_TypeDefinitionIndex = 81111;

class AAHFABNNAEP : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* DENECMNHJGE; // 0x18
	::UnityEngine::CanvasGroup* HPLNOEKNJBE; // 0x20
	::UnityEngine::RectTransform* GOHLGCJPNCO; // 0x28
	::UnityEngine::RectTransform* PGHJLHPLNJG; // 0x30
	::LGINJIKKBJA* BKDDKDMILCA; // 0x38
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x40
	::UnityEngine::RectTransform* BPEMEIBENJK; // 0x48
	::MoleMole::MonoInputKey* DBKHKOGOLNE; // 0x50
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x58
	::GCIMMDDIFBJ* NOALGBKIDGN; // 0x60
	::LGINJIKKBJA* OJPAODAIOFE; // 0x68
	::FILNFMCNCFE* KDEMMAEEELF; // 0x70
	::UnityEngine::RectTransform* MAONDJCIEMB; // 0x78
	::LGINJIKKBJA* GCFGMELGDAN; // 0x80
	::LGINJIKKBJA* MKPEGBHMMHC; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHFABNNAEP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AAHFABNNAEP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHFABNNAEP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AAHFABNNAEP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
