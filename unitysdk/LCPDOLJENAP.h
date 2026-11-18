#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LCPDOLJENAP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xD41F8C0)
#define LCPDOLJENAP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xD41F800)
#define LCPDOLJENAP__CTOR_OFFSET UNITYSDK_OFFSET(0xD41F8B0)

inline static constexpr unsigned int LCPDOLJENAP_TypeDefinitionIndex = 52890;

class LCPDOLJENAP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPDOLJENAP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCPDOLJENAP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCPDOLJENAP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
