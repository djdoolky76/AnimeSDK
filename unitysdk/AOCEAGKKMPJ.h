#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AOCEAGKKMPJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17DE3B10)
#define AOCEAGKKMPJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17DE39D0)
#define AOCEAGKKMPJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17DE3790)
#define AOCEAGKKMPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE3B00)

inline static constexpr unsigned int AOCEAGKKMPJ_TypeDefinitionIndex = 57717;

class AOCEAGKKMPJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* PBBHIOABJLP; // 0x18
	::UnityEngine::GameObject* KKMCLPDAJKJ; // 0x20
	::MoleMole::NotificationBadge* BGIIKLCKIGI; // 0x28
	::UnityEngine::GameObject* NOFCCGPPFGD; // 0x30
	::FGCOIBFFCHB* GDLCCFGKNBD; // 0x38
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x48
	::FGCOIBFFCHB* IMDLHCPGEDN; // 0x50
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOCEAGKKMPJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AOCEAGKKMPJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AOCEAGKKMPJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOCEAGKKMPJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
