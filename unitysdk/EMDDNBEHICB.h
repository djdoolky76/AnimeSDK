#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EMDDNBEHICB_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x169B2360)
#define EMDDNBEHICB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x169B22E0)
#define EMDDNBEHICB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169B2150)
#define EMDDNBEHICB__CTOR_OFFSET UNITYSDK_OFFSET(0x169B2570)

inline static constexpr unsigned int EMDDNBEHICB_TypeDefinitionIndex = 52746;

class EMDDNBEHICB : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NONGIPHPBIN; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MDHHGDLPNFG; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* GCMMOGMHGGD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDDNBEHICB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMDDNBEHICB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDDNBEHICB_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDDNBEHICB_KGEBDLGBGNM_OFFSET))(this);
	}
};
