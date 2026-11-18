#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CBAKNNPPMPN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1152D3C0)
#define CBAKNNPPMPN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1152D280)
#define CBAKNNPPMPN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1152CFE0)
#define CBAKNNPPMPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1152D3B0)

inline static constexpr unsigned int CBAKNNPPMPN_TypeDefinitionIndex = 84031;

class CBAKNNPPMPN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MKFLMIGNAHA; // 0x18
	::UnityEngine::UI::RawImage* IEPBOLFDAJP; // 0x20
	::LGINJIKKBJA* IANGJEEIJCP; // 0x28
	::UnityEngine::GameObject* EBDHJIJINAE; // 0x30
	::UnityEngine::GameObject* MLDHFJKCBBD; // 0x38
	::FGCOIBFFCHB* LBADFOIMEOG; // 0x40
	::UnityEngine::GameObject* IOFCGFMGBMM; // 0x48
	::LGINJIKKBJA* BBDMDDHKLEB; // 0x50
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x58
	::MonoUITableScrollV2* OLIDNLEMDAM; // 0x60
	::UnityEngine::GameObject* HAJHODMFKLC; // 0x68
	::UnityEngine::GameObject* NILBPKBGPCB; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* GIEBFLOGIFI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAKNNPPMPN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBAKNNPPMPN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAKNNPPMPN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBAKNNPPMPN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
