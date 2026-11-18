#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ENKFPGOKEPL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11CBBB00)
#define ENKFPGOKEPL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11CBBA50)
#define ENKFPGOKEPL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11CBB870)
#define ENKFPGOKEPL__CTOR_OFFSET UNITYSDK_OFFSET(0x11CBBAF0)

inline static constexpr unsigned int ENKFPGOKEPL_TypeDefinitionIndex = 56280;

class ENKFPGOKEPL : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* CCAAEMHNPKI; // 0x18
	::FGCOIBFFCHB* JDCDDCGBFOM; // 0x20
	::GCIMMDDIFBJ* PEFNEBEDKBH; // 0x28
	::FGCOIBFFCHB* OBFDBOCIHAP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DBMPEIKCMME; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKFPGOKEPL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENKFPGOKEPL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKFPGOKEPL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENKFPGOKEPL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
