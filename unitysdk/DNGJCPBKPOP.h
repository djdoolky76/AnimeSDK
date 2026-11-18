#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class ILHILFJNIFH;
class LGINJIKKBJA;
class UIDragComponent;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define DNGJCPBKPOP_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x19D7E120)
#define DNGJCPBKPOP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19D7E250)
#define DNGJCPBKPOP_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x19D7E3C0)
#define DNGJCPBKPOP_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x19D7E2F0)
#define DNGJCPBKPOP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19D7E010)
#define DNGJCPBKPOP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19D7DDE0)
#define DNGJCPBKPOP__CTOR_OFFSET UNITYSDK_OFFSET(0x19D7E110)

inline static constexpr unsigned int DNGJCPBKPOP_TypeDefinitionIndex = 86080;

class DNGJCPBKPOP : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::GameObject* HIKNPAOENBG; // 0x18
	::UnityEngine::GameObject* BFBMGJEIOEB; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::GameObject* CFIIKHBHHCG; // 0x30
	::UnityEngine::GameObject* GMGBIBJBIJO; // 0x38
	::FGCOIBFFCHB* CMHCFHJBGOP; // 0x40
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x48
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x50
	::UIDragComponent* AJMDIJEJCEA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGJCPBKPOP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNGJCPBKPOP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNGJCPBKPOP_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNGJCPBKPOP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KDGMEFEJMGJ(::ILHILFJNIFH* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::ILHILFJNIFH*))((::PBYTE)hIl2Cpp + DNGJCPBKPOP_KDGMEFEJMGJ_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGJCPBKPOP_KGEBDLGBGNM_OFFSET))(this);
	}

	static ::DNGJCPBKPOP* KDGMEFEJMGJ_1(::ILHILFJNIFH* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::DNGJCPBKPOP*(*)(::ILHILFJNIFH*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNGJCPBKPOP_KDGMEFEJMGJ_1_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}
};
