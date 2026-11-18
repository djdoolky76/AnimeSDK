#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MPCMDHHMHJB;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NNJMLEJDBFP_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x172ABD50)
#define NNJMLEJDBFP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x172AC0F0)
#define NNJMLEJDBFP_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x172AC030)
#define NNJMLEJDBFP_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x172ABE80)
#define NNJMLEJDBFP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x172ABCA0)
#define NNJMLEJDBFP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x172ABAE0)
#define NNJMLEJDBFP__CTOR_OFFSET UNITYSDK_OFFSET(0x172ABD40)

inline static constexpr unsigned int NNJMLEJDBFP_TypeDefinitionIndex = 52455;

class NNJMLEJDBFP : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AAJIHFCEABI; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* NKADAPNGKAI; // 0x28
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJMLEJDBFP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NNJMLEJDBFP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNJMLEJDBFP_KGEBDLGBGNM_OFFSET))(this);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NNJMLEJDBFP_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	static ::NNJMLEJDBFP* KDGMEFEJMGJ(::MPCMDHHMHJB* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::NNJMLEJDBFP*(*)(::MPCMDHHMHJB*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NNJMLEJDBFP_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NNJMLEJDBFP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KDGMEFEJMGJ_1(::MPCMDHHMHJB* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::MPCMDHHMHJB*))((::PBYTE)hIl2Cpp + NNJMLEJDBFP_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}
};
