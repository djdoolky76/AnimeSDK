#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DEBONIFPKDA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x183341F0)
#define DEBONIFPKDA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18334140)
#define DEBONIFPKDA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18333FB0)
#define DEBONIFPKDA__CTOR_OFFSET UNITYSDK_OFFSET(0x183341E0)

inline static constexpr unsigned int DEBONIFPKDA_TypeDefinitionIndex = 51876;

class DEBONIFPKDA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* CPGOJAFHDBL; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBONIFPKDA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DEBONIFPKDA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DEBONIFPKDA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBONIFPKDA_KGEBDLGBGNM_OFFSET))(this);
	}
};
