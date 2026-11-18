#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CCNAMFELNMJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18DC5DE0)
#define CCNAMFELNMJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18DC5D30)
#define CCNAMFELNMJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18DC5B80)
#define CCNAMFELNMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC5DD0)

inline static constexpr unsigned int CCNAMFELNMJ_TypeDefinitionIndex = 77844;

class CCNAMFELNMJ : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MDHHGDLPNFG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JHNDNKLBOLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNAMFELNMJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCNAMFELNMJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CCNAMFELNMJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNAMFELNMJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
