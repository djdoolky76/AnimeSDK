#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define PDJMMDJIFJG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x178B9300)
#define PDJMMDJIFJG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x178B9200)
#define PDJMMDJIFJG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x178B8FE0)
#define PDJMMDJIFJG__CTOR_OFFSET UNITYSDK_OFFSET(0x178B92F0)

inline static constexpr unsigned int PDJMMDJIFJG_TypeDefinitionIndex = 87192;

class PDJMMDJIFJG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PHFOGPCBGOG; // 0x18
	::FGCOIBFFCHB* GIEMLHKIENF; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x30
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x38
	::UnityEngine::RectTransform* EJHNNMBHAPK; // 0x40
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0x48
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJMMDJIFJG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PDJMMDJIFJG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PDJMMDJIFJG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJMMDJIFJG_KGEBDLGBGNM_OFFSET))(this);
	}
};
