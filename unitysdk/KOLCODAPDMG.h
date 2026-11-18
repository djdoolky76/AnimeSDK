#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define KOLCODAPDMG_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1A2DFD00)
#define KOLCODAPDMG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A2DFC80)
#define KOLCODAPDMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2DFD40)

inline static constexpr unsigned int KOLCODAPDMG_TypeDefinitionIndex = 43468;

class KOLCODAPDMG : public ::IOOIHHOJOPI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCODAPDMG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KOLCODAPDMG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCODAPDMG_EFKGNFCEENK_OFFSET))(this);
	}
};
