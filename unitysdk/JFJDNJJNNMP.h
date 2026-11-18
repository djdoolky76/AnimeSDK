#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JFJDNJJNNMP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13CB9410)
#define JFJDNJJNNMP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13CB9380)
#define JFJDNJJNNMP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13CB9200)
#define JFJDNJJNNMP__CTOR_OFFSET UNITYSDK_OFFSET(0x13CB9400)

inline static constexpr unsigned int JFJDNJJNNMP_TypeDefinitionIndex = 83619;

class JFJDNJJNNMP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* FOKAHHGDAHL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GCBBLCHMMKC; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HMJKKMLBFAK; // 0x28
	::LGINJIKKBJA* CEFBKCCMABN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJDNJJNNMP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JFJDNJJNNMP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JFJDNJJNNMP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJDNJJNNMP_KGEBDLGBGNM_OFFSET))(this);
	}
};
