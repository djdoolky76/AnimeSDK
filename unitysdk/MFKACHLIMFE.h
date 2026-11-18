#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MFKACHLIMFE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14DE03C0)
#define MFKACHLIMFE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14DE0310)
#define MFKACHLIMFE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14DE0070)
#define MFKACHLIMFE__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE03B0)

inline static constexpr unsigned int MFKACHLIMFE_TypeDefinitionIndex = 63607;

class MFKACHLIMFE : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* NNGCMECPIFK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HDKKJDHAEDK; // 0x20
	::MoleMole::UIGeneralButtonController* OEEDEBIOPBL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* ANJHBOPMBKG; // 0x30
	::UnityEngine::RectTransform* PMBLECALCKB; // 0x38
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x40
	::LGINJIKKBJA* CJBOGNKLKFJ; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HFILCGNGJBK; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* NINIFMIBDIE; // 0x58
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x60
	::UnityEngine::RectTransform* KEPLBCCJBHI; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* HKIPALPLCEN; // 0x70
	::MoleMole::MonoGamepadCustomList* NGELIGHHNGF; // 0x78
	::MoleMole::NotificationBadgeEx* FAMGGAKGHLE; // 0x80
	::UnityEngine::RectTransform* AFKNADHJJLJ; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKACHLIMFE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MFKACHLIMFE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFKACHLIMFE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MFKACHLIMFE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
