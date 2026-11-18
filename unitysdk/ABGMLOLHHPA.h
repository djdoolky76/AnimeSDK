#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define ABGMLOLHHPA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16FD2C10)
#define ABGMLOLHHPA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16FD2A90)
#define ABGMLOLHHPA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16FD2860)
#define ABGMLOLHHPA__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD2C00)

inline static constexpr unsigned int ABGMLOLHHPA_TypeDefinitionIndex = 62151;

class ABGMLOLHHPA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* MPNPOHOFACA; // 0x18
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x20
	::LGINJIKKBJA* GGIKNGHLMIJ; // 0x28
	::LGINJIKKBJA* KJKDLAKBIMI; // 0x30
	::MoleMole::MonoGamepadNavigatableList* CGFOGMNDHAC; // 0x38
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x40
	::LGINJIKKBJA* JKCFMIFPAGF; // 0x48
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x50
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGMLOLHHPA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABGMLOLHHPA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGMLOLHHPA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABGMLOLHHPA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
