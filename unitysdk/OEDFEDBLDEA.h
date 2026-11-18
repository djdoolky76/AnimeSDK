#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define OEDFEDBLDEA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x129250B0)
#define OEDFEDBLDEA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12924FE0)
#define OEDFEDBLDEA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12924E90)
#define OEDFEDBLDEA__CTOR_OFFSET UNITYSDK_OFFSET(0x129250A0)

inline static constexpr unsigned int OEDFEDBLDEA_TypeDefinitionIndex = 55214;

class OEDFEDBLDEA : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* FIBGPLOMAGI; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDFEDBLDEA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OEDFEDBLDEA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDFEDBLDEA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OEDFEDBLDEA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
