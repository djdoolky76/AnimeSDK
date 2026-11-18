#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define BOKCADIJKCH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16933B60)
#define BOKCADIJKCH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16933A90)
#define BOKCADIJKCH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169338C0)
#define BOKCADIJKCH__CTOR_OFFSET UNITYSDK_OFFSET(0x16933B50)

inline static constexpr unsigned int BOKCADIJKCH_TypeDefinitionIndex = 38837;

class BOKCADIJKCH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* EBAOFIJCMEP; // 0x18
	::FGCOIBFFCHB* AOOKLBACKMK; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x28
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x30
	::UnityEngine::RectTransform* JOBJDBBKHBM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKCADIJKCH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BOKCADIJKCH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BOKCADIJKCH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKCADIJKCH_KGEBDLGBGNM_OFFSET))(this);
	}
};
