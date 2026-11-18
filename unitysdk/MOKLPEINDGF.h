#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define MOKLPEINDGF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x131A8400)
#define MOKLPEINDGF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x131A82C0)
#define MOKLPEINDGF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x131A8080)
#define MOKLPEINDGF__CTOR_OFFSET UNITYSDK_OFFSET(0x131A83F0)

inline static constexpr unsigned int MOKLPEINDGF_TypeDefinitionIndex = 93234;

class MOKLPEINDGF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x20
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0x28
	::LGINJIKKBJA* KEMJHCLLAMH; // 0x30
	::FGCOIBFFCHB* KAKLJBDHIJM; // 0x38
	::FGCOIBFFCHB* DEAPLILJLJD; // 0x40
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x48
	::LGINJIKKBJA* IOIANILNPPI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKLPEINDGF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MOKLPEINDGF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MOKLPEINDGF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKLPEINDGF_KGEBDLGBGNM_OFFSET))(this);
	}
};
