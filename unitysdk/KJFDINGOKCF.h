#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KJFDINGOKCF_COJAMOKNCAK_OFFSET UNITYSDK_OFFSET(0x13C68DE0)
#define KJFDINGOKCF_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x13C68C70)
#define KJFDINGOKCF_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x13C68DD0)
#define KJFDINGOKCF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C68BD0)
#define KJFDINGOKCF__CTOR_OFFSET UNITYSDK_OFFSET(0x13C68D40)

inline static constexpr unsigned int KJFDINGOKCF_TypeDefinitionIndex = 79656;

class KJFDINGOKCF : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* _MEFGOFNPPMO_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFDINGOKCF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJFDINGOKCF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::UnityEngine::UI::Extension::UILocalizationText* LNLNHEMFAEC()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFDINGOKCF_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFDINGOKCF_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void COJAMOKNCAK(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + KJFDINGOKCF_COJAMOKNCAK_OFFSET))(this, EGEGIMGMJHN);
	}
};
