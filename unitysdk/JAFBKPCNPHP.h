#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define JAFBKPCNPHP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13ABB270)
#define JAFBKPCNPHP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13ABB1B0)
#define JAFBKPCNPHP__CTOR_OFFSET UNITYSDK_OFFSET(0x13ABB260)

inline static constexpr unsigned int JAFBKPCNPHP_TypeDefinitionIndex = 54951;

class JAFBKPCNPHP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x18
	::UnityEngine::UI::Text* FKIIMEJJPBB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFBKPCNPHP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JAFBKPCNPHP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JAFBKPCNPHP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
