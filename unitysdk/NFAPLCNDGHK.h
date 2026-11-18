#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NFAPLCNDGHK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16B6B6A0)
#define NFAPLCNDGHK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16B6B610)
#define NFAPLCNDGHK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16B6B470)
#define NFAPLCNDGHK__CTOR_OFFSET UNITYSDK_OFFSET(0x16B6B690)

inline static constexpr unsigned int NFAPLCNDGHK_TypeDefinitionIndex = 60298;

class NFAPLCNDGHK : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* KIBLHKKKNCB; // 0x18
	::MonoUITableScrollV2* FOHAFOJDEIL; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28
	::MonoUITableScrollV2* EOMFDCFLCDK; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PCDFEPMEFNA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAPLCNDGHK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFAPLCNDGHK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAPLCNDGHK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFAPLCNDGHK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
