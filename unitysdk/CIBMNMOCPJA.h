#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CIBMNMOCPJA_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1479FC00)
#define CIBMNMOCPJA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1479FB80)
#define CIBMNMOCPJA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1479FA20)
#define CIBMNMOCPJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1479FD40)

inline static constexpr unsigned int CIBMNMOCPJA_TypeDefinitionIndex = 42025;

class CIBMNMOCPJA : public ::IOOIHHOJOPI
{
public:
	::LGINJIKKBJA* MNEINFFNPME; // 0x28
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBMNMOCPJA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CIBMNMOCPJA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBMNMOCPJA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBMNMOCPJA_EFKGNFCEENK_OFFSET))(this);
	}
};
