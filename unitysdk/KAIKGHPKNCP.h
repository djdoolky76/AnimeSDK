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

#define KAIKGHPKNCP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x194892D0)
#define KAIKGHPKNCP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x194891D0)
#define KAIKGHPKNCP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19488FE0)
#define KAIKGHPKNCP__CTOR_OFFSET UNITYSDK_OFFSET(0x194892C0)

inline static constexpr unsigned int KAIKGHPKNCP_TypeDefinitionIndex = 43925;

class KAIKGHPKNCP : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x20
	::FGCOIBFFCHB* MDKJDDANKMP; // 0x28
	::FGCOIBFFCHB* AOOKLBACKMK; // 0x30
	::UnityEngine::RectTransform* JOBJDBBKHBM; // 0x38
	::LGINJIKKBJA* EBAOFIJCMEP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIKGHPKNCP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KAIKGHPKNCP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KAIKGHPKNCP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIKGHPKNCP_KGEBDLGBGNM_OFFSET))(this);
	}
};
