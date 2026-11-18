#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CGNNKPFMNEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x145500C0)
#define CGNNKPFMNEB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14550030)
#define CGNNKPFMNEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1454FDB0)
#define CGNNKPFMNEB__CTOR_OFFSET UNITYSDK_OFFSET(0x145500B0)

inline static constexpr unsigned int CGNNKPFMNEB_TypeDefinitionIndex = 38585;

class CGNNKPFMNEB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PAMIPKJODLI; // 0x18
	::GCIMMDDIFBJ* JFKPKIFFBEM; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::UnityEngine::RectTransform* EJPABAGEIKO; // 0x38
	::UnityEngine::CanvasGroup* MAPIJJNNPIN; // 0x40
	::UnityEngine::RectTransform* HGMNLNMGBBG; // 0x48
	::UnityEngine::RectTransform* CGFEGKFCHNG; // 0x50
	::UnityEngine::RectTransform* MIIFKJBHONH; // 0x58
	::GCIMMDDIFBJ* NCOBLIMFBGP; // 0x60
	::UnityEngine::RectTransform* AAGJMILMPOH; // 0x68
	::UnityEngine::RectTransform* KKAJCNKEGPE; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNNKPFMNEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGNNKPFMNEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNNKPFMNEB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGNNKPFMNEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
