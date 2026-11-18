#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define HBEOGADJBBA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17AE81E0)
#define HBEOGADJBBA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17AE80F0)
#define HBEOGADJBBA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17AE7F50)
#define HBEOGADJBBA__CTOR_OFFSET UNITYSDK_OFFSET(0x17AE81D0)

inline static constexpr unsigned int HBEOGADJBBA_TypeDefinitionIndex = 58743;

class HBEOGADJBBA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MBKACMJJMBH; // 0x18
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x20
	::UnityEngine::Transform* EHMLMJKEJMM; // 0x28
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEOGADJBBA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBEOGADJBBA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEOGADJBBA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBEOGADJBBA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
