#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MKIFJOBKBAM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1216E910)
#define MKIFJOBKBAM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1216E840)
#define MKIFJOBKBAM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1216E6D0)
#define MKIFJOBKBAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1216E900)

inline static constexpr unsigned int MKIFJOBKBAM_TypeDefinitionIndex = 73758;

class MKIFJOBKBAM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* KBGHPLEIIJK; // 0x18
	::LGINJIKKBJA* OEIFHCEFEBG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HAJLGKMDJEB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIFJOBKBAM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MKIFJOBKBAM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MKIFJOBKBAM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIFJOBKBAM_KGEBDLGBGNM_OFFSET))(this);
	}
};
