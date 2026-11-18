#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EJEBPNIFMEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16148DE0)
#define EJEBPNIFMEB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16148D50)
#define EJEBPNIFMEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16148B80)
#define EJEBPNIFMEB__CTOR_OFFSET UNITYSDK_OFFSET(0x16148DD0)

inline static constexpr unsigned int EJEBPNIFMEB_TypeDefinitionIndex = 70759;

class EJEBPNIFMEB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* APOFAIMPPFC; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* OBOJJBHJBMO; // 0x20
	::UnityEngine::RectTransform* PHFOGPCBGOG; // 0x28
	::UnityEngine::RectTransform* CJHPAPLDHEO; // 0x30
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x38
	::UnityEngine::RectTransform* IKFDIBFMKIM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AIONHELBGBC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEBPNIFMEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJEBPNIFMEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJEBPNIFMEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEBPNIFMEB_KGEBDLGBGNM_OFFSET))(this);
	}
};
