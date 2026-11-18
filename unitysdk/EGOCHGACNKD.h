#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define EGOCHGACNKD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x148DF170)
#define EGOCHGACNKD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x148DF0C0)
#define EGOCHGACNKD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x148DEF10)
#define EGOCHGACNKD__CTOR_OFFSET UNITYSDK_OFFSET(0x148DF160)

inline static constexpr unsigned int EGOCHGACNKD_TypeDefinitionIndex = 42777;

class EGOCHGACNKD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::LGINJIKKBJA* CCLPLBPBAOD; // 0x28
	::UnityEngine::GameObject* KIBHNNJCPNB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOCHGACNKD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGOCHGACNKD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGOCHGACNKD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOCHGACNKD_KGEBDLGBGNM_OFFSET))(this);
	}
};
