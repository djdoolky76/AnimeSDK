#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EBCOIBKKCMH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13E6E990)
#define EBCOIBKKCMH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13E6E880)
#define EBCOIBKKCMH__CTOR_OFFSET UNITYSDK_OFFSET(0x13E6E980)

inline static constexpr unsigned int EBCOIBKKCMH_TypeDefinitionIndex = 83526;

class EBCOIBKKCMH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x20
	::GCIMMDDIFBJ* OHLHEJCBCMC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCOIBKKCMH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBCOIBKKCMH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBCOIBKKCMH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
