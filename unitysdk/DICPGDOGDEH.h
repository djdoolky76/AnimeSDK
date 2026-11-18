#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
class NMLHLBHFJBI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define DICPGDOGDEH_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x13E505D0)
#define DICPGDOGDEH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13E50700)
#define DICPGDOGDEH_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x13E50890)
#define DICPGDOGDEH_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x13E507A0)
#define DICPGDOGDEH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13E50490)
#define DICPGDOGDEH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13E50220)
#define DICPGDOGDEH__CTOR_OFFSET UNITYSDK_OFFSET(0x13E505C0)

inline static constexpr unsigned int DICPGDOGDEH_TypeDefinitionIndex = 74291;

class DICPGDOGDEH : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::GameObject* OAJBJDPMFDA; // 0x18
	::UnityEngine::GameObject* KFEJEMBBMNF; // 0x20
	::UnityEngine::UI::Text* KFMCLODMMKD; // 0x28
	::FGCOIBFFCHB* IMENBGPAJOM; // 0x30
	::MonoUITableScrollV2* DMEECNMBLNF; // 0x38
	::FGCOIBFFCHB* JFADEKINBNF; // 0x40
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x48
	::UnityEngine::UI::Text* EGEMIFNNNEA; // 0x50
	::MonoUITableScrollV2* FJPHNKDBPFL; // 0x58
	::UnityEngine::UI::Text* CIODPKMJMGE; // 0x60
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICPGDOGDEH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DICPGDOGDEH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DICPGDOGDEH_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DICPGDOGDEH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KDGMEFEJMGJ(::NMLHLBHFJBI* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::NMLHLBHFJBI*))((::PBYTE)hIl2Cpp + DICPGDOGDEH_KDGMEFEJMGJ_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICPGDOGDEH_KGEBDLGBGNM_OFFSET))(this);
	}

	static ::DICPGDOGDEH* KDGMEFEJMGJ_1(::NMLHLBHFJBI* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::DICPGDOGDEH*(*)(::NMLHLBHFJBI*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DICPGDOGDEH_KDGMEFEJMGJ_1_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}
};
