#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GKJJPBNCGBL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13D5E370)
#define GKJJPBNCGBL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13D5E2A0)
#define GKJJPBNCGBL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13D5E080)
#define GKJJPBNCGBL__CTOR_OFFSET UNITYSDK_OFFSET(0x13D5E360)

inline static constexpr unsigned int GKJJPBNCGBL_TypeDefinitionIndex = 74014;

class GKJJPBNCGBL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* EMGOGAPAEJF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KIHGNGKBADE; // 0x20
	::UnityEngine::Transform* HHBCKGFEABN; // 0x28
	::LGINJIKKBJA* EADDCKNAFGG; // 0x30
	::UnityEngine::RectTransform* IMCIFOOMBPF; // 0x38
	::FGCOIBFFCHB* GJOCGANNFDP; // 0x40
	::FGCOIBFFCHB* PMNEIGANGCE; // 0x48
	::UnityEngine::Transform* HNJKEIAGGEC; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJJPBNCGBL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKJJPBNCGBL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKJJPBNCGBL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJJPBNCGBL_KGEBDLGBGNM_OFFSET))(this);
	}
};
