#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BGKJGGNAMNH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1424F320)
#define BGKJGGNAMNH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1424F290)
#define BGKJGGNAMNH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1424F120)
#define BGKJGGNAMNH__CTOR_OFFSET UNITYSDK_OFFSET(0x1424F310)

inline static constexpr unsigned int BGKJGGNAMNH_TypeDefinitionIndex = 79900;

class BGKJGGNAMNH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* KKIEAHAKFKM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JJLGBDLENIJ; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKJGGNAMNH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BGKJGGNAMNH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKJGGNAMNH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BGKJGGNAMNH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
