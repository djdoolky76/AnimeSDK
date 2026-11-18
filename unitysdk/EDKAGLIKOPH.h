#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define EDKAGLIKOPH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14147690)
#define EDKAGLIKOPH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x141475E0)
#define EDKAGLIKOPH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14147450)
#define EDKAGLIKOPH__CTOR_OFFSET UNITYSDK_OFFSET(0x14147680)

inline static constexpr unsigned int EDKAGLIKOPH_TypeDefinitionIndex = 87707;

class EDKAGLIKOPH : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadCustomList* JOKIFCDCLHL; // 0x18
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x20
	::LGINJIKKBJA* FDHICDPOGGP; // 0x28
	::UnityEngine::RectTransform* CFDBFOAHDCC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKAGLIKOPH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDKAGLIKOPH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKAGLIKOPH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EDKAGLIKOPH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
