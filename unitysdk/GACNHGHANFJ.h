#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }

#define GACNHGHANFJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15CCFC00)
#define GACNHGHANFJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15CCFA80)
#define GACNHGHANFJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15CCF840)
#define GACNHGHANFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15CCFBF0)

inline static constexpr unsigned int GACNHGHANFJ_TypeDefinitionIndex = 42977;

class GACNHGHANFJ : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x18
	::MoleMole::MonoGamepadCustomList* EBIHJKBPAKO; // 0x20
	::LGINJIKKBJA* DAEMMMBCODF; // 0x28
	::LGINJIKKBJA* IFIMBDGBGKG; // 0x30
	::UnityEngine::Animation* NPAJLLHKPLJ; // 0x38
	::FGCOIBFFCHB* CFNLJOOOFGD; // 0x40
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x48
	::FGCOIBFFCHB* LLDEIIPFIIB; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACNHGHANFJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GACNHGHANFJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GACNHGHANFJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACNHGHANFJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
