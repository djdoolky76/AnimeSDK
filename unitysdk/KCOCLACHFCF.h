#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MPCMDHHMHJB;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KCOCLACHFCF_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x17B6E6D0)
#define KCOCLACHFCF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B6E9D0)
#define KCOCLACHFCF_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x17B6E8F0)
#define KCOCLACHFCF_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x17B6E800)
#define KCOCLACHFCF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17B6E600)
#define KCOCLACHFCF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B6E3A0)
#define KCOCLACHFCF__CTOR_OFFSET UNITYSDK_OFFSET(0x17B6E6C0)

inline static constexpr unsigned int KCOCLACHFCF_TypeDefinitionIndex = 53884;

class KCOCLACHFCF : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::GameObject* EKFNNJIKOPL; // 0x18
	::UnityEngine::GameObject* CONBBLDCMED; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x28
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x30
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0x38
	::UnityEngine::GameObject* JFMEGBECFML; // 0x40
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x48
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x50
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x58
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOCLACHFCF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCOCLACHFCF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCOCLACHFCF_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	static ::KCOCLACHFCF* KDGMEFEJMGJ(::MPCMDHHMHJB* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::KCOCLACHFCF*(*)(::MPCMDHHMHJB*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCOCLACHFCF_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOCLACHFCF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ_1(::MPCMDHHMHJB* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::MPCMDHHMHJB*))((::PBYTE)hIl2Cpp + KCOCLACHFCF_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCOCLACHFCF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
