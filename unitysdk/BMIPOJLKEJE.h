#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BMIPOJLKEJE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10E0FFF0)
#define BMIPOJLKEJE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10E0FEF0)
#define BMIPOJLKEJE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10E0FCB0)
#define BMIPOJLKEJE__CTOR_OFFSET UNITYSDK_OFFSET(0x10E0FFE0)

inline static constexpr unsigned int BMIPOJLKEJE_TypeDefinitionIndex = 48615;

class BMIPOJLKEJE : public ::GIBMJLOJLKD
{
public:
	::FILNFMCNCFE* LBFJGHFJBMM; // 0x18
	::LGINJIKKBJA* OEIFHCEFEBG; // 0x20
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* CCMLFGOMDIO; // 0x30
	::FGCOIBFFCHB* KKOJIGEFPBM; // 0x38
	::FGCOIBFFCHB* NIIDGJFIKJA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIPOJLKEJE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BMIPOJLKEJE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BMIPOJLKEJE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIPOJLKEJE_KGEBDLGBGNM_OFFSET))(this);
	}
};
