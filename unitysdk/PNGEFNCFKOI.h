#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PNGEFNCFKOI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C2C59B0)
#define PNGEFNCFKOI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C2C58C0)
#define PNGEFNCFKOI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C2C5690)
#define PNGEFNCFKOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C59A0)

inline static constexpr unsigned int PNGEFNCFKOI_TypeDefinitionIndex = 89141;

class PNGEFNCFKOI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* APANPPCMCHK; // 0x18
	::LGINJIKKBJA* DNLDJKDCCEP; // 0x20
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x30
	::UnityEngine::RectTransform* JNIAEBKPLBP; // 0x38
	::UnityEngine::GameObject* BPDONKAIKAB; // 0x40
	::UnityEngine::GameObject* MFBEGIODLLD; // 0x48
	::UnityEngine::GameObject* MJMHFKFBMGD; // 0x50
	::UnityEngine::GameObject* BGFLCLGJKEF; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGEFNCFKOI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNGEFNCFKOI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGEFNCFKOI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNGEFNCFKOI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
