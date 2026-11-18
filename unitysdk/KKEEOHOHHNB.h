#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define KKEEOHOHHNB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x176612C0)
#define KKEEOHOHHNB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x176611C0)
#define KKEEOHOHHNB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17660F20)
#define KKEEOHOHHNB__CTOR_OFFSET UNITYSDK_OFFSET(0x176612B0)

inline static constexpr unsigned int KKEEOHOHHNB_TypeDefinitionIndex = 38925;

class KKEEOHOHHNB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITabButtonGroup* CKBCJBHOOLM; // 0x18
	::UnityEngine::UI::Extension::UITabButton* BDGNBJILFKG; // 0x20
	::UnityEngine::UI::Extension::UITabButtonGroup* EBKLGPKMMEL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* CGKOIBMEAFH; // 0x30
	::FGCOIBFFCHB* PBBHIOABJLP; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MKNMNKALJLM; // 0x40
	::UnityEngine::UI::Extension::UITabButton* KLPLHFNHIBI; // 0x48
	::UnityEngine::UI::Extension::UITabButton* HPPGIOLKCJJ; // 0x50
	::LGINJIKKBJA* EHANLMBGMGJ; // 0x58
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x60
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x70
	::FGCOIBFFCHB* LKABCAJPCHI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEEOHOHHNB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KKEEOHOHHNB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KKEEOHOHHNB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEEOHOHHNB_KGEBDLGBGNM_OFFSET))(this);
	}
};
