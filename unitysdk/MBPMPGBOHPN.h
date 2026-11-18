#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MBPMPGBOHPN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18525550)
#define MBPMPGBOHPN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18525410)
#define MBPMPGBOHPN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18525230)
#define MBPMPGBOHPN__CTOR_OFFSET UNITYSDK_OFFSET(0x18525540)

inline static constexpr unsigned int MBPMPGBOHPN_TypeDefinitionIndex = 39405;

class MBPMPGBOHPN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* CCOPHCPCIAA; // 0x18
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::LGINJIKKBJA* CJBOGNKLKFJ; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* MHPIOFJPCFE; // 0x38
	::MoleMole::NotificationBadgeEx* HEHGIBHCPED; // 0x40
	::LGINJIKKBJA* NFMOOAHNCKI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPMPGBOHPN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBPMPGBOHPN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBPMPGBOHPN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPMPGBOHPN_KGEBDLGBGNM_OFFSET))(this);
	}
};
