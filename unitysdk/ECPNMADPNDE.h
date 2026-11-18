#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ECPNMADPNDE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14142220)
#define ECPNMADPNDE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14142190)
#define ECPNMADPNDE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14142020)
#define ECPNMADPNDE__CTOR_OFFSET UNITYSDK_OFFSET(0x14142210)

inline static constexpr unsigned int ECPNMADPNDE_TypeDefinitionIndex = 70393;

class ECPNMADPNDE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CGKOIBMEAFH; // 0x18
	::LGINJIKKBJA* EHANLMBGMGJ; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPNMADPNDE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECPNMADPNDE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECPNMADPNDE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPNMADPNDE_KGEBDLGBGNM_OFFSET))(this);
	}
};
