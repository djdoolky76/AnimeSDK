#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }

#define EGDDAAKHCAN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13547B50)
#define EGDDAAKHCAN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13547A80)
#define EGDDAAKHCAN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x135478E0)
#define EGDDAAKHCAN__CTOR_OFFSET UNITYSDK_OFFSET(0x13547B40)

inline static constexpr unsigned int EGDDAAKHCAN_TypeDefinitionIndex = 47989;

class EGDDAAKHCAN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDDAAKHCAN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGDDAAKHCAN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EGDDAAKHCAN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDDAAKHCAN_KGEBDLGBGNM_OFFSET))(this);
	}
};
