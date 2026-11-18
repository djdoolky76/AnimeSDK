#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NHANGNFLDPA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12893B60)
#define NHANGNFLDPA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12893AB0)
#define NHANGNFLDPA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12893830)
#define NHANGNFLDPA__CTOR_OFFSET UNITYSDK_OFFSET(0x12893B50)

inline static constexpr unsigned int NHANGNFLDPA_TypeDefinitionIndex = 62484;

class NHANGNFLDPA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* MGGBNCKBCFB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x20
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MANKFLINDDF; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* DBFEJDBFLAC; // 0x48
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x50
	::ADEJAGFCBHK* IGLLLLGNOIM; // 0x58
	::MoleMole::MonoGamepadCustomList* HDCAKKPKCDG; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* KPFIJPEPNMO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHANGNFLDPA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHANGNFLDPA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHANGNFLDPA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHANGNFLDPA_KGEBDLGBGNM_OFFSET))(this);
	}
};
