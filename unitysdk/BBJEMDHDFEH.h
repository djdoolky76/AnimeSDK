#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define BBJEMDHDFEH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1854A270)
#define BBJEMDHDFEH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1854A1A0)
#define BBJEMDHDFEH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1854A050)
#define BBJEMDHDFEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1854A260)

inline static constexpr unsigned int BBJEMDHDFEH_TypeDefinitionIndex = 40515;

class BBJEMDHDFEH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJEMDHDFEH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBJEMDHDFEH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BBJEMDHDFEH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBJEMDHDFEH_KGEBDLGBGNM_OFFSET))(this);
	}
};
