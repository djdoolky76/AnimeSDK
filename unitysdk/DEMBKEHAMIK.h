#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DEMBKEHAMIK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A1DD020)
#define DEMBKEHAMIK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A1DCF50)
#define DEMBKEHAMIK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A1DCD20)
#define DEMBKEHAMIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1DD010)

inline static constexpr unsigned int DEMBKEHAMIK_TypeDefinitionIndex = 65014;

class DEMBKEHAMIK : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* LMKANBIHAHB; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x28
	::LGINJIKKBJA* LNPKAEMOJGD; // 0x30
	::MoleMole::UIGeneralButtonController* MAPJABKIKLD; // 0x38
	::UnityEngine::RectTransform* GKMDDOPPNJH; // 0x40
	::FGCOIBFFCHB* EBJGCPGCOLN; // 0x48
	::LGINJIKKBJA* KBCLEFAKGHE; // 0x50
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMBKEHAMIK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DEMBKEHAMIK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DEMBKEHAMIK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMBKEHAMIK_KGEBDLGBGNM_OFFSET))(this);
	}
};
