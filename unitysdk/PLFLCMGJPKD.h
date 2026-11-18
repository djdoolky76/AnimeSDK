#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PLFLCMGJPKD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1D1EAFC0)
#define PLFLCMGJPKD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1D1EAED0)
#define PLFLCMGJPKD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1D1EACA0)
#define PLFLCMGJPKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1EAFB0)

inline static constexpr unsigned int PLFLCMGJPKD_TypeDefinitionIndex = 77802;

class PLFLCMGJPKD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x28
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* ADCKJILGMKK; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* OKNMIFKKIIO; // 0x40
	::MonoUITableScrollV2* HEIAEFIDLAK; // 0x48
	::UnityEngine::Transform* OOENDNEIFDO; // 0x50
	::FGCOIBFFCHB* EKLKJGICHFB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFLCMGJPKD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PLFLCMGJPKD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PLFLCMGJPKD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFLCMGJPKD_KGEBDLGBGNM_OFFSET))(this);
	}
};
