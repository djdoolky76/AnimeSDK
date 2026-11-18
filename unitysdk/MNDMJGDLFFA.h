#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MNDMJGDLFFA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1302C3D0)
#define MNDMJGDLFFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1302C310)
#define MNDMJGDLFFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1302C3C0)

inline static constexpr unsigned int MNDMJGDLFFA_TypeDefinitionIndex = 50831;

class MNDMJGDLFFA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* GJOCGANNFDP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* PMCNDKMMFDG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDMJGDLFFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNDMJGDLFFA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNDMJGDLFFA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
