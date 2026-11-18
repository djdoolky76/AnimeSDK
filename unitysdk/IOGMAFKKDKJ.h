#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IOGMAFKKDKJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14200350)
#define IOGMAFKKDKJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14200210)
#define IOGMAFKKDKJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x141FFFC0)
#define IOGMAFKKDKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14200340)

inline static constexpr unsigned int IOGMAFKKDKJ_TypeDefinitionIndex = 60689;

class IOGMAFKKDKJ : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* MPNGIAIPCKN; // 0x18
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x20
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30
	::LGINJIKKBJA* HLDFGMJAEHC; // 0x38
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x40
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x48
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x50
	::UnityEngine::GameObject* HLJMMLMNFDG; // 0x58
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGMAFKKDKJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOGMAFKKDKJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOGMAFKKDKJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOGMAFKKDKJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
