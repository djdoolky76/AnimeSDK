#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class ImgTextParserBase; }
namespace MoleMole { class UIControlCollection; }

#define AGMFHDCFHDO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x144DA720)
#define AGMFHDCFHDO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x144DA620)
#define AGMFHDCFHDO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x144DA440)
#define AGMFHDCFHDO__CTOR_OFFSET UNITYSDK_OFFSET(0x144DA710)

inline static constexpr unsigned int AGMFHDCFHDO_TypeDefinitionIndex = 53931;

class AGMFHDCFHDO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ILMJFFOMHOC; // 0x18
	::MoleMole::ImgTextParserBase* AMEEMEPHGEL; // 0x20
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x28
	::FGCOIBFFCHB* HDAELHOLDCI; // 0x30
	::FGCOIBFFCHB* AJIBHBJNOCE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMFHDCFHDO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AGMFHDCFHDO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AGMFHDCFHDO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMFHDCFHDO_KGEBDLGBGNM_OFFSET))(this);
	}
};
