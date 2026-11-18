#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BMOPKNJFLNN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x128B4590)
#define BMOPKNJFLNN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x128B4490)
#define BMOPKNJFLNN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x128B4210)
#define BMOPKNJFLNN__CTOR_OFFSET UNITYSDK_OFFSET(0x128B4580)

inline static constexpr unsigned int BMOPKNJFLNN_TypeDefinitionIndex = 50193;

class BMOPKNJFLNN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* NPHPKPAPBNF; // 0x18
	::MoleMole::NotificationBadgeEx* LOIPICFDAJF; // 0x20
	::LGINJIKKBJA* NNGCMECPIFK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* INAHFGKEKEN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PCLNFDNGEBL; // 0x38
	::LGINJIKKBJA* LCKPCHNNMNK; // 0x40
	::LGINJIKKBJA* DKJCIEIHKCL; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* KNOLBGPOKOO; // 0x50
	::MonoUITableScrollV2* EOMFDCFLCDK; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* BPGODNEMNOO; // 0x60
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* MIOEGBOMLNB; // 0x70
	::UnityEngine::GameObject* IEKDCIKOCNG; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOPKNJFLNN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BMOPKNJFLNN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOPKNJFLNN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BMOPKNJFLNN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
