#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define BIFCLJOCEHL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFF78D10)
#define BIFCLJOCEHL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xFF78C60)
#define BIFCLJOCEHL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFF78AC0)
#define BIFCLJOCEHL__CTOR_OFFSET UNITYSDK_OFFSET(0xFF78D00)

inline static constexpr unsigned int BIFCLJOCEHL_TypeDefinitionIndex = 83907;

class BIFCLJOCEHL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* CGHKKMDMMOP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JEBLIFINKFI; // 0x20
	::UnityEngine::RectTransform* ILIALHJPJGH; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFCLJOCEHL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BIFCLJOCEHL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BIFCLJOCEHL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIFCLJOCEHL_KGEBDLGBGNM_OFFSET))(this);
	}
};
