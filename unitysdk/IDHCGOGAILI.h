#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IDHCGOGAILI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A398680)
#define IDHCGOGAILI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A398550)
#define IDHCGOGAILI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A398670)

inline static constexpr unsigned int IDHCGOGAILI_TypeDefinitionIndex = 40588;

class IDHCGOGAILI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* JKIOOFPIHLG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GIEBFLOGIFI; // 0x20
	::UnityEngine::RectTransform* FLGHHPGNMHH; // 0x28
	::UnityEngine::RectTransform* MMCBKJHPGJF; // 0x30
	::UnityEngine::RectTransform* DHPBECOLGHM; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHCGOGAILI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IDHCGOGAILI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IDHCGOGAILI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
