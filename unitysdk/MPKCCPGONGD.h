#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MPKCCPGONGD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x177DA890)
#define MPKCCPGONGD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x177DA7E0)
#define MPKCCPGONGD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x177DA630)
#define MPKCCPGONGD__CTOR_OFFSET UNITYSDK_OFFSET(0x177DA880)

inline static constexpr unsigned int MPKCCPGONGD_TypeDefinitionIndex = 86655;

class MPKCCPGONGD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NOEKPEFCIND; // 0x18
	::FGCOIBFFCHB* OBCKPKGFGCF; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* OGDKDKGNMOE; // 0x28
	::LGINJIKKBJA* GHCOFLDPCPE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKCCPGONGD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPKCCPGONGD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPKCCPGONGD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKCCPGONGD_KGEBDLGBGNM_OFFSET))(this);
	}
};
