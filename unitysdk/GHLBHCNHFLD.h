#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define GHLBHCNHFLD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CC7100)
#define GHLBHCNHFLD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16CC6F10)
#define GHLBHCNHFLD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CC6C20)
#define GHLBHCNHFLD__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC70F0)

inline static constexpr unsigned int GHLBHCNHFLD_TypeDefinitionIndex = 71427;

class GHLBHCNHFLD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* IAEPDCJHLAG; // 0x18
	::LGINJIKKBJA* BBGDFLCLICG; // 0x20
	::LGINJIKKBJA* PLBBKLEFNNL; // 0x28
	::UnityEngine::GameObject* PIDOALPFGLI; // 0x30
	::UnityEngine::GameObject* CFANOKILMGF; // 0x38
	::UnityEngine::GameObject* PEBOJLJPIAN; // 0x40
	::FGCOIBFFCHB* FPNJKAGHEAE; // 0x48
	::LGINJIKKBJA* KNPOHNBBILB; // 0x50
	::LGINJIKKBJA* CHDBOHHJKIP; // 0x58
	::LGINJIKKBJA* KPPHIAMJIHF; // 0x60
	::UnityEngine::GameObject* HOBIIEFFILH; // 0x68
	::FGCOIBFFCHB* MEGIKHMABAA; // 0x70
	::UnityEngine::GameObject* DKHFDEMDIIK; // 0x78
	::LGINJIKKBJA* LIMGAMFNFCE; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLBHCNHFLD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GHLBHCNHFLD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GHLBHCNHFLD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLBHCNHFLD_KGEBDLGBGNM_OFFSET))(this);
	}
};
