#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define ENGOBMGPKNE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x169B2E90)
#define ENGOBMGPKNE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x169B2DC0)
#define ENGOBMGPKNE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169B2C70)
#define ENGOBMGPKNE__CTOR_OFFSET UNITYSDK_OFFSET(0x169B2E80)

inline static constexpr unsigned int ENGOBMGPKNE_TypeDefinitionIndex = 85220;

class ENGOBMGPKNE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGOBMGPKNE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENGOBMGPKNE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENGOBMGPKNE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGOBMGPKNE_KGEBDLGBGNM_OFFSET))(this);
	}
};
