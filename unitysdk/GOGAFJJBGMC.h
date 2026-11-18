#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define GOGAFJJBGMC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13D6F440)
#define GOGAFJJBGMC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13D6F2C0)
#define GOGAFJJBGMC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13D6F070)
#define GOGAFJJBGMC__CTOR_OFFSET UNITYSDK_OFFSET(0x13D6F430)

inline static constexpr unsigned int GOGAFJJBGMC_TypeDefinitionIndex = 64411;

class GOGAFJJBGMC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* GFEMEHHCDOB; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::MoleMole::MonoGamepadSelectable* EKHHHPKLDBB; // 0x28
	::LGINJIKKBJA* IOBFOJKIKFI; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x40
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x48
	::LGINJIKKBJA* FDDAMLEALPJ; // 0x50
	::FGCOIBFFCHB* ANDHLPBLPBG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGAFJJBGMC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOGAFJJBGMC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOGAFJJBGMC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOGAFJJBGMC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
