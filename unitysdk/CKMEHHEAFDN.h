#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CKMEHHEAFDN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19A13C80)
#define CKMEHHEAFDN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19A13BB0)
#define CKMEHHEAFDN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19A13A60)
#define CKMEHHEAFDN__CTOR_OFFSET UNITYSDK_OFFSET(0x19A13C70)

inline static constexpr unsigned int CKMEHHEAFDN_TypeDefinitionIndex = 54233;

class CKMEHHEAFDN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMEHHEAFDN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CKMEHHEAFDN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CKMEHHEAFDN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMEHHEAFDN_KGEBDLGBGNM_OFFSET))(this);
	}
};
