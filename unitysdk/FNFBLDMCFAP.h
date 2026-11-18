#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define FNFBLDMCFAP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1750C510)
#define FNFBLDMCFAP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1750C420)
#define FNFBLDMCFAP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1750C280)
#define FNFBLDMCFAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1750C500)

inline static constexpr unsigned int FNFBLDMCFAP_TypeDefinitionIndex = 66729;

class FNFBLDMCFAP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x18
	::FGCOIBFFCHB* MDIMNEDAOPF; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFBLDMCFAP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNFBLDMCFAP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNFBLDMCFAP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFBLDMCFAP_KGEBDLGBGNM_OFFSET))(this);
	}
};
