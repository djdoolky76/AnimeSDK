#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FOMJBPGLHAM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x156D1FC0)
#define FOMJBPGLHAM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x156D1F30)
#define FOMJBPGLHAM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x156D1DE0)
#define FOMJBPGLHAM__CTOR_OFFSET UNITYSDK_OFFSET(0x156D1FB0)

inline static constexpr unsigned int FOMJBPGLHAM_TypeDefinitionIndex = 50022;

class FOMJBPGLHAM : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMJBPGLHAM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FOMJBPGLHAM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FOMJBPGLHAM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMJBPGLHAM_KGEBDLGBGNM_OFFSET))(this);
	}
};
