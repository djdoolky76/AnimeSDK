#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CFEHFNDMLPH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x159BEF50)
#define CFEHFNDMLPH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x159BEE80)
#define CFEHFNDMLPH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x159BEC60)
#define CFEHFNDMLPH__CTOR_OFFSET UNITYSDK_OFFSET(0x159BEF40)

inline static constexpr unsigned int CFEHFNDMLPH_TypeDefinitionIndex = 62734;

class CFEHFNDMLPH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* LMCKPPBCOEK; // 0x18
	::LGINJIKKBJA* FFKNFGIMBDJ; // 0x20
	::FGCOIBFFCHB* KJBINNHKCDC; // 0x28
	::UnityEngine::RectTransform* DCDENHPHFKD; // 0x30
	::UnityEngine::RectTransform* EPJNLBHLMCO; // 0x38
	::UnityEngine::RectTransform* JNADFFOLDGP; // 0x40
	::UnityEngine::CanvasGroup* GGEDBHJOHKN; // 0x48
	::LGINJIKKBJA* EGGGDOOKOFA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEHFNDMLPH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFEHFNDMLPH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFEHFNDMLPH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEHFNDMLPH_KGEBDLGBGNM_OFFSET))(this);
	}
};
