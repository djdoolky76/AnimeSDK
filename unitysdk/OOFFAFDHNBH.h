#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define OOFFAFDHNBH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C44320)
#define OOFFAFDHNBH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C441E0)
#define OOFFAFDHNBH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C43FF0)
#define OOFFAFDHNBH__CTOR_OFFSET UNITYSDK_OFFSET(0x16C44310)

inline static constexpr unsigned int OOFFAFDHNBH_TypeDefinitionIndex = 47851;

class OOFFAFDHNBH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x18
	::FGCOIBFFCHB* IAOCBIHABLH; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::LGINJIKKBJA* DNGFGABBHEG; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* KKDJOFFBOFK; // 0x38
	::LGINJIKKBJA* BKDDKDMILCA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFAFDHNBH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OOFFAFDHNBH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OOFFAFDHNBH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFFAFDHNBH_KGEBDLGBGNM_OFFSET))(this);
	}
};
