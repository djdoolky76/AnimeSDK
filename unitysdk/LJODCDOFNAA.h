#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIActivitySearchObjectWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class MEKABAIJMNM_1;

#define LJODCDOFNAA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16375500)
#define LJODCDOFNAA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x163753C0)
#define LJODCDOFNAA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16375190)
#define LJODCDOFNAA__CTOR_OFFSET UNITYSDK_OFFSET(0x163754F0)

inline static constexpr unsigned int LJODCDOFNAA_TypeDefinitionIndex = 81475;

class LJODCDOFNAA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* PPKPOIOFFDG; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIActivitySearchObjectWidgetController*>* GALEDGEAGBM; // 0x20
	::FGCOIBFFCHB* HMFLBEEBLPK; // 0x28
	::LGINJIKKBJA* GLGJMIMCCAF; // 0x30
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x38
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJODCDOFNAA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJODCDOFNAA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJODCDOFNAA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJODCDOFNAA_KGEBDLGBGNM_OFFSET))(this);
	}
};
