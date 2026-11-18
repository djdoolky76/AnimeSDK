#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DHGPFFFJOBM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x147CAED0)
#define DHGPFFFJOBM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x147CAE00)
#define DHGPFFFJOBM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x147CAC10)
#define DHGPFFFJOBM__CTOR_OFFSET UNITYSDK_OFFSET(0x147CAEC0)

inline static constexpr unsigned int DHGPFFFJOBM_TypeDefinitionIndex = 64025;

class DHGPFFFJOBM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x20
	::LGINJIKKBJA* EODJEDEDIEO; // 0x28
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x30
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x38
	::LGINJIKKBJA* CJCFAJBNBIL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGPFFFJOBM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DHGPFFFJOBM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGPFFFJOBM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DHGPFFFJOBM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
