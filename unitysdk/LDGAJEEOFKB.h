#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LDGAJEEOFKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15BB8590)
#define LDGAJEEOFKB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15BB8480)
#define LDGAJEEOFKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15BB8230)
#define LDGAJEEOFKB__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB8580)

inline static constexpr unsigned int LDGAJEEOFKB_TypeDefinitionIndex = 56164;

class LDGAJEEOFKB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* MCGPPADHCLJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::FGCOIBFFCHB* NLLLJNLDFMC; // 0x28
	::UnityEngine::GameObject* AHKNHJKFDCH; // 0x30
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x38
	::UnityEngine::GameObject* HMPNHFMMJBE; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* DICFJBHBNIA; // 0x48
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x50
	::FGCOIBFFCHB* KJIFELCKJKE; // 0x58
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGAJEEOFKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LDGAJEEOFKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LDGAJEEOFKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGAJEEOFKB_KGEBDLGBGNM_OFFSET))(this);
	}
};
