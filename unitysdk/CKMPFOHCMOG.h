#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CKMPFOHCMOG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13269F00)
#define CKMPFOHCMOG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13269E00)
#define CKMPFOHCMOG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13269B90)
#define CKMPFOHCMOG__CTOR_OFFSET UNITYSDK_OFFSET(0x13269EF0)

inline static constexpr unsigned int CKMPFOHCMOG_TypeDefinitionIndex = 49721;

class CKMPFOHCMOG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NCDJFAMBGJF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HEIABMFAJNJ; // 0x20
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JOAMBBLECNK; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* OCHCHKMCAFG; // 0x40
	::MoleMole::UIGeneralButtonController* NGEOGFPEBLO; // 0x48
	::FGCOIBFFCHB* IBAPFELBGGL; // 0x50
	::LGINJIKKBJA* CIOJIFFAGBO; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* NBABBFOIAIB; // 0x60
	::LGINJIKKBJA* CLJHJANEBAF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMPFOHCMOG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CKMPFOHCMOG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMPFOHCMOG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CKMPFOHCMOG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
