#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BGJDNLLGKAN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18562360)
#define BGJDNLLGKAN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18562260)
#define BGJDNLLGKAN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18562050)
#define BGJDNLLGKAN__CTOR_OFFSET UNITYSDK_OFFSET(0x18562350)

inline static constexpr unsigned int BGJDNLLGKAN_TypeDefinitionIndex = 67510;

class BGJDNLLGKAN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* MCPCOFPCKOF; // 0x18
	::FGCOIBFFCHB* DJBDCGFIGPE; // 0x20
	::LGINJIKKBJA* GENFGBPJOJC; // 0x28
	::UnityEngine::CanvasGroup* FEDNPODCPBE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* CKFAOJDHLLI; // 0x40
	::FGCOIBFFCHB* NMNMCIGILJN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJDNLLGKAN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BGJDNLLGKAN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BGJDNLLGKAN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJDNLLGKAN_KGEBDLGBGNM_OFFSET))(this);
	}
};
