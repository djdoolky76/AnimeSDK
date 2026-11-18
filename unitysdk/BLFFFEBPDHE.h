#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
class UISinWaveGraphic;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }

#define BLFFFEBPDHE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x113EF630)
#define BLFFFEBPDHE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x113EF4C0)
#define BLFFFEBPDHE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x113EF1D0)
#define BLFFFEBPDHE__CTOR_OFFSET UNITYSDK_OFFSET(0x113EF620)

inline static constexpr unsigned int BLFFFEBPDHE_TypeDefinitionIndex = 41253;

class BLFFFEBPDHE : public ::GIBMJLOJLKD
{
public:
	::UISinWaveGraphic* DFEJCDJLFMI; // 0x18
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x20
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x28
	::UnityEngine::CanvasGroup* BAPBGCKGNED; // 0x30
	::LGINJIKKBJA* DBLENIKOHBE; // 0x38
	::GCIMMDDIFBJ* AMJHMKIMGDM; // 0x40
	::UISinWaveGraphic* JMDAHDABEOG; // 0x48
	::GCIMMDDIFBJ* IEAMKEBCLDN; // 0x50
	::LGINJIKKBJA* KFAJJLIJBND; // 0x58
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x60
	::UISinWaveGraphic* KNJBJPNHMOC; // 0x68
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x70
	::LGINJIKKBJA* PFIABJFPKDG; // 0x78
	::LGINJIKKBJA* IFPGHIHCCFG; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFFFEBPDHE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLFFFEBPDHE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFFFEBPDHE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLFFFEBPDHE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
