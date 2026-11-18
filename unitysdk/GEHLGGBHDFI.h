#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define GEHLGGBHDFI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CB04B0)
#define GEHLGGBHDFI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16CB0420)
#define GEHLGGBHDFI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CB02D0)
#define GEHLGGBHDFI__CTOR_OFFSET UNITYSDK_OFFSET(0x16CB04A0)

inline static constexpr unsigned int GEHLGGBHDFI_TypeDefinitionIndex = 76443;

class GEHLGGBHDFI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BCPJHNGIAKL; // 0x18
	::UnityEngine::UI::Text* ODALDIOFMPH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLGGBHDFI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GEHLGGBHDFI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GEHLGGBHDFI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHLGGBHDFI_KGEBDLGBGNM_OFFSET))(this);
	}
};
