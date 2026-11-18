#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FFOCGBCBBCP_APANJDNEJPM_OFFSET UNITYSDK_OFFSET(0x156B94F0)
#define FFOCGBCBBCP_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x156B9300)
#define FFOCGBCBBCP_GJGDAGLFAFP_OFFSET UNITYSDK_OFFSET(0x156B9500)
#define FFOCGBCBBCP_JFNBMOEDJKH_OFFSET UNITYSDK_OFFSET(0x156B94D0)
#define FFOCGBCBBCP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x156B9280)
#define FFOCGBCBBCP_MNBGAIEPADE_OFFSET UNITYSDK_OFFSET(0x156B94E0)
#define FFOCGBCBBCP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x156B9120)
#define FFOCGBCBBCP__CTOR_OFFSET UNITYSDK_OFFSET(0x156B9440)

inline static constexpr unsigned int FFOCGBCBBCP_TypeDefinitionIndex = 59839;

class FFOCGBCBBCP : public ::IOOIHHOJOPI
{
public:
	::FGCOIBFFCHB* _ALFLGOHLNFC_k__BackingField; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* _DLLGHOCLHNL_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOCGBCBBCP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFOCGBCBBCP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::FGCOIBFFCHB* JFNBMOEDJKH()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOCGBCBBCP_JFNBMOEDJKH_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* MNBGAIEPADE()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOCGBCBBCP_MNBGAIEPADE_OFFSET))(this);
	}

	::System::Void APANJDNEJPM(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + FFOCGBCBBCP_APANJDNEJPM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOCGBCBBCP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFOCGBCBBCP_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void GJGDAGLFAFP(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + FFOCGBCBBCP_GJGDAGLFAFP_OFFSET))(this, EGEGIMGMJHN);
	}
};
