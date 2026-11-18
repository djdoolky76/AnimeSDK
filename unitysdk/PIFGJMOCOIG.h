#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PIFGJMOCOIG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B9E69A0)
#define PIFGJMOCOIG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B9E6910)
#define PIFGJMOCOIG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B9E6760)
#define PIFGJMOCOIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E6990)

inline static constexpr unsigned int PIFGJMOCOIG_TypeDefinitionIndex = 47022;

class PIFGJMOCOIG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::MonoUITableScrollV2* FELHNKBNJOM; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* CPPBEJCMFME; // 0x28
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PBBPJNPCIEK; // 0x38
	::MonoUITableScrollV2* EICJGENADAK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFGJMOCOIG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIFGJMOCOIG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIFGJMOCOIG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIFGJMOCOIG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
