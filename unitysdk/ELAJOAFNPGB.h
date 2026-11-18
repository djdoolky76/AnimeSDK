#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define ELAJOAFNPGB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14177300)
#define ELAJOAFNPGB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14177210)
#define ELAJOAFNPGB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14177080)
#define ELAJOAFNPGB__CTOR_OFFSET UNITYSDK_OFFSET(0x141772F0)

inline static constexpr unsigned int ELAJOAFNPGB_TypeDefinitionIndex = 59885;

class ELAJOAFNPGB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x18
	::UnityEngine::Transform* PNKBOLJOOLM; // 0x20
	::UnityEngine::Transform* ODALDIOFMPH; // 0x28
	::LGINJIKKBJA* KGPBAPEINKN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELAJOAFNPGB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ELAJOAFNPGB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELAJOAFNPGB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ELAJOAFNPGB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
