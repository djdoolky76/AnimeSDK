#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PMHKOHCKOCG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1D1F5100)
#define PMHKOHCKOCG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1D1F5070)
#define PMHKOHCKOCG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1D1F4F00)
#define PMHKOHCKOCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F50F0)

inline static constexpr unsigned int PMHKOHCKOCG_TypeDefinitionIndex = 43674;

class PMHKOHCKOCG : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* GJLKPEACOBG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* EPBIMGGNJFP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BGFHOBEIDKO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHKOHCKOCG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMHKOHCKOCG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMHKOHCKOCG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHKOHCKOCG_KGEBDLGBGNM_OFFSET))(this);
	}
};
