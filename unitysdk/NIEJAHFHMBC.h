#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NIEJAHFHMBC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x105BB9B0)
#define NIEJAHFHMBC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x105BB8B0)
#define NIEJAHFHMBC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x105BB660)
#define NIEJAHFHMBC__CTOR_OFFSET UNITYSDK_OFFSET(0x105BB9A0)

inline static constexpr unsigned int NIEJAHFHMBC_TypeDefinitionIndex = 58147;

class NIEJAHFHMBC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DHKJPIEJFJA; // 0x18
	::LGINJIKKBJA* KBCLEFAKGHE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IGJLHOJJDBG; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::RectTransform* KNLHJICNJPD; // 0x38
	::FGCOIBFFCHB* HHCPHIBEEDD; // 0x40
	::FGCOIBFFCHB* DAGCDFAIHAN; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* GAFLJAFPNEN; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* ABKDKEKKCEB; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* HIMGHHHFMGC; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEJAHFHMBC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIEJAHFHMBC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEJAHFHMBC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIEJAHFHMBC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
