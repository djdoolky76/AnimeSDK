#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CMELIKJJDGN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x149768A0)
#define CMELIKJJDGN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x149767B0)
#define CMELIKJJDGN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x149765D0)
#define CMELIKJJDGN__CTOR_OFFSET UNITYSDK_OFFSET(0x14976890)

inline static constexpr unsigned int CMELIKJJDGN_TypeDefinitionIndex = 85280;

class CMELIKJJDGN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18
	::UnityEngine::GameObject* KKMCLPDAJKJ; // 0x20
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::GameObject* AJIBHBJNOCE; // 0x38
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMELIKJJDGN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMELIKJJDGN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMELIKJJDGN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMELIKJJDGN_KGEBDLGBGNM_OFFSET))(this);
	}
};
