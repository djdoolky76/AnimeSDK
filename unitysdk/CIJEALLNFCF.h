#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CIJEALLNFCF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1970D350)
#define CIJEALLNFCF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1970D2C0)
#define CIJEALLNFCF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1970D0F0)
#define CIJEALLNFCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1970D340)

inline static constexpr unsigned int CIJEALLNFCF_TypeDefinitionIndex = 53778;

class CIJEALLNFCF : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x20
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x28
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x30
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x38
	::LGINJIKKBJA* PDACHPLBKIE; // 0x40
	::MoleMole::UIGeneralButtonController* LKIIFLODLAH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJEALLNFCF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CIJEALLNFCF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJEALLNFCF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CIJEALLNFCF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
