#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define OLKLFNKHLIF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15FEBC90)
#define OLKLFNKHLIF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15FEBB80)
#define OLKLFNKHLIF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15FEB9B0)
#define OLKLFNKHLIF__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEBC80)

inline static constexpr unsigned int OLKLFNKHLIF_TypeDefinitionIndex = 52407;

class OLKLFNKHLIF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LBMPDPJKNJH; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::FGCOIBFFCHB* FMHNOKBIENC; // 0x28
	::UnityEngine::Transform* PNEJILEEAML; // 0x30
	::UnityEngine::Transform* LFBCOLJKGGI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKLFNKHLIF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLKLFNKHLIF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLKLFNKHLIF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKLFNKHLIF_KGEBDLGBGNM_OFFSET))(this);
	}
};
