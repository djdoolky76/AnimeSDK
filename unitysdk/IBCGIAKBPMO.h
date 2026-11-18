#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define IBCGIAKBPMO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15BF2C20)
#define IBCGIAKBPMO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15BF2B90)
#define IBCGIAKBPMO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15BF2A40)
#define IBCGIAKBPMO__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF2C10)

inline static constexpr unsigned int IBCGIAKBPMO_TypeDefinitionIndex = 90591;

class IBCGIAKBPMO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCGIAKBPMO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IBCGIAKBPMO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCGIAKBPMO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IBCGIAKBPMO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
