#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MPCMDHHMHJB;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HLKLHBOHMBB_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x14957A20)
#define HLKLHBOHMBB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14957980)
#define HLKLHBOHMBB_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x14957890)
#define HLKLHBOHMBB_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x149577D0)
#define HLKLHBOHMBB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14957720)
#define HLKLHBOHMBB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14957550)
#define HLKLHBOHMBB__CTOR_OFFSET UNITYSDK_OFFSET(0x149577C0)

inline static constexpr unsigned int HLKLHBOHMBB_TypeDefinitionIndex = 49511;

class HLKLHBOHMBB : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AAJIHFCEABI; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* NKADAPNGKAI; // 0x40
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKLHBOHMBB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLKLHBOHMBB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ(::MPCMDHHMHJB* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::MPCMDHHMHJB*))((::PBYTE)hIl2Cpp + HLKLHBOHMBB_KDGMEFEJMGJ_OFFSET))(this, AEJAMJDBHAM);
	}

	static ::HLKLHBOHMBB* KDGMEFEJMGJ_1(::MPCMDHHMHJB* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::HLKLHBOHMBB*(*)(::MPCMDHHMHJB*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLKLHBOHMBB_KDGMEFEJMGJ_1_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLKLHBOHMBB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLKLHBOHMBB_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLKLHBOHMBB_KGEBDLGBGNM_OFFSET))(this);
	}
};
