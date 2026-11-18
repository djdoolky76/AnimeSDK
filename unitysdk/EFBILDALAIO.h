#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EFBILDALAIO_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x16BDB3F0)
#define EFBILDALAIO_GMOHIOEDHOO_OFFSET UNITYSDK_OFFSET(0x16BDB5F0)
#define EFBILDALAIO_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x16BDB5C0)
#define EFBILDALAIO_NBBAJKPFODN_OFFSET UNITYSDK_OFFSET(0x16BDB5E0)
#define EFBILDALAIO_NGKMNINKOKA_OFFSET UNITYSDK_OFFSET(0x16BDB5D0)
#define EFBILDALAIO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BDB340)
#define EFBILDALAIO__CTOR_OFFSET UNITYSDK_OFFSET(0x16BDB530)

inline static constexpr unsigned int EFBILDALAIO_TypeDefinitionIndex = 53082;

class EFBILDALAIO : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* _PFONOBKABKP_k__BackingField; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* _LPLEJMKFCLJ_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBILDALAIO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EFBILDALAIO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::UnityEngine::UI::Extension::UILocalizationText* IFDIOIOCGDP()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBILDALAIO_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Void NGKMNINKOKA(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + EFBILDALAIO_NGKMNINKOKA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NBBAJKPFODN(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + EFBILDALAIO_NBBAJKPFODN_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::UI::Extension::UILocalizationText* GMOHIOEDHOO()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBILDALAIO_GMOHIOEDHOO_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBILDALAIO_EFKGNFCEENK_OFFSET))(this);
	}
};
