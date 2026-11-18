#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define HOPFFKKFOLG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x101280E0)
#define HOPFFKKFOLG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10127FD0)
#define HOPFFKKFOLG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10127E20)
#define HOPFFKKFOLG__CTOR_OFFSET UNITYSDK_OFFSET(0x101280D0)

inline static constexpr unsigned int HOPFFKKFOLG_TypeDefinitionIndex = 81017;

class HOPFFKKFOLG : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* IIAPIPEOJCO; // 0x18
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x20
	::LGINJIKKBJA* JGPBKAHIBLG; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPFFKKFOLG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOPFFKKFOLG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOPFFKKFOLG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPFFKKFOLG_KGEBDLGBGNM_OFFSET))(this);
	}
};
