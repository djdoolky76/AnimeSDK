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

#define KBHPIECEAEI_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x157DE190)
#define KBHPIECEAEI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x157DE0F0)
#define KBHPIECEAEI_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x157DE000)
#define KBHPIECEAEI_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x157DDF00)
#define KBHPIECEAEI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x157DDDC0)
#define KBHPIECEAEI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x157DDB50)
#define KBHPIECEAEI__CTOR_OFFSET UNITYSDK_OFFSET(0x157DDEF0)

inline static constexpr unsigned int KBHPIECEAEI_TypeDefinitionIndex = 92492;

class KBHPIECEAEI : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Text* KFMCLODMMKD; // 0x20
	::UnityEngine::GameObject* KFEJEMBBMNF; // 0x28
	::FGCOIBFFCHB* JFADEKINBNF; // 0x30
	::MonoUITableScrollV2* FJPHNKDBPFL; // 0x38
	::UnityEngine::UI::Text* CIODPKMJMGE; // 0x40
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x48
	::UnityEngine::GameObject* OAJBJDPMFDA; // 0x50
	::MonoUITableScrollV2* DMEECNMBLNF; // 0x58
	::FGCOIBFFCHB* IMENBGPAJOM; // 0x60
	::UnityEngine::UI::Text* EGEMIFNNNEA; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHPIECEAEI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBHPIECEAEI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ(::NMLHLBHFJBI* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::NMLHLBHFJBI*))((::PBYTE)hIl2Cpp + KBHPIECEAEI_KDGMEFEJMGJ_OFFSET))(this, AEJAMJDBHAM);
	}

	static ::KBHPIECEAEI* KDGMEFEJMGJ_1(::NMLHLBHFJBI* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::KBHPIECEAEI*(*)(::NMLHLBHFJBI*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBHPIECEAEI_KDGMEFEJMGJ_1_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHPIECEAEI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBHPIECEAEI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBHPIECEAEI_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}
};
