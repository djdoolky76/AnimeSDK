#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
class NAMPLLGENLO;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define MMLMKJOMMMO_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x14071230)
#define MMLMKJOMMMO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14071360)
#define MMLMKJOMMMO_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x140715A0)
#define MMLMKJOMMMO_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x14071400)
#define MMLMKJOMMMO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x140711A0)
#define MMLMKJOMMMO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14071020)
#define MMLMKJOMMMO__CTOR_OFFSET UNITYSDK_OFFSET(0x14071220)

inline static constexpr unsigned int MMLMKJOMMMO_TypeDefinitionIndex = 53527;

class MMLMKJOMMMO : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x20
	::UnityEngine::Transform* AIBOHAIMPOJ; // 0x28
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLMKJOMMMO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MMLMKJOMMMO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLMKJOMMMO_KGEBDLGBGNM_OFFSET))(this);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MMLMKJOMMMO_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MMLMKJOMMMO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::MMLMKJOMMMO* KDGMEFEJMGJ(::NAMPLLGENLO* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::MMLMKJOMMMO*(*)(::NAMPLLGENLO*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MMLMKJOMMMO_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::NAMPLLGENLO* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::NAMPLLGENLO*))((::PBYTE)hIl2Cpp + MMLMKJOMMMO_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}
};
