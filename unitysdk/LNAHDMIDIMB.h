#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LNAHDMIDIMB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D3D1D0)
#define LNAHDMIDIMB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14D3D140)
#define LNAHDMIDIMB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D3CFC0)
#define LNAHDMIDIMB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D3D1C0)

inline static constexpr unsigned int LNAHDMIDIMB_TypeDefinitionIndex = 49077;

class LNAHDMIDIMB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* EPDJDKJFBHP; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28
	::MoleMole::UIGeneralButtonController* PMBLECALCKB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAHDMIDIMB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNAHDMIDIMB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LNAHDMIDIMB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAHDMIDIMB_KGEBDLGBGNM_OFFSET))(this);
	}
};
