#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KFOJLIBNEHH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1FB88910)
#define KFOJLIBNEHH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1FB88840)
#define KFOJLIBNEHH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1FB88690)
#define KFOJLIBNEHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB88900)

inline static constexpr unsigned int KFOJLIBNEHH_TypeDefinitionIndex = 95109;

class KFOJLIBNEHH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::UnityEngine::RectTransform* ABMHHIIEHKJ; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::FGCOIBFFCHB* EGEMIFNNNEA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOJLIBNEHH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KFOJLIBNEHH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KFOJLIBNEHH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOJLIBNEHH_KGEBDLGBGNM_OFFSET))(this);
	}
};
