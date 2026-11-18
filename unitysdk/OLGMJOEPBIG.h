#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OLGMJOEPBIG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F7B7C0)
#define OLGMJOEPBIG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F7B6A0)
#define OLGMJOEPBIG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F7B460)
#define OLGMJOEPBIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7B7B0)

inline static constexpr unsigned int OLGMJOEPBIG_TypeDefinitionIndex = 48943;

class OLGMJOEPBIG : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* MMIKGCDPBHE; // 0x18
	::LGINJIKKBJA* KCOCGEGCHGF; // 0x20
	::UnityEngine::RectTransform* MFAIIDJEIHO; // 0x28
	::LGINJIKKBJA* EDOEMEEOLDF; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* ANIENOINHGK; // 0x38
	::LGINJIKKBJA* MKFMJKFNNBC; // 0x40
	::LGINJIKKBJA* OPNHECLCCLC; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* DPJAOKBJEJE; // 0x50
	::UnityEngine::RectTransform* DNFPBDNJDEJ; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* IEBAIFDBDNM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGMJOEPBIG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLGMJOEPBIG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLGMJOEPBIG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLGMJOEPBIG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
