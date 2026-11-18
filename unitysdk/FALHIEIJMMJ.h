#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FALHIEIJMMJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14282140)
#define FALHIEIJMMJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x142820B0)
#define FALHIEIJMMJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14281E60)
#define FALHIEIJMMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14282130)

inline static constexpr unsigned int FALHIEIJMMJ_TypeDefinitionIndex = 40650;

class FALHIEIJMMJ : public ::GIBMJLOJLKD
{
public:
	::ADEJAGFCBHK* OFDHNHIKGEP; // 0x18
	::MoleMole::MonoGamepadModule* FECAIEJFFLA; // 0x20
	::UnityEngine::RectTransform* OLLEHOJAOGN; // 0x28
	::MonoUITableScrollV2* OFJOLDGMCCD; // 0x30
	::UnityEngine::UI::Text* AMEEMEPHGEL; // 0x38
	::UnityEngine::RectTransform* KHOJKFHFKIJ; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* LOKEOIABAGP; // 0x48
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x50
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FALHIEIJMMJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FALHIEIJMMJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FALHIEIJMMJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FALHIEIJMMJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
