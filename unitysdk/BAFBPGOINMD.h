#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BAFBPGOINMD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14237C90)
#define BAFBPGOINMD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14237BE0)
#define BAFBPGOINMD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14237A40)
#define BAFBPGOINMD__CTOR_OFFSET UNITYSDK_OFFSET(0x14237C80)

inline static constexpr unsigned int BAFBPGOINMD_TypeDefinitionIndex = 62020;

class BAFBPGOINMD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JLLJPNMPKJA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x20
	::LGINJIKKBJA* DDPMCFOFMFA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFBPGOINMD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BAFBPGOINMD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BAFBPGOINMD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFBPGOINMD_KGEBDLGBGNM_OFFSET))(this);
	}
};
