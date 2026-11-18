#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define LLBCCBDDGLE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1519DE20)
#define LLBCCBDDGLE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1519DD70)
#define LLBCCBDDGLE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1519DBA0)
#define LLBCCBDDGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1519DE10)

inline static constexpr unsigned int LLBCCBDDGLE_TypeDefinitionIndex = 86256;

class LLBCCBDDGLE : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::LGINJIKKBJA* KBCLEFAKGHE; // 0x20
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x28
	::LGINJIKKBJA* KNBPMLBFPHH; // 0x30
	::ADEJAGFCBHK* FJPCAHJIAGA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBCCBDDGLE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LLBCCBDDGLE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LLBCCBDDGLE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBCCBDDGLE_KGEBDLGBGNM_OFFSET))(this);
	}
};
