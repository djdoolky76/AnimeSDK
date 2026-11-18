#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BCOAMAACJNG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF78EDF0)
#define BCOAMAACJNG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF78ED60)
#define BCOAMAACJNG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF78EBE0)
#define BCOAMAACJNG__CTOR_OFFSET UNITYSDK_OFFSET(0xF78EDE0)

inline static constexpr unsigned int BCOAMAACJNG_TypeDefinitionIndex = 67106;

class BCOAMAACJNG : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* LLDLKLIMDFJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PLAEINEAEGI; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MFGPCFNAPHA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOAMAACJNG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCOAMAACJNG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCOAMAACJNG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOAMAACJNG_KGEBDLGBGNM_OFFSET))(this);
	}
};
