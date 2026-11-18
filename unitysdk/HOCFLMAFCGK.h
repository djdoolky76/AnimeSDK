#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HOCFLMAFCGK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F50520)
#define HOCFLMAFCGK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F50430)
#define HOCFLMAFCGK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F50270)
#define HOCFLMAFCGK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F50510)

inline static constexpr unsigned int HOCFLMAFCGK_TypeDefinitionIndex = 90894;

class HOCFLMAFCGK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* EBINBFMJDMF; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x38
	::UnityEngine::RectTransform* HGEBIMKDLGB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCFLMAFCGK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOCFLMAFCGK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCFLMAFCGK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOCFLMAFCGK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
