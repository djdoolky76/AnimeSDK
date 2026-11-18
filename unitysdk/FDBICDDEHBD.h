#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define FDBICDDEHBD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x141965D0)
#define FDBICDDEHBD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14196520)
#define FDBICDDEHBD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14196390)
#define FDBICDDEHBD__CTOR_OFFSET UNITYSDK_OFFSET(0x141965C0)

inline static constexpr unsigned int FDBICDDEHBD_TypeDefinitionIndex = 65204;

class FDBICDDEHBD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITabButton* JFOMEBGCFKM; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBICDDEHBD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDBICDDEHBD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBICDDEHBD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDBICDDEHBD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
