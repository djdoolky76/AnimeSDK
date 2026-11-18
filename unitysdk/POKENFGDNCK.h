#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define POKENFGDNCK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x194BD7E0)
#define POKENFGDNCK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x194BD710)
#define POKENFGDNCK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x194BD560)
#define POKENFGDNCK__CTOR_OFFSET UNITYSDK_OFFSET(0x194BD7D0)

inline static constexpr unsigned int POKENFGDNCK_TypeDefinitionIndex = 76828;

class POKENFGDNCK : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* PLINCOBCGIP; // 0x18
	::LGINJIKKBJA* BKDDKDMILCA; // 0x20
	::MoleMole::UIGeneralButtonController* PPMEMDEKAHL; // 0x28
	::MonoUITableScrollV2* OFJOLDGMCCD; // 0x30
	::UnityEngine::UI::Extension::UITabButtonGroup* KHGJEAJECCK; // 0x38
	::UnityEngine::RectTransform* FBPEFMHELDK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKENFGDNCK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POKENFGDNCK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POKENFGDNCK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKENFGDNCK_KGEBDLGBGNM_OFFSET))(this);
	}
};
