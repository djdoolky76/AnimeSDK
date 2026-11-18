#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KOAHHNJBCOI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A2D8790)
#define KOAHHNJBCOI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A2D8700)
#define KOAHHNJBCOI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A2D8580)
#define KOAHHNJBCOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D8780)

inline static constexpr unsigned int KOAHHNJBCOI_TypeDefinitionIndex = 59684;

class KOAHHNJBCOI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* GKGEGHKELGH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MGLJHABNDJO; // 0x20
	::UnityEngine::RectTransform* JNIAEBKPLBP; // 0x28
	::LGINJIKKBJA* NIENBJEFKAF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAHHNJBCOI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KOAHHNJBCOI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KOAHHNJBCOI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAHHNJBCOI_KGEBDLGBGNM_OFFSET))(this);
	}
};
