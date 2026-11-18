#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define IDKGCILGANO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1539F8C0)
#define IDKGCILGANO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1539F7F0)
#define IDKGCILGANO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1539F6A0)
#define IDKGCILGANO__CTOR_OFFSET UNITYSDK_OFFSET(0x1539F8B0)

inline static constexpr unsigned int IDKGCILGANO_TypeDefinitionIndex = 60537;

class IDKGCILGANO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDKGCILGANO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IDKGCILGANO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IDKGCILGANO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDKGCILGANO_KGEBDLGBGNM_OFFSET))(this);
	}
};
