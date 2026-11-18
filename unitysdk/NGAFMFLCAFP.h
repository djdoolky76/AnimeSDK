#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NGAFMFLCAFP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1AE1C8E0)
#define NGAFMFLCAFP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1AE1C830)
#define NGAFMFLCAFP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1AE1C690)
#define NGAFMFLCAFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE1C8D0)

inline static constexpr unsigned int NGAFMFLCAFP_TypeDefinitionIndex = 68865;

class NGAFMFLCAFP : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::MoleMole::MonoGamepadSelectable* JNGDADACCCH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30
	::LGINJIKKBJA* KFOKPEHEAPI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAFMFLCAFP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGAFMFLCAFP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGAFMFLCAFP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAFMFLCAFP_KGEBDLGBGNM_OFFSET))(this);
	}
};
