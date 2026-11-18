#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define BJJJBDKKCLO_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x142562C0)
#define BJJJBDKKCLO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14256240)
#define BJJJBDKKCLO__CTOR_OFFSET UNITYSDK_OFFSET(0x14256300)

inline static constexpr unsigned int BJJJBDKKCLO_TypeDefinitionIndex = 59879;

class BJJJBDKKCLO : public ::IOOIHHOJOPI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJJBDKKCLO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BJJJBDKKCLO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJJBDKKCLO_EFKGNFCEENK_OFFSET))(this);
	}
};
