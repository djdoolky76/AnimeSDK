#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NAHNGLIFBCD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12C34AF0)
#define NAHNGLIFBCD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12C34A00)
#define NAHNGLIFBCD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12C34800)
#define NAHNGLIFBCD__CTOR_OFFSET UNITYSDK_OFFSET(0x12C34AE0)

inline static constexpr unsigned int NAHNGLIFBCD_TypeDefinitionIndex = 58442;

class NAHNGLIFBCD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* ADEPIHHHGEP; // 0x18
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* KDADINNPFAK; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* FDOGGANACAP; // 0x40
	::UnityEngine::UI::Text* MJJKDCEFEDH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHNGLIFBCD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAHNGLIFBCD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHNGLIFBCD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAHNGLIFBCD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
