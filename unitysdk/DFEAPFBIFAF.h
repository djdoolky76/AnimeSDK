#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define DFEAPFBIFAF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19A3BA20)
#define DFEAPFBIFAF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19A3B990)
#define DFEAPFBIFAF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19A3B7E0)
#define DFEAPFBIFAF__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3BA10)

inline static constexpr unsigned int DFEAPFBIFAF_TypeDefinitionIndex = 69086;

class DFEAPFBIFAF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IJGBDGOFGNK; // 0x18
	::UnityEngine::RectTransform* HDNILHDIDAO; // 0x20
	::UnityEngine::RectTransform* BAEKBHECMIP; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x38
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEAPFBIFAF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFEAPFBIFAF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEAPFBIFAF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFEAPFBIFAF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
