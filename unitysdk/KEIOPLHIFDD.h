#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define KEIOPLHIFDD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x130BCD60)
#define KEIOPLHIFDD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x130BCCD0)
#define KEIOPLHIFDD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x130BCB80)
#define KEIOPLHIFDD__CTOR_OFFSET UNITYSDK_OFFSET(0x130BCD50)

inline static constexpr unsigned int KEIOPLHIFDD_TypeDefinitionIndex = 89897;

class KEIOPLHIFDD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MAMKMHKDPCA; // 0x18
	::LGINJIKKBJA* ONFIMMMLLGI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIOPLHIFDD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KEIOPLHIFDD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIOPLHIFDD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KEIOPLHIFDD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
