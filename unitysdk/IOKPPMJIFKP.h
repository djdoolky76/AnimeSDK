#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IOKPPMJIFKP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18714BC0)
#define IOKPPMJIFKP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18714B10)
#define IOKPPMJIFKP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18714940)
#define IOKPPMJIFKP__CTOR_OFFSET UNITYSDK_OFFSET(0x18714BB0)

inline static constexpr unsigned int IOKPPMJIFKP_TypeDefinitionIndex = 50410;

class IOKPPMJIFKP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* IOBBIDNNCHH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::LGINJIKKBJA* PMBLECALCKB; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* EHMLMJKEJMM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKPPMJIFKP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOKPPMJIFKP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKPPMJIFKP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOKPPMJIFKP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
