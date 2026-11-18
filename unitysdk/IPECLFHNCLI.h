#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }

#define IPECLFHNCLI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13CA16D0)
#define IPECLFHNCLI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13CA1620)
#define IPECLFHNCLI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13CA1490)
#define IPECLFHNCLI__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA16C0)

inline static constexpr unsigned int IPECLFHNCLI_TypeDefinitionIndex = 38645;

class IPECLFHNCLI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x18
	::MoleMole::MonoGamepadCustomList* JOKIFCDCLHL; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::LGINJIKKBJA* FDHICDPOGGP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPECLFHNCLI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IPECLFHNCLI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IPECLFHNCLI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPECLFHNCLI_KGEBDLGBGNM_OFFSET))(this);
	}
};
