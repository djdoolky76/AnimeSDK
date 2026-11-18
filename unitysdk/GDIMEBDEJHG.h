#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GDIMEBDEJHG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F130D0)
#define GDIMEBDEJHG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F13020)
#define GDIMEBDEJHG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F12E30)
#define GDIMEBDEJHG__CTOR_OFFSET UNITYSDK_OFFSET(0x15F130C0)

inline static constexpr unsigned int GDIMEBDEJHG_TypeDefinitionIndex = 86045;

class GDIMEBDEJHG : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::GCIMMDDIFBJ* OOMGDIIHIGG; // 0x20
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* KMKBNPMPECM; // 0x30
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x38
	::UnityEngine::GameObject* AAJHAHBDHEF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIMEBDEJHG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDIMEBDEJHG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDIMEBDEJHG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIMEBDEJHG_KGEBDLGBGNM_OFFSET))(this);
	}
};
