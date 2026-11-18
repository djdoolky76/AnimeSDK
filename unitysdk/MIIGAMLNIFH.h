#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define MIIGAMLNIFH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13D32B00)
#define MIIGAMLNIFH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13D32A50)
#define MIIGAMLNIFH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13D32850)
#define MIIGAMLNIFH__CTOR_OFFSET UNITYSDK_OFFSET(0x13D32AF0)

inline static constexpr unsigned int MIIGAMLNIFH_TypeDefinitionIndex = 63615;

class MIIGAMLNIFH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IJGBDGOFGNK; // 0x18
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x20
	::UnityEngine::RectTransform* BAEKBHECMIP; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x38
	::UnityEngine::RectTransform* HDNILHDIDAO; // 0x40
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIGAMLNIFH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIIGAMLNIFH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIIGAMLNIFH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIGAMLNIFH_KGEBDLGBGNM_OFFSET))(this);
	}
};
