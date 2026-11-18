#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MIOCCNBPHDF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x131905A0)
#define MIOCCNBPHDF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x131904D0)
#define MIOCCNBPHDF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13190230)
#define MIOCCNBPHDF__CTOR_OFFSET UNITYSDK_OFFSET(0x13190590)

inline static constexpr unsigned int MIOCCNBPHDF_TypeDefinitionIndex = 85386;

class MIOCCNBPHDF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* OEGGFAEBMGM; // 0x18
	::UnityEngine::Transform* FOGDDMCKIMH; // 0x20
	::UnityEngine::Transform* GJLMPCMDOGD; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* GJHMOHDIJOC; // 0x38
	::FGCOIBFFCHB* LBMPDPJKNJH; // 0x40
	::UnityEngine::Transform* IOAAHPKLJMO; // 0x48
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* HFILCGNGJBK; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* DKHEGNFOPKA; // 0x60
	::LGINJIKKBJA* IOIANILNPPI; // 0x68
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x70
	::MoleMole::NotificationBadgeEx* GMABNNKNIIF; // 0x78
	::UnityEngine::Transform* GDLCCFGKNBD; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIOCCNBPHDF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIOCCNBPHDF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIOCCNBPHDF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIOCCNBPHDF_KGEBDLGBGNM_OFFSET))(this);
	}
};
