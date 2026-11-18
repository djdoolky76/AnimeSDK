#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define EAKDODNJIPO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16986B50)
#define EAKDODNJIPO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16986A80)
#define EAKDODNJIPO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16986890)
#define EAKDODNJIPO__CTOR_OFFSET UNITYSDK_OFFSET(0x16986B40)

inline static constexpr unsigned int EAKDODNJIPO_TypeDefinitionIndex = 40859;

class EAKDODNJIPO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::RectTransform* BKBGGPLDFJM; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::UnityEngine::RectTransform* OCPFFNKLFKP; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKDODNJIPO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EAKDODNJIPO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EAKDODNJIPO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKDODNJIPO_KGEBDLGBGNM_OFFSET))(this);
	}
};
