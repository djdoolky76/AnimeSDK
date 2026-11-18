#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LHDLIABBLKE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A609E30)
#define LHDLIABBLKE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A609D10)
#define LHDLIABBLKE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A609A80)
#define LHDLIABBLKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A609E20)

inline static constexpr unsigned int LHDLIABBLKE_TypeDefinitionIndex = 60144;

class LHDLIABBLKE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PPPNOAPFDMN; // 0x18
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x20
	::FGCOIBFFCHB* CKAIPNFHIBA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x30
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x38
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x40
	::UnityEngine::GameObject* HHCPHIBEEDD; // 0x48
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x50
	::LGINJIKKBJA* ICPJFJLCCHB; // 0x58
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x60
	::FGCOIBFFCHB* JPLDGNLIILH; // 0x68
	::FGCOIBFFCHB* DAGCDFAIHAN; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDLIABBLKE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHDLIABBLKE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHDLIABBLKE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDLIABBLKE_KGEBDLGBGNM_OFFSET))(this);
	}
};
