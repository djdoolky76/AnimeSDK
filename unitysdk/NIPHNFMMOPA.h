#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NIPHNFMMOPA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x115992D0)
#define NIPHNFMMOPA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11599240)
#define NIPHNFMMOPA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11598FF0)
#define NIPHNFMMOPA__CTOR_OFFSET UNITYSDK_OFFSET(0x115992C0)

inline static constexpr unsigned int NIPHNFMMOPA_TypeDefinitionIndex = 69087;

class NIPHNFMMOPA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* AMEEMEPHGEL; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* EPNAIBDDJDP; // 0x28
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x30
	::ADEJAGFCBHK* OFDHNHIKGEP; // 0x38
	::UnityEngine::RectTransform* KHOJKFHFKIJ; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* NBHGIBKFMPF; // 0x48
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* LOKEOIABAGP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIPHNFMMOPA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIPHNFMMOPA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIPHNFMMOPA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIPHNFMMOPA_KGEBDLGBGNM_OFFSET))(this);
	}
};
