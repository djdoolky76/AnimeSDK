#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EMAPMDHLKPE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x158C0680)
#define EMAPMDHLKPE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x158C0590)
#define EMAPMDHLKPE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x158C0340)
#define EMAPMDHLKPE__CTOR_OFFSET UNITYSDK_OFFSET(0x158C0670)

inline static constexpr unsigned int EMAPMDHLKPE_TypeDefinitionIndex = 72254;

class EMAPMDHLKPE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KONPMOGCPID; // 0x18
	::UnityEngine::Transform* HBOPDCKGIAJ; // 0x20
	::UnityEngine::Transform* DPANKLIDOAH; // 0x28
	::LGINJIKKBJA* LKAIHEEMNGO; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38
	::UnityEngine::Transform* OCOJFKMOKMK; // 0x40
	::UnityEngine::Transform* HPLLKDFLOJP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* HDKKJDHAEDK; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* NINIFMIBDIE; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* ECNCCPAHBMD; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* LLENNJEMEEJ; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAPMDHLKPE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMAPMDHLKPE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMAPMDHLKPE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAPMDHLKPE_KGEBDLGBGNM_OFFSET))(this);
	}
};
