#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GAGCNHBIKLL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x156E7050)
#define GAGCNHBIKLL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x156E6F50)
#define GAGCNHBIKLL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x156E6D40)
#define GAGCNHBIKLL__CTOR_OFFSET UNITYSDK_OFFSET(0x156E7040)

inline static constexpr unsigned int GAGCNHBIKLL_TypeDefinitionIndex = 89124;

class GAGCNHBIKLL : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* EEHNFKFAGBJ; // 0x18
	::FGCOIBFFCHB* BJAOIDNKEOF; // 0x20
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::FGCOIBFFCHB* LBMPDPJKNJH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* JOOKGFCFGLL; // 0x40
	::UnityEngine::RectTransform* HKCAHGGGOOD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGCNHBIKLL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GAGCNHBIKLL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GAGCNHBIKLL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGCNHBIKLL_KGEBDLGBGNM_OFFSET))(this);
	}
};
