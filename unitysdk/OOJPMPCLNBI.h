#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OOJPMPCLNBI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11950080)
#define OOJPMPCLNBI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11950120)
#define OOJPMPCLNBI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE168DB0)
#define OOJPMPCLNBI__CTOR_OFFSET UNITYSDK_OFFSET(0x11950070)

inline static constexpr unsigned int OOJPMPCLNBI_TypeDefinitionIndex = 71477;

class OOJPMPCLNBI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* LCHPJHAFJGE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JDJKPGMLGDN; // 0x20
	::LGINJIKKBJA* MPKFJGANKMF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EPMEILNJMFF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJPMPCLNBI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OOJPMPCLNBI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OOJPMPCLNBI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJPMPCLNBI_KGEBDLGBGNM_OFFSET))(this);
	}
};
