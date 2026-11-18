#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OPKMHAPKLKH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C4BB90)
#define OPKMHAPKLKH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C4BAC0)
#define OPKMHAPKLKH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C4B940)
#define OPKMHAPKLKH__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4BB80)

inline static constexpr unsigned int OPKMHAPKLKH_TypeDefinitionIndex = 88426;

class OPKMHAPKLKH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* ANPBCLAFCJB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DOCMKJEDPCK; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* HBADNCJHEOJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPKMHAPKLKH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPKMHAPKLKH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPKMHAPKLKH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPKMHAPKLKH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
