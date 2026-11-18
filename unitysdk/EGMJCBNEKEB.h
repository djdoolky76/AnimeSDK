#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define EGMJCBNEKEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1710A1B0)
#define EGMJCBNEKEB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1710A100)
#define EGMJCBNEKEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17109F00)
#define EGMJCBNEKEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1710A1A0)

inline static constexpr unsigned int EGMJCBNEKEB_TypeDefinitionIndex = 41649;

class EGMJCBNEKEB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::FGCOIBFFCHB* BKDGGCFMIPD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* GNCFFDKLCKG; // 0x30
	::UnityEngine::RectTransform* BDHEEDBEIKP; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40
	::UnityEngine::GameObject* BJIKEIGONGE; // 0x48
	::UnityEngine::UI::Extension::UITabButton* OEPAJHOAAAI; // 0x50
	::UnityEngine::RectTransform* HGEBIMKDLGB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMJCBNEKEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGMJCBNEKEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMJCBNEKEB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGMJCBNEKEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
