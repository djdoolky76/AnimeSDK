#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GNJNDKBJCGD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10FF26B0)
#define GNJNDKBJCGD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10FF25B0)
#define GNJNDKBJCGD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10FF23A0)
#define GNJNDKBJCGD__CTOR_OFFSET UNITYSDK_OFFSET(0x10FF26A0)

inline static constexpr unsigned int GNJNDKBJCGD_TypeDefinitionIndex = 68556;

class GNJNDKBJCGD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* JHIGDEKCBND; // 0x18
	::UnityEngine::Transform* KBGHPLEIIJK; // 0x20
	::FGCOIBFFCHB* NJCAGAKEODF; // 0x28
	::LGINJIKKBJA* OEIFHCEFEBG; // 0x30
	::FILNFMCNCFE* CALJMMPPAOE; // 0x38
	::FGCOIBFFCHB* KBNCCFMHCDM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJNDKBJCGD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GNJNDKBJCGD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GNJNDKBJCGD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJNDKBJCGD_KGEBDLGBGNM_OFFSET))(this);
	}
};
