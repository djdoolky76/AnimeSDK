#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define LFECGGLGBEG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15186DB0)
#define LFECGGLGBEG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15186CE0)
#define LFECGGLGBEG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15186B90)
#define LFECGGLGBEG__CTOR_OFFSET UNITYSDK_OFFSET(0x15186DA0)

inline static constexpr unsigned int LFECGGLGBEG_TypeDefinitionIndex = 64144;

class LFECGGLGBEG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* IODBDPOLPKA; // 0x18
	::LGINJIKKBJA* BKDDKDMILCA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFECGGLGBEG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LFECGGLGBEG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFECGGLGBEG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LFECGGLGBEG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
