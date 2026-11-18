#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MNCFBOMIAEG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1077D070)
#define MNCFBOMIAEG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1077CEE0)
#define MNCFBOMIAEG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1077CB90)
#define MNCFBOMIAEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1077D060)

inline static constexpr unsigned int MNCFBOMIAEG_TypeDefinitionIndex = 40667;

class MNCFBOMIAEG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* MGEDBKBHJPM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NJMKEKOCJFF; // 0x20
	::UnityEngine::Transform* ODPHCLMJAOE; // 0x28
	::FGCOIBFFCHB* MNPAKJLEMKH; // 0x30
	::LGINJIKKBJA* EHANLMBGMGJ; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* OCNBPDAGDOL; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* DECNCCKMGFP; // 0x48
	::FGCOIBFFCHB* NLLOCEAJDIP; // 0x50
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x58
	::FILNFMCNCFE* GCGLJEEMKLA; // 0x60
	::FGCOIBFFCHB* JHHLAJCHJJG; // 0x68
	::FGCOIBFFCHB* AIDNPHEBHCB; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* CLHJICMMIEF; // 0x80
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* CGKOIBMEAFH; // 0x90
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFBOMIAEG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNCFBOMIAEG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNCFBOMIAEG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFBOMIAEG_KGEBDLGBGNM_OFFSET))(this);
	}
};
