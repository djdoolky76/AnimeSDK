#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ABPIEEBIIFO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12CD53B0)
#define ABPIEEBIIFO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12CD5320)
#define ABPIEEBIIFO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12CD51B0)
#define ABPIEEBIIFO__CTOR_OFFSET UNITYSDK_OFFSET(0x12CD53A0)

inline static constexpr unsigned int ABPIEEBIIFO_TypeDefinitionIndex = 90831;

class ABPIEEBIIFO : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPIEEBIIFO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABPIEEBIIFO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABPIEEBIIFO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPIEEBIIFO_KGEBDLGBGNM_OFFSET))(this);
	}
};
