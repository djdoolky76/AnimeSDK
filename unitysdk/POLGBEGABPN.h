#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define POLGBEGABPN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C1E4B80)
#define POLGBEGABPN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C1E4AB0)
#define POLGBEGABPN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C1E4820)
#define POLGBEGABPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E4B70)

inline static constexpr unsigned int POLGBEGABPN_TypeDefinitionIndex = 38378;

class POLGBEGABPN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DLFDLGKNLNH; // 0x18
	::UnityEngine::GameObject* ACLFJBANMJL; // 0x20
	::UnityEngine::Transform* HNJKEIAGGEC; // 0x28
	::UnityEngine::GameObject* FNJAEKAMGPO; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MAAPEBKFIGG; // 0x38
	::MoleMole::NotificationBadgeEx* BCCGJIIEOBK; // 0x40
	::UnityEngine::GameObject* NGJIBEFMEAF; // 0x48
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x50
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x58
	::UnityEngine::Transform* HHBCKGFEABN; // 0x60
	::UnityEngine::GameObject* CONPMIIPPOP; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* FDOGGANACAP; // 0x70
	::FGCOIBFFCHB* PMNEIGANGCE; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLGBEGABPN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POLGBEGABPN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POLGBEGABPN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POLGBEGABPN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
