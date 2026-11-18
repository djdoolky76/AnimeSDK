#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define PEAKPJIFIEI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17321E90)
#define PEAKPJIFIEI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17321DC0)
#define PEAKPJIFIEI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17321BC0)
#define PEAKPJIFIEI__CTOR_OFFSET UNITYSDK_OFFSET(0x17321E80)

inline static constexpr unsigned int PEAKPJIFIEI_TypeDefinitionIndex = 74083;

class PEAKPJIFIEI : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BLNHBKCFGEB; // 0x18
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x20
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x28
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x30
	::UnityEngine::GameObject* IMDLHCPGEDN; // 0x38
	::UnityEngine::UI::Extension::UITabButton* HJIHNMPIEJL; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x48
	::FGCOIBFFCHB* HHKEMPOBDKA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEAKPJIFIEI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEAKPJIFIEI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEAKPJIFIEI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEAKPJIFIEI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
