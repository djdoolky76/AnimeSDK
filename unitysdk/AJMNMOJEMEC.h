#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define AJMNMOJEMEC_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x182083B0)
#define AJMNMOJEMEC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18208310)
#define AJMNMOJEMEC__CTOR_OFFSET UNITYSDK_OFFSET(0x18208480)

inline static constexpr unsigned int AJMNMOJEMEC_TypeDefinitionIndex = 60618;

class AJMNMOJEMEC : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::RectTransform* MOOHFHCPOIE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMNMOJEMEC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJMNMOJEMEC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMNMOJEMEC_EFKGNFCEENK_OFFSET))(this);
	}
};
