#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define KBGEJMPDNDP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x130A8250)
#define KBGEJMPDNDP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x130A8110)
#define KBGEJMPDNDP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x130A7E30)
#define KBGEJMPDNDP__CTOR_OFFSET UNITYSDK_OFFSET(0x130A8240)

inline static constexpr unsigned int KBGEJMPDNDP_TypeDefinitionIndex = 83717;

class KBGEJMPDNDP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* FOGDDMCKIMH; // 0x18
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x20
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::MoleMole::NotificationBadge* GMABNNKNIIF; // 0x38
	::FGCOIBFFCHB* NHIJHPOKDDB; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* DKHEGNFOPKA; // 0x48
	::LGINJIKKBJA* DDPMCFOFMFA; // 0x50
	::UnityEngine::Transform* OEGGFAEBMGM; // 0x58
	::UnityEngine::Transform* IOAAHPKLJMO; // 0x60
	::FGCOIBFFCHB* IJFCBFNOPBI; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* HFILCGNGJBK; // 0x70
	::UnityEngine::Transform* GJLMPCMDOGD; // 0x78
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x80
	::MoleMole::NotificationBadge* LLFCKCPGLKG; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* GJHMOHDIJOC; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGEJMPDNDP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBGEJMPDNDP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGEJMPDNDP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBGEJMPDNDP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
