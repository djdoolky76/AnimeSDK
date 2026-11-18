#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JJAMIFOBHAB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1528F0A0)
#define JJAMIFOBHAB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1528EF60)
#define JJAMIFOBHAB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1528ED70)
#define JJAMIFOBHAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1528F090)

inline static constexpr unsigned int JJAMIFOBHAB_TypeDefinitionIndex = 88775;

class JJAMIFOBHAB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x18
	::FGCOIBFFCHB* MPNGIAIPCKN; // 0x20
	::UnityEngine::RectTransform* JPEFHJMLLFF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::LGINJIKKBJA* GOMNOMJALIE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAMIFOBHAB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JJAMIFOBHAB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JJAMIFOBHAB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAMIFOBHAB_KGEBDLGBGNM_OFFSET))(this);
	}
};
