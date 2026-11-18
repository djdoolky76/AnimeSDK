#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MCFFKNAPNCM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17D07F50)
#define MCFFKNAPNCM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17D07EA0)
#define MCFFKNAPNCM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17D07C50)
#define MCFFKNAPNCM__CTOR_OFFSET UNITYSDK_OFFSET(0x17D07F40)

inline static constexpr unsigned int MCFFKNAPNCM_TypeDefinitionIndex = 81682;

class MCFFKNAPNCM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* OADPCPJLECB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MMBCJGAOILF; // 0x20
	::UnityEngine::RectTransform* POPGLGEDFFG; // 0x28
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* IFKHNEIAEAI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* LHIMNIAOEAH; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* BGOOKHKNAHK; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HANKAMBLFBL; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* KNFJAHDEBIJ; // 0x58
	::LGINJIKKBJA* KOFDFMEEENM; // 0x60
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* NFHMEONBEPE; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFFKNAPNCM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCFFKNAPNCM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MCFFKNAPNCM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFFKNAPNCM_KGEBDLGBGNM_OFFSET))(this);
	}
};
