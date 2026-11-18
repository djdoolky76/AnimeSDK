#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define HHOCOIECMCN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17E4CDF0)
#define HHOCOIECMCN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17E4CD20)
#define HHOCOIECMCN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17E4CBD0)
#define HHOCOIECMCN__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4CDE0)

inline static constexpr unsigned int HHOCOIECMCN_TypeDefinitionIndex = 58893;

class HHOCOIECMCN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KBCLEFAKGHE; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOCOIECMCN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHOCOIECMCN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHOCOIECMCN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOCOIECMCN_KGEBDLGBGNM_OFFSET))(this);
	}
};
