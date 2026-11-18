#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define GLFPPFEPEEK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F27CE0)
#define GLFPPFEPEEK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F27C30)
#define GLFPPFEPEEK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F27A90)
#define GLFPPFEPEEK__CTOR_OFFSET UNITYSDK_OFFSET(0x15F27CD0)

inline static constexpr unsigned int GLFPPFEPEEK_TypeDefinitionIndex = 68825;

class GLFPPFEPEEK : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::FGCOIBFFCHB* IAOCBIHABLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFPPFEPEEK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLFPPFEPEEK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLFPPFEPEEK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFPPFEPEEK_KGEBDLGBGNM_OFFSET))(this);
	}
};
